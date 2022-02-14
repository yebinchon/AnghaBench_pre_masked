
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int UINT32 ;
typedef scalar_t__ DWORD ;



UINT32 FUNC_0(DWORD *VAR_0, uint32_t VAR_1)
{
    int VAR_2;
    for (VAR_2 = VAR_1 - 1; VAR_2 >= 0; VAR_2--)
        if (VAR_0[VAR_2]) {
            break;
        }
    return (VAR_2 + 1);
}
