
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (double,double) ;
 int VAR_0 ;

__attribute__((used)) static float FUNC_1(const float *VAR_1, const float *VAR_2)
{
    int VAR_3;
    float VAR_4 = 0.0;

    for (VAR_3 = 0; VAR_3 < VAR_0 - 1; VAR_3++)
        VAR_4 += (VAR_1[VAR_3] - VAR_2[VAR_3]) * (VAR_1[VAR_3] - VAR_2[VAR_3]);



    return FUNC_0(0.0, 1.25 - VAR_4 * 0.8 * 512);
}
