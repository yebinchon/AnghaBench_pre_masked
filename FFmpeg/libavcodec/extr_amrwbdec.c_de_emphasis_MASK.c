
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;

__attribute__((used)) static void FUNC_0(float *VAR_1, float *VAR_2, float VAR_3, float VAR_4[1])
{
    int VAR_5;

    VAR_1[0] = VAR_2[0] + VAR_3 * VAR_4[0];

    for (VAR_5 = 1; VAR_5 < VAR_0; VAR_5++)
         VAR_1[VAR_5] = VAR_2[VAR_5] + VAR_1[VAR_5 - 1] * VAR_3;

    VAR_4[0] = VAR_1[VAR_0 - 1];
}
