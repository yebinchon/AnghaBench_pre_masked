
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int s32 ;


 int FUNC_0 (int) ;

s32 FUNC_1(u32 VAR_0)
{
    s32 VAR_1;

    VAR_1 = VAR_0 & 0x00FF;

    if ((VAR_0 & FUNC_0(8)) != 0)
    {
        VAR_1 |= 0xFFFFFF00;
    }

    return VAR_1;
}
