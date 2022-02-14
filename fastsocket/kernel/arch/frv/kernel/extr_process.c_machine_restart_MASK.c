
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

void FUNC_3(char * VAR_1)
{
 unsigned long VAR_2;




 if (FUNC_0(FUNC_1()) == VAR_0)
  VAR_2 = 0xfefff500;
 else
  VAR_2 = 0xfeff0500;


 asm volatile("      dcef @(gr0,gr0),1 ! membar !"
       "      sti     %1,@(%0,0) !"
       "      nop ! nop ! nop ! nop ! nop ! "
       "      nop ! nop ! nop ! nop ! nop ! "
       "      nop ! nop ! nop ! nop ! nop ! "
       "      nop ! nop ! nop ! nop ! nop ! "
       : : "r" (VAR_2), "r" (1) );

 for (;;)
  ;
}
