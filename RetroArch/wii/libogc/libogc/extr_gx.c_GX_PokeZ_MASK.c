
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;


 int FUNC_0 (int ,int,int) ;

void FUNC_1(u16 VAR_0,u16 VAR_1,u32 VAR_2)
{
 u32 VAR_3;

 VAR_3 = 0xc8000000|(FUNC_0(VAR_0,2,10));
 VAR_3 = (VAR_3&~0x3FF000)|(FUNC_0(VAR_1,12,10));
 VAR_3 = (VAR_3&~0xC00000)|0x400000;
 *(u32*)VAR_3 = VAR_2;
}
