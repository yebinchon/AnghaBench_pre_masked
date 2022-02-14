
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (float*,float const* const,int) ;

__attribute__((used)) static void FUNC_1(float *VAR_0, const int *VAR_1, const float * const VAR_2[])
{
    int VAR_3;

    for (VAR_3 = 0; VAR_3 < 4; VAR_3++)
        FUNC_0(VAR_0 + 3*VAR_3, VAR_2[VAR_3] + 3*VAR_1[VAR_3], 3*sizeof(float));

    FUNC_0(VAR_0 + 12, VAR_2[4] + 4*VAR_1[4], 4*sizeof(float));
}
