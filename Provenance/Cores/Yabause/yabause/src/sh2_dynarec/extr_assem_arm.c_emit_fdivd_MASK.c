
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int,int) ;
 int FUNC_1 (int) ;

void FUNC_2(int VAR_0,int VAR_1,int VAR_2)
{
  FUNC_0("fdivd d%d,d%d,d%d\n",VAR_2,VAR_0,VAR_1);
  FUNC_1(0xee800b00|((VAR_2&7)<<12)|((VAR_0&7)<<16)|(VAR_1&7));
}
