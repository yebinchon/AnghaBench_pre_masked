
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct udc_ep {int naking; int dev; TYPE_1__* regs; } ;
struct TYPE_2__ {int ctl; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,unsigned int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct udc_ep *VAR_2, unsigned VAR_3)
{
 if (FUNC_2(&VAR_2->regs->ctl) & FUNC_0(VAR_0)) {
  FUNC_1(VAR_2->dev, "NAK could not be cleared for ep%d\n", VAR_3);
  VAR_1 |= 1 << (VAR_3);
  VAR_2->naking = 1;
 } else
  VAR_1 = VAR_1 & (~(1 << (VAR_3)));
}
