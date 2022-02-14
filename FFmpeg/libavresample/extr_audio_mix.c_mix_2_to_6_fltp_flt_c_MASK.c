
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(float **VAR_0, float **VAR_1, int VAR_2,
                                  int VAR_3, int VAR_4)
{
    float VAR_5, VAR_6;
    float *VAR_7 = VAR_0[0];
    float *VAR_8 = VAR_0[1];
    float *VAR_9 = VAR_0[2];
    float *VAR_10 = VAR_0[3];
    float *VAR_11 = VAR_0[4];
    float *VAR_12 = VAR_0[5];
    float *VAR_13 = VAR_7;
    float *VAR_14 = VAR_8;

    while (VAR_2 > 0) {
        VAR_5 = *VAR_13++;
        VAR_6 = *VAR_14++;
        *VAR_7++ = VAR_5 * VAR_1[0][0] + VAR_6 * VAR_1[0][1];
        *VAR_8++ = VAR_5 * VAR_1[1][0] + VAR_6 * VAR_1[1][1];
        *VAR_9++ = VAR_5 * VAR_1[2][0] + VAR_6 * VAR_1[2][1];
        *VAR_10++ = VAR_5 * VAR_1[3][0] + VAR_6 * VAR_1[3][1];
        *VAR_11++ = VAR_5 * VAR_1[4][0] + VAR_6 * VAR_1[4][1];
        *VAR_12++ = VAR_5 * VAR_1[5][0] + VAR_6 * VAR_1[5][1];
        VAR_2--;
    }
}
