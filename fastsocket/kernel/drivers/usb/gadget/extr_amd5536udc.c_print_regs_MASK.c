
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct udc {TYPE_2__* pdev; TYPE_1__* regs; } ;
struct TYPE_4__ {int dev; } ;
struct TYPE_3__ {int ep_irqmsk; int ep_irqsts; int irqmsk; int irqsts; int sts; int ctl; int cfg; } ;


 int FUNC_0 (struct udc*,char*,...) ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static void FUNC_3(struct udc *VAR_4)
{
 FUNC_0(VAR_4, "------- Device registers -------\n");
 FUNC_0(VAR_4, "dev config     = %08x\n", FUNC_2(&VAR_4->regs->cfg));
 FUNC_0(VAR_4, "dev control    = %08x\n", FUNC_2(&VAR_4->regs->ctl));
 FUNC_0(VAR_4, "dev status     = %08x\n", FUNC_2(&VAR_4->regs->sts));
 FUNC_0(VAR_4, "\n");
 FUNC_0(VAR_4, "dev int's      = %08x\n", FUNC_2(&VAR_4->regs->irqsts));
 FUNC_0(VAR_4, "dev intmask    = %08x\n", FUNC_2(&VAR_4->regs->irqmsk));
 FUNC_0(VAR_4, "\n");
 FUNC_0(VAR_4, "dev ep int's   = %08x\n", FUNC_2(&VAR_4->regs->ep_irqsts));
 FUNC_0(VAR_4, "dev ep intmask = %08x\n", FUNC_2(&VAR_4->regs->ep_irqmsk));
 FUNC_0(VAR_4, "\n");
 FUNC_0(VAR_4, "USE DMA        = %d\n", VAR_0);
 if (VAR_0 && VAR_2 && !VAR_3) {
  FUNC_0(VAR_4, "DMA mode       = PPBNDU (packet per buffer "
   "WITHOUT desc. update)\n");
  FUNC_1(&VAR_4->pdev->dev, "DMA mode (%s)\n", "PPBNDU");
 } else if (VAR_0 && VAR_3 && VAR_3) {
  FUNC_0(VAR_4, "DMA mode       = PPBDU (packet per buffer "
   "WITH desc. update)\n");
  FUNC_1(&VAR_4->pdev->dev, "DMA mode (%s)\n", "PPBDU");
 }
 if (VAR_0 && VAR_1) {
  FUNC_0(VAR_4, "DMA mode       = BF (buffer fill mode)\n");
  FUNC_1(&VAR_4->pdev->dev, "DMA mode (%s)\n", "BF");
 }
 if (!VAR_0) {
  FUNC_1(&VAR_4->pdev->dev, "FIFO mode\n");
 }
 FUNC_0(VAR_4, "-------------------------------------------------------\n");
}
