
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ptrdiff_t ;
typedef int int32_t ;
typedef int const SUINT ;



__attribute__((used)) static void FUNC_0(int32_t *VAR_0, const int32_t *VAR_1, int VAR_2, ptrdiff_t VAR_3)
{
    int VAR_4;

    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
        VAR_0[VAR_4] += (SUINT)((int)(VAR_1[VAR_4] * (SUINT)VAR_2 + (1 << 2)) >> 3);
}
