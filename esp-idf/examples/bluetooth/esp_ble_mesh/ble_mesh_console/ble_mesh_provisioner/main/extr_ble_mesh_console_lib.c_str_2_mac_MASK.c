
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (char*) ;

bool FUNC_1(uint8_t *VAR_0, uint8_t *VAR_1)
{
    uint8_t VAR_2 = 0;
    uint8_t VAR_3 = 0;
    uint8_t *VAR_4 = VAR_0;

    if (FUNC_0((char *)VAR_4) != 17) {
        return 0;
    }

    for (VAR_2 = 0; VAR_2 < 17 ; VAR_2++) {
        if (VAR_2 % 3 == 2) {
            if (VAR_4[VAR_2] != ':') {
                return 0;
            }

            continue;
        }

        if ((VAR_4[VAR_2] >= '0') && (VAR_4[VAR_2] <= '9')) {
            VAR_3 = VAR_3 * 16 + VAR_4[VAR_2] - '0';
        } else if ((VAR_4[VAR_2] >= 'A') && (VAR_4[VAR_2] <= 'F')) {
            VAR_3 = VAR_3 * 16 + VAR_4[VAR_2] - 'A' + 10;
        } else if ((VAR_4[VAR_2] >= 'a') && (VAR_4[VAR_2] <= 'f')) {
            VAR_3 = VAR_3 * 16 + VAR_4[VAR_2] - 'a' + 10;
        } else {
            return 0;
        }

        if (VAR_2 % 3 == 1) {
            *VAR_1++ = VAR_3;
            VAR_3 = 0;
        }
    }

    return 1;
}
