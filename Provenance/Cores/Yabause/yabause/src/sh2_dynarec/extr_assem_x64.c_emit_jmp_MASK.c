
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int,int,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

void FUNC_3(int VAR_1)
{
  FUNC_0("jmp %x (%x+%x)\n",VAR_1,(int)VAR_0+5,VAR_1-(int)VAR_0-5);
  FUNC_1(0xe9);
  FUNC_2(VAR_1-(int)VAR_0-4);
}
