
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int) ;
 int* VAR_0 ;

void FUNC_3(u32 VAR_1,u32 VAR_2)
{
 u32 VAR_3;

 FUNC_0(VAR_3);
 VAR_0[24] = (VAR_0[24]&~0x1fff)|(FUNC_2(VAR_1,16,13));
 VAR_0[25] = (VAR_0[25]&~0xffe0)|(VAR_1&0xffff);
 VAR_0[27] = (VAR_0[27]&~0x7fff)|(FUNC_2(VAR_2,5,15));
 FUNC_1(VAR_3);
}
