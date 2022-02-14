
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (char*,int,int,int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int) ;

void FUNC_3(int VAR_1)
{
  FUNC_0("b %x (%x+%x)\n",VAR_1,(int)VAR_0,VAR_1-(int)VAR_0-8);
  u32 VAR_2=FUNC_1(VAR_1);
  FUNC_2(0xea000000|VAR_2);
}
