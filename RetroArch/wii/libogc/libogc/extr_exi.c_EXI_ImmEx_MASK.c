
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int s32 ;


 int FUNC_0 (int,int *,int,int,int *) ;
 int FUNC_1 (int) ;

s32 FUNC_2(s32 VAR_0,void *VAR_1,u32 VAR_2,u32 VAR_3)
{
 u8 *VAR_4 = VAR_1;
 u32 VAR_5;
 s32 VAR_6 = 0;
 while(VAR_2) {
  VAR_6 = 0;
  VAR_5 = VAR_2;
  if(VAR_5>4) VAR_5 = 4;

  if(!FUNC_0(VAR_0,VAR_4,VAR_5,VAR_3,((void*)0))) break;
  if(!FUNC_1(VAR_0)) break;
  VAR_2 -= VAR_5;
  VAR_4 += VAR_5;

  VAR_6 = 1;
 }
 return VAR_6;
}
