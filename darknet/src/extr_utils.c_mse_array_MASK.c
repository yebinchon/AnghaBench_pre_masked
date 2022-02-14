
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float) ;

float FUNC_1(float *VAR_0, int VAR_1)
{
    int VAR_2;
    float VAR_3 = 0;
    for(VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2) VAR_3 += VAR_0[VAR_2]*VAR_0[VAR_2];
    return FUNC_0(VAR_3/VAR_1);
}
