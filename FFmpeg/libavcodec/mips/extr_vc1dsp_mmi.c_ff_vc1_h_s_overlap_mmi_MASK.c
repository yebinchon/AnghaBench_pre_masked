
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;



void FUNC_0(int16_t *VAR_0, int16_t *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{
    int VAR_5;
    int VAR_6, VAR_7, VAR_8, VAR_9;
    int VAR_10, VAR_11;
    int VAR_12 = VAR_4 & 2 ? 3 : 4;
    int VAR_13 = 7 - VAR_12;
    for (VAR_5 = 0; VAR_5 < 8; VAR_5++) {
        VAR_6 = VAR_0[6];
        VAR_7 = VAR_0[7];
        VAR_8 = VAR_1[0];
        VAR_9 = VAR_1[1];
        VAR_10 = VAR_6 - VAR_9;
        VAR_11 = VAR_6 - VAR_9 + VAR_7 - VAR_8;

        VAR_0[6] = ((VAR_6 << 3) - VAR_10 + VAR_12) >> 3;
        VAR_0[7] = ((VAR_7 << 3) - VAR_11 + VAR_13) >> 3;
        VAR_1[0] = ((VAR_8 << 3) + VAR_11 + VAR_12) >> 3;
        VAR_1[1] = ((VAR_9 << 3) + VAR_10 + VAR_13) >> 3;

        VAR_1 += VAR_3;
        VAR_0 += VAR_2;
        if (VAR_4 & 1) {
            VAR_13 = 7 - VAR_13;
            VAR_12 = 7 - VAR_12;
        }
    }
}
