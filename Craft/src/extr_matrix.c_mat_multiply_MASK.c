
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(float *VAR_0, float *VAR_1, float *VAR_2) {
    float VAR_3[16];
    for (int VAR_4 = 0; VAR_4 < 4; VAR_4++) {
        for (int VAR_5 = 0; VAR_5 < 4; VAR_5++) {
            int VAR_6 = VAR_4 * 4 + VAR_5;
            float VAR_7 = 0;
            for (int VAR_8 = 0; VAR_8 < 4; VAR_8++) {
                int VAR_9 = VAR_8 * 4 + VAR_5;
                int VAR_10 = VAR_4 * 4 + VAR_8;
                VAR_7 += VAR_1[VAR_9] * VAR_2[VAR_10];
            }
            VAR_3[VAR_6] = VAR_7;
        }
    }
    for (int VAR_11 = 0; VAR_11 < 16; VAR_11++) {
        VAR_0[VAR_11] = VAR_3[VAR_11];
    }
}
