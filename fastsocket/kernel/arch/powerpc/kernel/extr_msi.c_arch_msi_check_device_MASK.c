
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct TYPE_2__ {int (* msi_check_device ) (struct pci_dev*,int,int) ;int teardown_msi_irqs; int setup_msi_irqs; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct pci_dev*,int,int) ;

int FUNC_2(struct pci_dev* VAR_3, int VAR_4, int VAR_5)
{
 if (!VAR_2.setup_msi_irqs || !VAR_2.teardown_msi_irqs) {
  FUNC_0("msi: Platform doesn't provide MSI callbacks.\n");
  return -VAR_0;
 }


 if (VAR_5 == VAR_1 && VAR_4 > 1)
  return 1;

 if (VAR_2.msi_check_device) {
  FUNC_0("msi: Using platform check routine.\n");
  return VAR_2.msi_check_device(VAR_3, VAR_4, VAR_5);
 }

        return 0;
}
