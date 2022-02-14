
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct irq_desc {int dummy; } ;


 int FUNC_0 (unsigned int,struct irq_desc*) ;
 struct irq_desc* FUNC_1 (unsigned int) ;
 int FUNC_2 (struct pt_regs*) ;
 scalar_t__ FUNC_3 (int) ;

bool FUNC_4(unsigned VAR_0, struct pt_regs *VAR_1)
{
 struct irq_desc *VAR_2;

 FUNC_2(VAR_1);

 VAR_2 = FUNC_1(VAR_0);
 if (FUNC_3(!VAR_2))
  return 0;

 FUNC_0(VAR_0, VAR_2);
 return 1;
}
