
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 scalar_t__ FUNC_0 (void*,int,int) ;

void FUNC_1(void *VAR_0,u32 VAR_1,u32 VAR_2)
{
 u32 VAR_3;

 while(VAR_1>0) {
  VAR_3 = (VAR_1>256)?256:VAR_1;
  while(FUNC_0(VAR_0,VAR_3,VAR_2)==0);
  VAR_2 += VAR_3;
  VAR_0 += VAR_3;
  VAR_1 -= VAR_3;
 }
}
