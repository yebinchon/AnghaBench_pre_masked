
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ UINT32 ;
typedef int DWORD ;


 scalar_t__ VAR_0 ;

UINT32 FUNC_0(DWORD VAR_1)
{
    uint32_t VAR_2;
    for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++, VAR_1 >>= 1)
        if (VAR_1 == 0) {
            break;
        }

    return VAR_2;
}
