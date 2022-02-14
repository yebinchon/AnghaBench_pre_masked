
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(float *VAR_0, float *VAR_1, float *VAR_2) {
    float VAR_3[4];
    for (int VAR_4 = 0; VAR_4 < 4; VAR_4++) {
        float VAR_5 = 0;
        for (int VAR_6 = 0; VAR_6 < 4; VAR_6++) {
            int VAR_7 = VAR_6 * 4 + VAR_4;
            int VAR_8 = VAR_6;
            VAR_5 += VAR_1[VAR_7] * VAR_2[VAR_8];
        }
        VAR_3[VAR_4] = VAR_5;
    }
    for (int VAR_9 = 0; VAR_9 < 4; VAR_9++) {
        VAR_0[VAR_9] = VAR_3[VAR_9];
    }
}
