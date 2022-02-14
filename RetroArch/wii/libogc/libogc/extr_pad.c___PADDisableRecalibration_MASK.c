
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ s32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;

u32 FUNC_2(s32 VAR_0)
{
 u32 VAR_1,VAR_2;
 u8 *VAR_3 = (u8*)0x800030e3;

 FUNC_0(VAR_1);

 VAR_2 = 0;
 if(VAR_3[0]&0x40) VAR_2 = 1;

 VAR_3[0] &= 0xbf;
 if(VAR_0) VAR_3[0] |= 0x40;

 FUNC_1(VAR_1);

 return VAR_2;
}
