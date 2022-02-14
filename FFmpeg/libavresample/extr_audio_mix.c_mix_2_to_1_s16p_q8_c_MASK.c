
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int16_t ;



__attribute__((used)) static void FUNC_0(int16_t **VAR_0, int16_t **VAR_1, int VAR_2,
                                 int VAR_3, int VAR_4)
{
    int16_t *VAR_5 = VAR_0[0];
    int16_t *VAR_6 = VAR_0[1];
    int16_t *VAR_7 = VAR_5;
    int16_t VAR_8 = VAR_1[0][0];
    int16_t VAR_9 = VAR_1[0][1];

    while (VAR_2 > 4) {
        *VAR_7++ = (*VAR_5++ * VAR_8 + *VAR_6++ * VAR_9) >> 8;
        *VAR_7++ = (*VAR_5++ * VAR_8 + *VAR_6++ * VAR_9) >> 8;
        *VAR_7++ = (*VAR_5++ * VAR_8 + *VAR_6++ * VAR_9) >> 8;
        *VAR_7++ = (*VAR_5++ * VAR_8 + *VAR_6++ * VAR_9) >> 8;
        VAR_2 -= 4;
    }
    while (VAR_2 > 0) {
        *VAR_7++ = (*VAR_5++ * VAR_8 + *VAR_6++ * VAR_9) >> 8;
        VAR_2--;
    }
}
