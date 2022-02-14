
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udc {TYPE_1__* regs; } ;
struct TYPE_2__ {int cfg; int irqsts; int ep_irqsts; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct udc*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int VAR_3 ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct udc *VAR_4)
{
 unsigned long VAR_5;

 FUNC_1(VAR_4, "Soft reset\n");





 FUNC_5(VAR_2, &VAR_4->regs->ep_irqsts);

 FUNC_5(VAR_1, &VAR_4->regs->irqsts);

 FUNC_3(&VAR_3, VAR_5);
 FUNC_5(FUNC_0(VAR_0), &VAR_4->regs->cfg);
 FUNC_2(&VAR_4->regs->cfg);
 FUNC_4(&VAR_3, VAR_5);

}
