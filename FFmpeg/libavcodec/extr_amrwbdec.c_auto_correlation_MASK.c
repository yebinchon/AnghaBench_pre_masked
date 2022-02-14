
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static float FUNC_0(float *VAR_1, float VAR_2, int VAR_3)
{
    int VAR_4;
    float VAR_5 = 0.0;

    for (VAR_4 = 7; VAR_4 < VAR_0 - 2; VAR_4++) {
        float VAR_6 = (VAR_1[VAR_4] - VAR_2) * (VAR_1[VAR_4 - VAR_3] - VAR_2);
        VAR_5 += VAR_6 * VAR_6;
    }
    return VAR_5;
}
