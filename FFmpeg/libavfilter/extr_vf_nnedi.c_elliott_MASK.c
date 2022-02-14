
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 float FUNC_0 (float) ;

__attribute__((used)) static void FUNC_1(float *VAR_0, const int VAR_1)
{
    int VAR_2;

    for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
        VAR_0[VAR_2] = VAR_0[VAR_2] / (1.0f + FUNC_0(VAR_0[VAR_2]));
}
