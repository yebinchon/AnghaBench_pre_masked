
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;



__attribute__((used)) static int FUNC_0(const uint8_t *VAR_0, char *VAR_1, char *VAR_2)
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < 8 && VAR_0[VAR_3] != ' '; VAR_3++) {
        VAR_1[VAR_3] = VAR_0[VAR_3];
    }
    VAR_1[VAR_3] = '\0';

    if (VAR_0[8] == '=') {
        VAR_3 = 10;
        while (VAR_3 < 80 && VAR_0[VAR_3] == ' ') {
            VAR_3++;
        }

        if (VAR_3 < 80) {
            *VAR_2++ = VAR_0[VAR_3];
            VAR_3++;
            if (VAR_0[VAR_3-1] == '\'') {
                for (; VAR_3 < 80 && VAR_0[VAR_3] != '\''; VAR_3++) {
                    *VAR_2++ = VAR_0[VAR_3];
                }
                *VAR_2++ = '\'';
            } else if (VAR_0[VAR_3-1] == '(') {
                for (; VAR_3 < 80 && VAR_0[VAR_3] != ')'; VAR_3++) {
                    *VAR_2++ = VAR_0[VAR_3];
                }
                *VAR_2++ = ')';
            } else {
                for (; VAR_3 < 80 && VAR_0[VAR_3] != ' ' && VAR_0[VAR_3] != '/'; VAR_3++) {
                    *VAR_2++ = VAR_0[VAR_3];
                }
            }
        }
    }
    *VAR_2 = '\0';
    return 0;
}
