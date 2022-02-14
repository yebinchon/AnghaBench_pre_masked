
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float VAR_0 ;

__attribute__((used)) static void FUNC_0(float *VAR_1, int VAR_2)
{
    int VAR_3;


    for (VAR_3 = 0; VAR_3 < VAR_2 - 2; VAR_3++)
        VAR_1[VAR_3] = (-VAR_1[VAR_3] + 2 * VAR_1[VAR_3 + 1] - VAR_1[VAR_3 + 2]) * VAR_0;
}
