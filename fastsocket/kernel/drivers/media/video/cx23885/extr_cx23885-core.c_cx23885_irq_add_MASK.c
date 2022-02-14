
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cx23885_dev {int pci_irqmask_lock; int pci_irqmask; } ;


 int FUNC_0 (int *,unsigned long) ;
 int FUNC_1 (int *,unsigned long) ;

void FUNC_2(struct cx23885_dev *VAR_0, u32 VAR_1)
{
 unsigned long VAR_2;
 FUNC_0(&VAR_0->pci_irqmask_lock, VAR_2);

 VAR_0->pci_irqmask |= VAR_1;

 FUNC_1(&VAR_0->pci_irqmask_lock, VAR_2);
}
