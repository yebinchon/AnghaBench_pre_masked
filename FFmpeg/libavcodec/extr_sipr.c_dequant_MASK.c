
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (float*,float const* const,int) ;

__attribute__((used)) static void FUNC_1(float *VAR_0, const int *VAR_1, const float * const VAR_2[])
{
    int VAR_3;
    int VAR_4 = 2;
    int VAR_5 = 5;

    for (VAR_3 = 0; VAR_3 < VAR_5; VAR_3++)
        FUNC_0(VAR_0 + VAR_4*VAR_3, VAR_2[VAR_3] + VAR_4*VAR_1[VAR_3], VAR_4*sizeof(float));

}
