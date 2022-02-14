
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,int,int) ;
 scalar_t__* VAR_0 ;

void FUNC_4(int VAR_1,int VAR_2)
{
  if(VAR_1==VAR_2) {
    FUNC_0("ror %%%s,8\n",VAR_0[VAR_2]+1);
    FUNC_2(0x66);
    FUNC_2(0xC1);
    FUNC_3(3,VAR_2,1);
    FUNC_2(8);
  }
  else {
    FUNC_1(VAR_1,VAR_2);
    FUNC_4(VAR_2,VAR_2);
  }
}
