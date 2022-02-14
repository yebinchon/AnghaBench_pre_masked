
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(float *VAR_0, const float *VAR_1,
                                 const float *VAR_2, const float *VAR_3, int VAR_4)
{
    int VAR_5, VAR_6;

    VAR_0 += VAR_4;
    VAR_3 += VAR_4;
    VAR_1 += VAR_4;

    for (VAR_5 = -VAR_4, VAR_6 = VAR_4 - 1; VAR_5 < 0; VAR_5++, VAR_6--) {
        float VAR_7 = VAR_1[VAR_5];
        float VAR_8 = VAR_2[VAR_6];
        float VAR_9 = VAR_3[VAR_5];
        float VAR_10 = VAR_3[VAR_6];
        VAR_0[VAR_5] = VAR_7 * VAR_10 - VAR_8 * VAR_9;
        VAR_0[VAR_6] = VAR_7 * VAR_9 + VAR_8 * VAR_10;
    }
}
