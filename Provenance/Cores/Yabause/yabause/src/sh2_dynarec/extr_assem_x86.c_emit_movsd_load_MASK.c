
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int VAR_0 ;
 int FUNC_0 (char*,int ,unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,unsigned int,unsigned int) ;
 int * VAR_1 ;

void FUNC_4(unsigned int VAR_2,unsigned int VAR_3)
{
  FUNC_0("movsd (%%%s),xmm%d\n",VAR_1[VAR_2],VAR_3);
  FUNC_1(VAR_3<8);
  FUNC_2(0xf2);
  FUNC_2(0x0f);
  FUNC_2(0x10);
  if(VAR_2!=VAR_0) FUNC_3(0,VAR_2,VAR_3);
  else {FUNC_3(1,VAR_0,VAR_3);FUNC_2(0);}
}
