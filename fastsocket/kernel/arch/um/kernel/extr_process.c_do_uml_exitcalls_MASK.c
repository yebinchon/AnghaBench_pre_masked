
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* exitcall_t ) () ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;

void FUNC_3(void)
{
 exitcall_t *VAR_0;

 VAR_0 = &FUNC_1;
 while (--VAR_0 >= &FUNC_0)
  (*VAR_0)();
}
