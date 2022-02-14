
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 (struct pt_regs*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (char*,unsigned int) ;
 struct pt_regs* FUNC_6 (struct pt_regs*) ;

void FUNC_7(struct pt_regs *VAR_1)
{
 unsigned int VAR_2;
 struct pt_regs *VAR_3 = FUNC_6(VAR_1);

 FUNC_3();
 VAR_2 = FUNC_2(VAR_1);
next_irq:
 FUNC_0(VAR_2 == -1U);
 FUNC_1(VAR_2);

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2 != -1U) {
  FUNC_5("next irq: %d\n", VAR_2);
  ++VAR_0;
  goto next_irq;
 }

 FUNC_4();
 FUNC_6(VAR_3);
}
