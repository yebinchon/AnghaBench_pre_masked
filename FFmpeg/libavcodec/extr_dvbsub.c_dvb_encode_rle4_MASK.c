
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(uint8_t **VAR_0,
                            const uint8_t *VAR_1, int VAR_2,
                            int VAR_3, int VAR_4)
{
    uint8_t *VAR_5;
    unsigned int VAR_6;
    int VAR_7;
    int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

    VAR_5 = *VAR_0;

    for(VAR_9 = 0; VAR_9 < VAR_4; VAR_9++) {
        *VAR_5++ = 0x11;
        VAR_6 = 0;
        VAR_7 = 4;

        VAR_8 = 0;
        while (VAR_8 < VAR_3) {
            VAR_11 = VAR_8;
            VAR_13 = VAR_1[VAR_11++];
            while (VAR_11 < VAR_3 && VAR_1[VAR_11] == VAR_13)
                VAR_11++;
            VAR_10 = VAR_11 - VAR_8;
            if (VAR_13 == 0 && VAR_10 == 2) {
                FUNC_0(0);
                FUNC_0(0xd);
            } else if (VAR_13 == 0 && (VAR_10 >= 3 && VAR_10 <= 9)) {
                FUNC_0(0);
                FUNC_0(VAR_10 - 2);
            } else if (VAR_10 >= 4 && VAR_10 <= 7) {
                FUNC_0(0);
                FUNC_0(8 + VAR_10 - 4);
                FUNC_0(VAR_13);
            } else if (VAR_10 >= 9 && VAR_10 <= 24) {
                FUNC_0(0);
                FUNC_0(0xe);
                FUNC_0(VAR_10 - 9);
                FUNC_0(VAR_13);
            } else if (VAR_10 >= 25) {
                if (VAR_10 > 280)
                    VAR_10 = 280;
                VAR_12 = VAR_10 - 25;
                FUNC_0(0);
                FUNC_0(0xf);
                FUNC_0(VAR_12 >> 4);
                FUNC_0(VAR_12 & 0xf);
                FUNC_0(VAR_13);
            } else {
                FUNC_0(VAR_13);
                if (VAR_13 == 0) {
                    FUNC_0(0xc);
                }
                VAR_10 = 1;
            }
            VAR_8 += VAR_10;
        }

        FUNC_0(0);
        FUNC_0(0);
        if (VAR_7 != 4) {
            *VAR_5++ = VAR_6;
        }
        *VAR_5++ = 0xf0;
        VAR_1 += VAR_2;
    }
    *VAR_0 = VAR_5;
}
