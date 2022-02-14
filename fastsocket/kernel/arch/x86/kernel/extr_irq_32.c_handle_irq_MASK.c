
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct irq_desc {int (* handle_irq ) (unsigned int,struct irq_desc*) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (int,struct irq_desc*,unsigned int) ;
 struct irq_desc* FUNC_2 (unsigned int) ;
 int FUNC_3 () ;
 int FUNC_4 (unsigned int,struct irq_desc*) ;
 scalar_t__ FUNC_5 (int) ;

bool FUNC_6(unsigned VAR_0, struct pt_regs *VAR_1)
{
 struct irq_desc *VAR_2;
 int VAR_3;

 VAR_3 = FUNC_0();

 VAR_2 = FUNC_2(VAR_0);
 if (FUNC_5(!VAR_2))
  return 0;

 if (!FUNC_1(VAR_3, VAR_2, VAR_0)) {
  if (FUNC_5(VAR_3))
   FUNC_3();
  VAR_2->handle_irq(VAR_0, VAR_2);
 }

 return 1;
}
