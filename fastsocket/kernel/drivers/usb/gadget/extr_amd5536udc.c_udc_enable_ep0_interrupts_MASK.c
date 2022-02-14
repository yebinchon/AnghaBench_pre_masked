
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct udc {TYPE_1__* regs; } ;
struct TYPE_2__ {int ep_irqmsk; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct udc*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int *) ;

__attribute__((used)) static int FUNC_4(struct udc *VAR_2)
{
 u32 VAR_3;

 FUNC_1(VAR_2, "udc_enable_ep0_interrupts()\n");


 VAR_3 = FUNC_2(&VAR_2->regs->ep_irqmsk);

 VAR_3 &= FUNC_0(VAR_0)
  & FUNC_0(VAR_1);
 FUNC_3(VAR_3, &VAR_2->regs->ep_irqmsk);

 return 0;
}
