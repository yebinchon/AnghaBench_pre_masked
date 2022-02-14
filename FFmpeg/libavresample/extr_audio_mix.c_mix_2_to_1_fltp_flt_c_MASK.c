
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(float **VAR_0, float **VAR_1, int VAR_2,
                                  int VAR_3, int VAR_4)
{
    float *VAR_5 = VAR_0[0];
    float *VAR_6 = VAR_0[1];
    float *VAR_7 = VAR_5;
    float VAR_8 = VAR_1[0][0];
    float VAR_9 = VAR_1[0][1];

    while (VAR_2 > 4) {
        *VAR_7++ = *VAR_5++ * VAR_8 + *VAR_6++ * VAR_9;
        *VAR_7++ = *VAR_5++ * VAR_8 + *VAR_6++ * VAR_9;
        *VAR_7++ = *VAR_5++ * VAR_8 + *VAR_6++ * VAR_9;
        *VAR_7++ = *VAR_5++ * VAR_8 + *VAR_6++ * VAR_9;
        VAR_2 -= 4;
    }
    while (VAR_2 > 0) {
        *VAR_7++ = *VAR_5++ * VAR_8 + *VAR_6++ * VAR_9;
        VAR_2--;
    }
}
