
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int,int,int) ;

void FUNC_2(u8 VAR_2,u8 VAR_3,u32 VAR_4)
{
 u32 VAR_5 = 0;

 if(VAR_3==VAR_1) VAR_3 = 0;
 else if(VAR_3==VAR_0) VAR_3 = 1;
 else VAR_3 = 2;

 VAR_5 = (u32)(FUNC_1(VAR_2,2,2))|(VAR_3&3);
 FUNC_0(0xF4000000|(VAR_4&0x00FFFFFF));
 FUNC_0(0xF5000000|(VAR_5&0x00FFFFFF));
}
