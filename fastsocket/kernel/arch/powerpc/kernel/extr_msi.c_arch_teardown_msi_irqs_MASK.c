
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {int (* teardown_msi_irqs ) (struct pci_dev*) ;} ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (struct pci_dev*) ;

void FUNC_1(struct pci_dev *VAR_1)
{
 VAR_0.teardown_msi_irqs(VAR_1);
}
