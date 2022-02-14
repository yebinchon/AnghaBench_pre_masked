
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,scalar_t__,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int,int) ;
 scalar_t__* VAR_0 ;

void FUNC_3(int VAR_1, int VAR_2)
{
  FUNC_0("movswl %%%s,%%%s\n",VAR_0[VAR_1]+1,VAR_0[VAR_2]);
  FUNC_1(0x0F);
  FUNC_1(0xBF);
  FUNC_2(3,VAR_1,VAR_2);
}
