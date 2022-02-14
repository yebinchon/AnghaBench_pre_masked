
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ DWORD ;



int FUNC_0(DWORD *VAR_0, DWORD *VAR_1, uint32_t VAR_2)
{
    for (int VAR_3 = VAR_2 - 1; VAR_3 >= 0; VAR_3--) {
        if (VAR_0[VAR_3] > VAR_1[VAR_3]) {
            return 1;
        }
        if (VAR_0[VAR_3] < VAR_1[VAR_3]) {
            return -1;
        }
    }
    return 0;
}
