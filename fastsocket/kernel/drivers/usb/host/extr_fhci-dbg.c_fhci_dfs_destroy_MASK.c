
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fhci_hcd {scalar_t__ dfs_root; scalar_t__ dfs_regs; scalar_t__ dfs_irq_stat; } ;


 int FUNC_0 (scalar_t__) ;

void FUNC_1(struct fhci_hcd *VAR_0)
{
 if (!VAR_0->dfs_root)
  return;

 if (VAR_0->dfs_irq_stat)
  FUNC_0(VAR_0->dfs_irq_stat);

 if (VAR_0->dfs_regs)
  FUNC_0(VAR_0->dfs_regs);

 FUNC_0(VAR_0->dfs_root);
}
