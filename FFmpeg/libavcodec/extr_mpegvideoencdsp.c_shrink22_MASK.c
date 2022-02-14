
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;



__attribute__((used)) static void FUNC_0(uint8_t *VAR_0, int VAR_1,
                     const uint8_t *VAR_2, int VAR_3,
                     int VAR_4, int VAR_5)
{
    int VAR_6;
    const uint8_t *VAR_7, *VAR_8;
    uint8_t *VAR_9;

    for (; VAR_5 > 0; VAR_5--) {
        VAR_7 = VAR_2;
        VAR_8 = VAR_7 + VAR_3;
        VAR_9 = VAR_0;
        for (VAR_6 = VAR_4; VAR_6 >= 4; VAR_6 -= 4) {
            VAR_9[0] = (VAR_7[0] + VAR_7[1] + VAR_8[0] + VAR_8[1] + 2) >> 2;
            VAR_9[1] = (VAR_7[2] + VAR_7[3] + VAR_8[2] + VAR_8[3] + 2) >> 2;
            VAR_9[2] = (VAR_7[4] + VAR_7[5] + VAR_8[4] + VAR_8[5] + 2) >> 2;
            VAR_9[3] = (VAR_7[6] + VAR_7[7] + VAR_8[6] + VAR_8[7] + 2) >> 2;
            VAR_7 += 8;
            VAR_8 += 8;
            VAR_9 += 4;
        }
        for (; VAR_6 > 0; VAR_6--) {
            VAR_9[0] = (VAR_7[0] + VAR_7[1] + VAR_8[0] + VAR_8[1] + 2) >> 2;
            VAR_7 += 2;
            VAR_8 += 2;
            VAR_9++;
        }
        VAR_2 += 2 * VAR_3;
        VAR_0 += VAR_1;
    }
}
