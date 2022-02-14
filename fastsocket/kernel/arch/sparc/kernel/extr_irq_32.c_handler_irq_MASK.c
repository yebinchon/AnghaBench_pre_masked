
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pt_regs {int dummy; } ;
struct irqaction {struct irqaction* next; int dev_id; int (* handler ) (int,int ) ;} ;
struct TYPE_4__ {int * irqs; } ;
struct TYPE_3__ {int flags; struct irqaction* action; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 TYPE_2__ FUNC_4 (int) ;
 struct pt_regs* FUNC_5 (struct pt_regs*) ;
 int FUNC_6 () ;
 scalar_t__ VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_7 (int,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_8 (int,int *,struct pt_regs*) ;

void FUNC_9(int VAR_4, struct pt_regs * VAR_5)
{
 struct pt_regs *VAR_6;
 struct irqaction * VAR_7;
 int VAR_8 = FUNC_6();




 VAR_6 = FUNC_5(VAR_5);
 FUNC_2();
 FUNC_0(VAR_4);





 VAR_7 = VAR_2[VAR_4].action;
 VAR_2[VAR_4].flags |= VAR_0;
 FUNC_4(VAR_8).irqs[VAR_4]++;
 do {
  if (!VAR_7 || !VAR_7->handler)
   FUNC_8(VAR_4, ((void*)0), VAR_5);
  VAR_7->handler(VAR_4, VAR_7->dev_id);
  VAR_7 = VAR_7->next;
 } while (VAR_7);
 VAR_2[VAR_4].flags &= ~VAR_0;
 FUNC_1(VAR_4);
 FUNC_3();
 FUNC_5(VAR_6);
}
