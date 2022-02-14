
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float) ;

__attribute__((used)) static inline void FUNC_1(float *VAR_0, float *VAR_1, float VAR_2, int VAR_3)
{
    int VAR_4;
    float VAR_5 = 0, VAR_6 = 0;
    float VAR_7[2];
    float VAR_8;
    float VAR_9[2];


    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        VAR_5 += VAR_0[VAR_4] * VAR_1[VAR_4];
        VAR_6 += VAR_1[VAR_4] * VAR_1[VAR_4];
    }


    VAR_5 *= VAR_2;
    VAR_8 = VAR_2;
    VAR_7[0] = VAR_8 * VAR_8 + VAR_6 - 2 * VAR_5;
    VAR_7[1] = VAR_8 * VAR_8 + VAR_6 + 2 * VAR_5;
    if (VAR_7[0] < 6e-4f || VAR_7[1] < 6e-4f) {
        for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
            VAR_1[VAR_4] = VAR_0[VAR_4];
        return;
    }

    VAR_9[0] = 1.0f / FUNC_0(VAR_7[0]);
    VAR_9[1] = 1.0f / FUNC_0(VAR_7[1]);

    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
        float VAR_10[2];

        VAR_10[0] = VAR_2 * VAR_0[VAR_4];
        VAR_10[1] = VAR_1[VAR_4];
        VAR_0[VAR_4] = VAR_9[0] * (VAR_10[0] - VAR_10[1]);
        VAR_1[VAR_4] = VAR_9[1] * (VAR_10[0] + VAR_10[1]);
    }
}
