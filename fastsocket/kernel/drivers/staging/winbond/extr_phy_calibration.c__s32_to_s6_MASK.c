
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int s32 ;



u32 FUNC_0(s32 VAR_0)
{
    u32 VAR_1;

    if (VAR_0 > 31)
    {
        VAR_0 = 31;
    }
    else if (VAR_0 < -32)
    {
        VAR_0 = -32;
    }

    VAR_1 = VAR_0 & 0x003F;

    return VAR_1;
}
