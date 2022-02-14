
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int int16_t ;



 unsigned int* VAR_0 ;

__attribute__((used)) static void FUNC_0(int16_t *VAR_1, int16_t *VAR_2, int VAR_3)
{
    const unsigned VAR_4 = VAR_0[VAR_3];

    int VAR_5;
    int VAR_6[16];
    static const uint8_t VAR_7[4] = { 0, 1 * 16, 4 * 16, 5 * 16 };

    for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
        const int VAR_8 = 13 * (VAR_2[4 * VAR_5 + 0] + VAR_2[4 * VAR_5 + 2]);
        const int VAR_9 = 13 * (VAR_2[4 * VAR_5 + 0] - VAR_2[4 * VAR_5 + 2]);
        const int VAR_10 = 7 * VAR_2[4 * VAR_5 + 1] - 17 * VAR_2[4 * VAR_5 + 3];
        const int VAR_11 = 17 * VAR_2[4 * VAR_5 + 1] + 7 * VAR_2[4 * VAR_5 + 3];

        VAR_6[4 * VAR_5 + 0] = VAR_8 + VAR_11;
        VAR_6[4 * VAR_5 + 1] = VAR_9 + VAR_10;
        VAR_6[4 * VAR_5 + 2] = VAR_9 - VAR_10;
        VAR_6[4 * VAR_5 + 3] = VAR_8 - VAR_11;
    }

    for (VAR_5 = 0; VAR_5 < 4; VAR_5++) {
        const int VAR_12 = VAR_7[VAR_5];
        const int VAR_13 = 13 * (VAR_6[4 * 0 + VAR_5] + VAR_6[4 * 2 + VAR_5]);
        const int VAR_14 = 13 * (VAR_6[4 * 0 + VAR_5] - VAR_6[4 * 2 + VAR_5]);
        const int VAR_15 = 7 * VAR_6[4 * 1 + VAR_5] - 17 * VAR_6[4 * 3 + VAR_5];
        const int VAR_16 = 17 * VAR_6[4 * 1 + VAR_5] + 7 * VAR_6[4 * 3 + VAR_5];

        VAR_1[16 * 0 + VAR_12] = (int)((VAR_13 + VAR_16) * VAR_4 + 0x80000) >> 20;
        VAR_1[16 * 2 + VAR_12] = (int)((VAR_14 + VAR_15) * VAR_4 + 0x80000) >> 20;
        VAR_1[16 * 8 + VAR_12] = (int)((VAR_14 - VAR_15) * VAR_4 + 0x80000) >> 20;
        VAR_1[16 * 10 + VAR_12] = (int)((VAR_13 - VAR_16) * VAR_4 + 0x80000) >> 20;
    }
}
