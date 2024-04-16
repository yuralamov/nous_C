#include "main.h"

char si = 'B'; /*Признак типа символа (бинарный, восьмиричный, десятичный,
                        шестнадцатиричный или строковый*/

int main(int argc, char* argv[]){
    for (int i = 1; i < argc; i++){
        printf("%d аргумент : %s содержит ", i, argv[i]);

        int k = strlen(argv[i]);
        printf("%d символов\n", k);

        char *s = argv[i];

        while (*s) {
            printf("%c ", *s);
            int sa = *s;
            printf("%d\n", sa);

            if (((sa == 48) || (sa == 49))
                    && (si == 'B')) {
                si = 'B';
                printf("BIN?\n");
            }
            else if (((sa >= 48) && (sa <= 56))
                    && ((si == 'B') || (si == 'O'))) {
                si = 'O';
                printf("OCT?\n");
            }
            else if (((sa >= 48) && (sa <= 58))
                    && ((si == 'B') || (si == 'O') || (si == 'D'))) {
                si = 'D';
                printf("DEC?\n");
            }
            else if ((((sa >= 48) && (sa <= 70)) || ((sa >= 97) && (sa <= 102)))
                    && ((si == 'B') || (si == 'O') || (si == 'D') || (si == 'H'))) {
                si = 'H';
                printf("HEX?\n");
            }
            else si = 'S';

            printf("%c\n", si);
            s++;
        }
            printf("Вернее всего это %c\n", si);

    }
}
