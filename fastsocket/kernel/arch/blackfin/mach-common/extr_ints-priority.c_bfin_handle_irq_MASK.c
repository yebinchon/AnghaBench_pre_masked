
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_regs {int dummy; } ;
struct irq_desc {int (* handle_irq ) (unsigned int,struct irq_desc*) ;} ;


 int FUNC_0 (unsigned int,struct pt_regs*) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (unsigned int) ;
 struct irq_desc* VAR_0 ;
 int FUNC_3 (unsigned int,struct irq_desc*) ;

__attribute__((used)) static void FUNC_4(unsigned VAR_1)
{






 struct irq_desc *VAR_2 = VAR_0 + VAR_1;
 VAR_2->handle_irq(VAR_1, VAR_2);

}
