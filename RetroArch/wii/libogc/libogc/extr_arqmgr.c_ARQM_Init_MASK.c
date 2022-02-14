
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef scalar_t__ s32 ;


 int FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int* VAR_3 ;
 scalar_t__ VAR_4 ;

void FUNC_1(u32 VAR_5,s32 VAR_6)
{
 u32 VAR_7;

 if(VAR_6<=0) return;

 VAR_2 = 0;
 VAR_3[0] = VAR_5;
 VAR_1 = VAR_6;

 for(VAR_7=0;VAR_7<VAR_0/sizeof(u32);VAR_7++) ((u32*)VAR_4)[VAR_7] = 0;
 FUNC_0(VAR_4,VAR_0);

}
