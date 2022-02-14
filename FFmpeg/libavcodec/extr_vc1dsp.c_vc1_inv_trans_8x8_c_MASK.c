
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;



__attribute__((used)) static void FUNC_0(int16_t VAR_0[64])
{
    int VAR_1;
    register int VAR_2, VAR_3, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
    int16_t *VAR_10, *VAR_11, VAR_12[64];

    VAR_10 = VAR_0;
    VAR_11 = VAR_12;
    for (VAR_1 = 0; VAR_1 < 8; VAR_1++) {
        VAR_2 = 12 * (VAR_10[ 0] + VAR_10[32]) + 4;
        VAR_3 = 12 * (VAR_10[ 0] - VAR_10[32]) + 4;
        VAR_4 = 16 * VAR_10[16] + 6 * VAR_10[48];
        VAR_5 = 6 * VAR_10[16] - 16 * VAR_10[48];

        VAR_6 = VAR_2 + VAR_4;
        VAR_7 = VAR_3 + VAR_5;
        VAR_8 = VAR_3 - VAR_5;
        VAR_9 = VAR_2 - VAR_4;

        VAR_2 = 16 * VAR_10[ 8] + 15 * VAR_10[24] + 9 * VAR_10[40] + 4 * VAR_10[56];
        VAR_3 = 15 * VAR_10[ 8] - 4 * VAR_10[24] - 16 * VAR_10[40] - 9 * VAR_10[56];
        VAR_4 = 9 * VAR_10[ 8] - 16 * VAR_10[24] + 4 * VAR_10[40] + 15 * VAR_10[56];
        VAR_5 = 4 * VAR_10[ 8] - 9 * VAR_10[24] + 15 * VAR_10[40] - 16 * VAR_10[56];

        VAR_11[0] = (VAR_6 + VAR_2) >> 3;
        VAR_11[1] = (VAR_7 + VAR_3) >> 3;
        VAR_11[2] = (VAR_8 + VAR_4) >> 3;
        VAR_11[3] = (VAR_9 + VAR_5) >> 3;
        VAR_11[4] = (VAR_9 - VAR_5) >> 3;
        VAR_11[5] = (VAR_8 - VAR_4) >> 3;
        VAR_11[6] = (VAR_7 - VAR_3) >> 3;
        VAR_11[7] = (VAR_6 - VAR_2) >> 3;

        VAR_10 += 1;
        VAR_11 += 8;
    }

    VAR_10 = VAR_12;
    VAR_11 = VAR_0;
    for (VAR_1 = 0; VAR_1 < 8; VAR_1++) {
        VAR_2 = 12 * (VAR_10[ 0] + VAR_10[32]) + 64;
        VAR_3 = 12 * (VAR_10[ 0] - VAR_10[32]) + 64;
        VAR_4 = 16 * VAR_10[16] + 6 * VAR_10[48];
        VAR_5 = 6 * VAR_10[16] - 16 * VAR_10[48];

        VAR_6 = VAR_2 + VAR_4;
        VAR_7 = VAR_3 + VAR_5;
        VAR_8 = VAR_3 - VAR_5;
        VAR_9 = VAR_2 - VAR_4;

        VAR_2 = 16 * VAR_10[ 8] + 15 * VAR_10[24] + 9 * VAR_10[40] + 4 * VAR_10[56];
        VAR_3 = 15 * VAR_10[ 8] - 4 * VAR_10[24] - 16 * VAR_10[40] - 9 * VAR_10[56];
        VAR_4 = 9 * VAR_10[ 8] - 16 * VAR_10[24] + 4 * VAR_10[40] + 15 * VAR_10[56];
        VAR_5 = 4 * VAR_10[ 8] - 9 * VAR_10[24] + 15 * VAR_10[40] - 16 * VAR_10[56];

        VAR_11[ 0] = (VAR_6 + VAR_2) >> 7;
        VAR_11[ 8] = (VAR_7 + VAR_3) >> 7;
        VAR_11[16] = (VAR_8 + VAR_4) >> 7;
        VAR_11[24] = (VAR_9 + VAR_5) >> 7;
        VAR_11[32] = (VAR_9 - VAR_5 + 1) >> 7;
        VAR_11[40] = (VAR_8 - VAR_4 + 1) >> 7;
        VAR_11[48] = (VAR_7 - VAR_3 + 1) >> 7;
        VAR_11[56] = (VAR_6 - VAR_2 + 1) >> 7;

        VAR_10++;
        VAR_11++;
    }
}
