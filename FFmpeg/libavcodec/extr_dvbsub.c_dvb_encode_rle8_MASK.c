
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(uint8_t **VAR_0,
                            const uint8_t *VAR_1, int VAR_2,
                            int VAR_3, int VAR_4)
{
    uint8_t *VAR_5;
    int VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

    VAR_5 = *VAR_0;

    for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
        *VAR_5++ = 0x12;

        VAR_6 = 0;
        while (VAR_6 < VAR_3) {
            VAR_9 = VAR_6;
            VAR_10 = VAR_1[VAR_9++];
            while (VAR_9 < VAR_3 && VAR_1[VAR_9] == VAR_10)
                VAR_9++;
            VAR_8 = VAR_9 - VAR_6;
            if (VAR_8 == 1 && VAR_10) {

                *VAR_5++ = VAR_10;
            } else {
                if (VAR_10 == 0x00) {

                    VAR_8 = FUNC_0(VAR_8, 127);
                    *VAR_5++ = 0x00;
                    *VAR_5++ = VAR_8;
                } else if (VAR_8 > 2) {

                    VAR_8 = FUNC_0(VAR_8, 127);
                    *VAR_5++ = 0x00;
                    *VAR_5++ = 0x80+VAR_8;
                    *VAR_5++ = VAR_10;
                }
                else if (VAR_8 == 2) {
                    *VAR_5++ = VAR_10;
                    *VAR_5++ = VAR_10;
                } else {
                    *VAR_5++ = VAR_10;
                    VAR_8 = 1;
                }
            }
            VAR_6 += VAR_8;
        }


        *VAR_5++ = 0x00;
        *VAR_5++ = 0xf0;
        VAR_1 += VAR_2;
    }
    *VAR_0 = VAR_5;
}
