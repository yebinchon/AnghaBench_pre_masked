
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int ,unsigned int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (unsigned int) ;
 int FUNC_4 (int,int,int) ;
 int * VAR_0 ;

void FUNC_5(int VAR_1,unsigned int VAR_2,int VAR_3)
{
  if(VAR_1==VAR_3) {
    FUNC_0("shl %%%s,%d\n",VAR_0[VAR_3],VAR_2);
    FUNC_1(VAR_2>0);
    if(VAR_2==1) FUNC_3(0xD1);
    else FUNC_3(0xC1);
    FUNC_4(3,VAR_3,4);
    if(VAR_2>1) FUNC_3(VAR_2);
  }
  else {
    FUNC_2(VAR_1,VAR_3);
    FUNC_5(VAR_3,VAR_2,VAR_3);
  }
}
