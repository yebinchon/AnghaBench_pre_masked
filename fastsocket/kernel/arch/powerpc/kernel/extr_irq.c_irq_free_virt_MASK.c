
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_host {int inval_irq; } ;
struct TYPE_2__ {struct irq_host* host; int hwirq; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void FUNC_4(unsigned int VAR_4, unsigned int VAR_5)
{
 unsigned long VAR_6;
 unsigned int VAR_7;

 FUNC_0 (VAR_4 < VAR_0);
 FUNC_0 (VAR_5 == 0 || (VAR_4 + VAR_5) > VAR_3);

 FUNC_2(&VAR_1, VAR_6);
 for (VAR_7 = VAR_4; VAR_7 < (VAR_4 + VAR_5); VAR_7++) {
  struct irq_host *VAR_8;

  if (VAR_7 < VAR_0 ||
      (VAR_4 + VAR_5) > VAR_3)
   continue;

  VAR_8 = VAR_2[VAR_7].host;
  VAR_2[VAR_7].hwirq = VAR_8->inval_irq;
  FUNC_1();
  VAR_2[VAR_7].host = ((void*)0);
 }
 FUNC_3(&VAR_1, VAR_6);
}
