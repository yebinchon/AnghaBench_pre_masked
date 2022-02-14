
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void FUNC_0(float *VAR_0, float *VAR_1, intptr_t VAR_2)
{
    int VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        if (VAR_0[VAR_3] > 0.0) {
            if (VAR_1[VAR_3] > 0.0) {
                VAR_1[VAR_3] = VAR_0[VAR_3] - VAR_1[VAR_3];
            } else {
                float VAR_4 = VAR_1[VAR_3];
                VAR_1[VAR_3] = VAR_0[VAR_3];
                VAR_0[VAR_3] += VAR_4;
            }
        } else {
            if (VAR_1[VAR_3] > 0.0) {
                VAR_1[VAR_3] += VAR_0[VAR_3];
            } else {
                float VAR_5 = VAR_1[VAR_3];
                VAR_1[VAR_3] = VAR_0[VAR_3];
                VAR_0[VAR_3] -= VAR_5;
            }
        }
    }
}
