
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
typedef int u16 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__,int,int) ;
 int* VAR_3 ;

void FUNC_1(u8 VAR_4,u8 VAR_5,u8 VAR_6,u8 VAR_7)
{
 u32 VAR_8 = VAR_3[1];

 VAR_8 = (VAR_8&~0x1);
 if(VAR_4==VAR_0 || VAR_4==VAR_2) VAR_8 |= 0x1;

 VAR_8 = (VAR_8&~0x800);
 if(VAR_4==VAR_2) VAR_8 |= 0x800;

 VAR_8 = (VAR_8&~0x2);
 if(VAR_4==VAR_1) VAR_8 |= 0x2;

 VAR_8 = (VAR_8&~0xF000)|(FUNC_0(VAR_7,12,4));
 VAR_8 = (VAR_8&~0xE0)|(FUNC_0(VAR_6,5,3));
 VAR_8 = (VAR_8&~0x700)|(FUNC_0(VAR_5,8,3));

 VAR_8 |= 0x41000000;
 VAR_3[1] = (u16)VAR_8;
}
