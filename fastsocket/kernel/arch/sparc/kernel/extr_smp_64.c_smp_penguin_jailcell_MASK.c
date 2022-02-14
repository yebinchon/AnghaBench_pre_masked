
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;
 int FUNC_7 () ;
 int VAR_1 ;

void FUNC_8(int VAR_2, struct pt_regs *VAR_3)
{
 FUNC_2(1 << VAR_2);

 FUNC_4();

 __asm__ __volatile__("flushw");
 FUNC_6(1);
 FUNC_1(&VAR_1);
 FUNC_3("#StoreLoad");
 while (VAR_0)
  FUNC_7();
 FUNC_0(&VAR_1);
 FUNC_6(0);

 FUNC_5();
}
