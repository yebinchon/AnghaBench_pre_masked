
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ FUNC_0 (int*) ;

u32 FUNC_1(u32 *VAR_0)
{
 u32 VAR_1,VAR_2;
 u32 VAR_3,VAR_4;

 VAR_1 = 0;
 VAR_2 = 0;
 while(VAR_1<16) {
  if(FUNC_0(&VAR_3)==0) VAR_2 |= 0x01;
  if(FUNC_0(&VAR_4)==0) VAR_2 |= 0x02;
  if(VAR_2) return 0;
  if(VAR_3==VAR_4) {
   *VAR_0 = VAR_3;
   return 1;
  }
  VAR_1++;
 }
 return 0;
}
