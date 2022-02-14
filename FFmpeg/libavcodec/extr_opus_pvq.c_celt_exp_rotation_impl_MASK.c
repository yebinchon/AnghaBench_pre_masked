
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;



__attribute__((used)) static void FUNC_0(float *VAR_0, uint32_t VAR_1, uint32_t VAR_2,
                                   float VAR_3, float VAR_4)
{
    float *VAR_5;
    int VAR_6;

    VAR_5 = VAR_0;
    for (VAR_6 = 0; VAR_6 < VAR_1 - VAR_2; VAR_6++) {
        float VAR_7 = VAR_5[0];
        float VAR_8 = VAR_5[VAR_2];
        VAR_5[VAR_2] = VAR_3 * VAR_8 + VAR_4 * VAR_7;
        *VAR_5++ = VAR_3 * VAR_7 - VAR_4 * VAR_8;
    }

    VAR_5 = &VAR_0[VAR_1 - 2 * VAR_2 - 1];
    for (VAR_6 = VAR_1 - 2 * VAR_2 - 1; VAR_6 >= 0; VAR_6--) {
        float VAR_9 = VAR_5[0];
        float VAR_10 = VAR_5[VAR_2];
        VAR_5[VAR_2] = VAR_3 * VAR_10 + VAR_4 * VAR_9;
        *VAR_5-- = VAR_3 * VAR_9 - VAR_4 * VAR_10;
    }
}
