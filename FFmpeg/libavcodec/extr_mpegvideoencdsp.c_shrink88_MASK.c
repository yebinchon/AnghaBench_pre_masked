
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;



__attribute__((used)) static void FUNC_0(uint8_t *VAR_0, int VAR_1,
                     const uint8_t *VAR_2, int VAR_3,
                     int VAR_4, int VAR_5)
{
    int VAR_6, VAR_7;

    for (; VAR_5 > 0; VAR_5--) {
        for(VAR_6 = VAR_4;VAR_6 > 0; VAR_6--) {
            int VAR_8 = 0;
            for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
                VAR_8 += VAR_2[0] + VAR_2[1] + VAR_2[2] + VAR_2[3] +
                       VAR_2[4] + VAR_2[5] + VAR_2[6] + VAR_2[7];
                VAR_2 += VAR_3;
            }
            *(VAR_0++) = (VAR_8 + 32) >> 6;
            VAR_2 += 8 - 8 * VAR_3;
        }
        VAR_2 += 8 * VAR_3 - 8 * VAR_4;
        VAR_0 += VAR_1 - VAR_4;
    }
}
