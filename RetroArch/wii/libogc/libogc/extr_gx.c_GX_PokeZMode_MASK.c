
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;


 int FUNC_0 (int,int,int) ;
 int* VAR_0 ;

void FUNC_1(u8 VAR_1,u8 VAR_2,u8 VAR_3)
{
 u16 VAR_4;
 VAR_4 = VAR_1&0x1;
 VAR_4 = (VAR_4&~0xE)|(FUNC_0(VAR_2,1,3));
 VAR_4 = (VAR_4&0x10)|(FUNC_0(VAR_3,4,1));
 VAR_0[0] = VAR_4;
}
