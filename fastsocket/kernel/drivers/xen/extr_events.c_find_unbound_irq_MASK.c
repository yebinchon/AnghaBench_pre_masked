
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct irq_desc {int * chip; } ;
struct TYPE_2__ {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 TYPE_1__* VAR_1 ;
 struct irq_desc* FUNC_3 (int) ;
 struct irq_desc* FUNC_4 (int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (char*) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_6(void)
{
 int VAR_5;
 struct irq_desc *VAR_6;
 int VAR_7 = FUNC_2();

 if (VAR_7 == VAR_3)
  goto no_irqs;


 for (VAR_5 = VAR_3-1; VAR_5 > VAR_7; VAR_5--) {
  VAR_6 = FUNC_3(VAR_5);

  if (VAR_6 == ((void*)0))
   break;
  if (VAR_6->chip == &VAR_2)
   break;
  if (VAR_6->chip != &VAR_4)
   continue;
  if (VAR_1[VAR_5].type == VAR_0)
   break;
 }

 if (VAR_5 == VAR_7)
  goto no_irqs;

 VAR_6 = FUNC_4(VAR_5, 0);
 if (FUNC_0(VAR_6 == ((void*)0)))
  return -1;

 FUNC_1(VAR_5);

 return VAR_5;

no_irqs:
 FUNC_5("No available IRQ to bind to: increase nr_irqs!\n");
}
