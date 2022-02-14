
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
float FUNC_0(const float* VAR_0, const float* VAR_1, int VAR_2)
{
    float VAR_3 = 0;
    int VAR_4;

    for(VAR_4=0; VAR_4<VAR_2; VAR_4++)
        VAR_3 += VAR_0[VAR_4] * VAR_1[VAR_4];

    return VAR_3;
}
