
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(uint8_t **VAR_0,
                           const uint8_t *VAR_1, int VAR_2,
                           int VAR_3, int VAR_4,
                           const int VAR_5[256])
{
    uint8_t *VAR_6;
    unsigned int VAR_7 = 0;
    int VAR_8;
    int VAR_9, VAR_10, VAR_11, VAR_12;

    VAR_6 = *VAR_0;

    for (VAR_10 = 0; VAR_10 < VAR_4; ++VAR_10) {
        VAR_8 = 0;
        for(VAR_9 = 0; VAR_9 < VAR_3; VAR_9 += VAR_11) {
            VAR_12 = VAR_1[VAR_9];
            for (VAR_11=1; VAR_9+VAR_11 < VAR_3; ++VAR_11)
                if (VAR_1[VAR_9+VAR_11] != VAR_12)
                    break;
            VAR_12 = VAR_5[VAR_12];
            FUNC_1(VAR_12 < 4);
            if (VAR_11 < 0x04) {
                FUNC_0((VAR_11 << 2)|VAR_12);
            } else if (VAR_11 < 0x10) {
                FUNC_0(VAR_11 >> 2);
                FUNC_0((VAR_11 << 2)|VAR_12);
            } else if (VAR_11 < 0x40) {
                FUNC_0(0);
                FUNC_0(VAR_11 >> 2);
                FUNC_0((VAR_11 << 2)|VAR_12);
            } else if (VAR_9+VAR_11 == VAR_3) {
                FUNC_0(0);
                FUNC_0(0);
                FUNC_0(0);
                FUNC_0(VAR_12);
            } else {
                if (VAR_11 > 0xff)
                    VAR_11 = 0xff;
                FUNC_0(0);
                FUNC_0(VAR_11 >> 6);
                FUNC_0(VAR_11 >> 2);
                FUNC_0((VAR_11 << 2)|VAR_12);
            }
        }

        if (VAR_8 & 1)
            FUNC_0(0);
        VAR_1 += VAR_2;
    }

    *VAR_0 = VAR_6;
}
