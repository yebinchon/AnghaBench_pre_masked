
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(float VAR_0[6][4], int VAR_1, float *VAR_2) {
    float VAR_3 = 0.125;
    float VAR_4 = VAR_1 * 32 + 64;
    float *VAR_5 = VAR_2;
    VAR_0[0][0] = VAR_5[3] + VAR_5[0];
    VAR_0[0][1] = VAR_5[7] + VAR_5[4];
    VAR_0[0][2] = VAR_5[11] + VAR_5[8];
    VAR_0[0][3] = VAR_5[15] + VAR_5[12];
    VAR_0[1][0] = VAR_5[3] - VAR_5[0];
    VAR_0[1][1] = VAR_5[7] - VAR_5[4];
    VAR_0[1][2] = VAR_5[11] - VAR_5[8];
    VAR_0[1][3] = VAR_5[15] - VAR_5[12];
    VAR_0[2][0] = VAR_5[3] + VAR_5[1];
    VAR_0[2][1] = VAR_5[7] + VAR_5[5];
    VAR_0[2][2] = VAR_5[11] + VAR_5[9];
    VAR_0[2][3] = VAR_5[15] + VAR_5[13];
    VAR_0[3][0] = VAR_5[3] - VAR_5[1];
    VAR_0[3][1] = VAR_5[7] - VAR_5[5];
    VAR_0[3][2] = VAR_5[11] - VAR_5[9];
    VAR_0[3][3] = VAR_5[15] - VAR_5[13];
    VAR_0[4][0] = VAR_3 * VAR_5[3] + VAR_5[2];
    VAR_0[4][1] = VAR_3 * VAR_5[7] + VAR_5[6];
    VAR_0[4][2] = VAR_3 * VAR_5[11] + VAR_5[10];
    VAR_0[4][3] = VAR_3 * VAR_5[15] + VAR_5[14];
    VAR_0[5][0] = VAR_4 * VAR_5[3] - VAR_5[2];
    VAR_0[5][1] = VAR_4 * VAR_5[7] - VAR_5[6];
    VAR_0[5][2] = VAR_4 * VAR_5[11] - VAR_5[10];
    VAR_0[5][3] = VAR_4 * VAR_5[15] - VAR_5[14];
}
