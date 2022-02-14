
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint16_t ;


 int FUNC_0 (int const) ;

__attribute__((used)) static void FUNC_1(const uint16_t *VAR_0[], int VAR_1[],
                             uint8_t *VAR_2, int VAR_3, int VAR_4,
                             int VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
    int VAR_9, VAR_10, VAR_11;
    int VAR_12 = VAR_0[3] != ((void*)0);
    int VAR_13 = 16 - VAR_7, VAR_14 = (VAR_7 - 8) * 2;
    for (VAR_10 = 0; VAR_10 < VAR_4; VAR_10++) {
        uint16_t *VAR_15 = (uint16_t *)(VAR_2 + VAR_3 * VAR_10);
        uint16_t VAR_16;

        switch(VAR_6) {
        case 3:
            if (VAR_5 && !VAR_12) {
                for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
                    VAR_16 = FUNC_0(VAR_0[0][VAR_9]);
                    *VAR_15++ = FUNC_0(VAR_16 << VAR_13 | VAR_16 >> VAR_14);
                    VAR_16 = FUNC_0(VAR_0[1][VAR_9]);
                    *VAR_15++ = FUNC_0(VAR_16 << VAR_13 | VAR_16 >> VAR_14);
                    VAR_16 = FUNC_0(VAR_0[2][VAR_9]);
                    *VAR_15++ = FUNC_0(VAR_16 << VAR_13 | VAR_16 >> VAR_14);
                    *VAR_15++ = 0xffff;
                }
            } else if (VAR_5 && VAR_12) {
                for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
                    VAR_16 = FUNC_0(VAR_0[0][VAR_9]);
                    *VAR_15++ = FUNC_0(VAR_16 << VAR_13 | VAR_16 >> VAR_14);
                    VAR_16 = FUNC_0(VAR_0[1][VAR_9]);
                    *VAR_15++ = FUNC_0(VAR_16 << VAR_13 | VAR_16 >> VAR_14);
                    VAR_16 = FUNC_0(VAR_0[2][VAR_9]);
                    *VAR_15++ = FUNC_0(VAR_16 << VAR_13 | VAR_16 >> VAR_14);
                    VAR_16 = FUNC_0(VAR_0[3][VAR_9]);
                    *VAR_15++ = FUNC_0(VAR_16 << VAR_13 | VAR_16 >> VAR_14);
                }
            } else {
                for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
                    VAR_16 = FUNC_0(VAR_0[0][VAR_9]);
                    *VAR_15++ = FUNC_0(VAR_16 << VAR_13 | VAR_16 >> VAR_14);
                    VAR_16 = FUNC_0(VAR_0[1][VAR_9]);
                    *VAR_15++ = FUNC_0(VAR_16 << VAR_13 | VAR_16 >> VAR_14);
                    VAR_16 = FUNC_0(VAR_0[2][VAR_9]);
                    *VAR_15++ = FUNC_0(VAR_16 << VAR_13 | VAR_16 >> VAR_14);
                }
            }
            break;
        case 2:
            if (VAR_5 && !VAR_12) {
                for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
                    *VAR_15++ = FUNC_0(VAR_0[0][VAR_9] << VAR_13 | VAR_0[0][VAR_9] >> VAR_14);
                    *VAR_15++ = FUNC_0(VAR_0[1][VAR_9] << VAR_13 | VAR_0[1][VAR_9] >> VAR_14);
                    *VAR_15++ = FUNC_0(VAR_0[2][VAR_9] << VAR_13 | VAR_0[2][VAR_9] >> VAR_14);
                    *VAR_15++ = 0xffff;
                }
            } else if (VAR_5 && VAR_12) {
                for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
                    *VAR_15++ = FUNC_0(VAR_0[0][VAR_9] << VAR_13 | VAR_0[0][VAR_9] >> VAR_14);
                    *VAR_15++ = FUNC_0(VAR_0[1][VAR_9] << VAR_13 | VAR_0[1][VAR_9] >> VAR_14);
                    *VAR_15++ = FUNC_0(VAR_0[2][VAR_9] << VAR_13 | VAR_0[2][VAR_9] >> VAR_14);
                    *VAR_15++ = FUNC_0(VAR_0[3][VAR_9] << VAR_13 | VAR_0[3][VAR_9] >> VAR_14);
                }
            } else {
                for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
                    *VAR_15++ = FUNC_0(VAR_0[0][VAR_9] << VAR_13 | VAR_0[0][VAR_9] >> VAR_14);
                    *VAR_15++ = FUNC_0(VAR_0[1][VAR_9] << VAR_13 | VAR_0[1][VAR_9] >> VAR_14);
                    *VAR_15++ = FUNC_0(VAR_0[2][VAR_9] << VAR_13 | VAR_0[2][VAR_9] >> VAR_14);
                }
            }
            break;
        case 1:
            if (VAR_5 && !VAR_12) {
                for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
                    *VAR_15++ = FUNC_0(VAR_0[0][VAR_9]) << VAR_13 | FUNC_0(VAR_0[0][VAR_9]) >> VAR_14;
                    *VAR_15++ = FUNC_0(VAR_0[1][VAR_9]) << VAR_13 | FUNC_0(VAR_0[1][VAR_9]) >> VAR_14;
                    *VAR_15++ = FUNC_0(VAR_0[2][VAR_9]) << VAR_13 | FUNC_0(VAR_0[2][VAR_9]) >> VAR_14;
                    *VAR_15++ = 0xffff;
                }
            } else if (VAR_5 && VAR_12) {
                for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
                    *VAR_15++ = FUNC_0(VAR_0[0][VAR_9]) << VAR_13 | FUNC_0(VAR_0[0][VAR_9]) >> VAR_14;
                    *VAR_15++ = FUNC_0(VAR_0[1][VAR_9]) << VAR_13 | FUNC_0(VAR_0[1][VAR_9]) >> VAR_14;
                    *VAR_15++ = FUNC_0(VAR_0[2][VAR_9]) << VAR_13 | FUNC_0(VAR_0[2][VAR_9]) >> VAR_14;
                    *VAR_15++ = FUNC_0(VAR_0[3][VAR_9]) << VAR_13 | FUNC_0(VAR_0[3][VAR_9]) >> VAR_14;
                }
            } else {
                for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
                    *VAR_15++ = FUNC_0(VAR_0[0][VAR_9]) << VAR_13 | FUNC_0(VAR_0[0][VAR_9]) >> VAR_14;
                    *VAR_15++ = FUNC_0(VAR_0[1][VAR_9]) << VAR_13 | FUNC_0(VAR_0[1][VAR_9]) >> VAR_14;
                    *VAR_15++ = FUNC_0(VAR_0[2][VAR_9]) << VAR_13 | FUNC_0(VAR_0[2][VAR_9]) >> VAR_14;
                }
            }
            break;
        default:
            if (VAR_5 && !VAR_12) {
                for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
                    *VAR_15++ = VAR_0[0][VAR_9] << VAR_13 | VAR_0[0][VAR_9] >> VAR_14;
                    *VAR_15++ = VAR_0[1][VAR_9] << VAR_13 | VAR_0[1][VAR_9] >> VAR_14;
                    *VAR_15++ = VAR_0[2][VAR_9] << VAR_13 | VAR_0[2][VAR_9] >> VAR_14;
                    *VAR_15++ = 0xffff;
                }
            } else if (VAR_5 && VAR_12) {
                for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
                    *VAR_15++ = VAR_0[0][VAR_9] << VAR_13 | VAR_0[0][VAR_9] >> VAR_14;
                    *VAR_15++ = VAR_0[1][VAR_9] << VAR_13 | VAR_0[1][VAR_9] >> VAR_14;
                    *VAR_15++ = VAR_0[2][VAR_9] << VAR_13 | VAR_0[2][VAR_9] >> VAR_14;
                    *VAR_15++ = VAR_0[3][VAR_9] << VAR_13 | VAR_0[3][VAR_9] >> VAR_14;
                }
            } else {
                for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++) {
                    *VAR_15++ = VAR_0[0][VAR_9] << VAR_13 | VAR_0[0][VAR_9] >> VAR_14;
                    *VAR_15++ = VAR_0[1][VAR_9] << VAR_13 | VAR_0[1][VAR_9] >> VAR_14;
                    *VAR_15++ = VAR_0[2][VAR_9] << VAR_13 | VAR_0[2][VAR_9] >> VAR_14;
                }
            }
        }
        for (VAR_11 = 0; VAR_11 < 3 + VAR_12; VAR_11++)
            VAR_0[VAR_11] += VAR_1[VAR_11] >> 1;
    }
}
