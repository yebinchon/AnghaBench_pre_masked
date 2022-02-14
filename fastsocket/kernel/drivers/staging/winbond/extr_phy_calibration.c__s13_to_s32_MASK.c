
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int s32 ;


 int FUNC_0 (int) ;

s32 FUNC_1(u32 VAR_0)
{
    u32 VAR_1;

    VAR_1 = (VAR_0 & 0x0FFF);

    if ((VAR_0 & FUNC_0(12)) != 0)
    {
        VAR_1 |= 0xFFFFF000;
    }

    return ((s32) VAR_1);
}
