
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
float FUNC_0(int VAR_0, float *VAR_1, int VAR_2, float *VAR_3, int VAR_4)
{
    int VAR_5;
    float VAR_6 = 0;
    for(VAR_5 = 0; VAR_5 < VAR_0; ++VAR_5) VAR_6 += VAR_1[VAR_5*VAR_2] * VAR_3[VAR_5*VAR_4];
    return VAR_6;
}
