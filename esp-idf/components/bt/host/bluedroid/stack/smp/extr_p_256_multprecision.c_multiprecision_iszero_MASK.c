
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef scalar_t__ DWORD ;



int FUNC_0(DWORD *VAR_0, uint32_t VAR_1)
{
    for (uint32_t VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
        if (VAR_0[VAR_2]) {
            return 0;
        }

    return 1;
}
