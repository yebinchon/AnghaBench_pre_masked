
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,scalar_t__,int,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int) ;
 scalar_t__* VAR_0 ;

void FUNC_4(int VAR_1, int VAR_2, int VAR_3)
{
  FUNC_0("movw %%%s,%x+%%%s\n",VAR_0[VAR_1]+1,VAR_2,VAR_0[VAR_3]);
  FUNC_1(0x66);
  FUNC_1(0x89);
  if(VAR_2<128&&VAR_2>=-128) {
    FUNC_2(1,VAR_3,VAR_1);
    FUNC_1(VAR_2);
  }
  else
  {
    FUNC_2(2,VAR_3,VAR_1);
    FUNC_3(VAR_2);
  }
}
