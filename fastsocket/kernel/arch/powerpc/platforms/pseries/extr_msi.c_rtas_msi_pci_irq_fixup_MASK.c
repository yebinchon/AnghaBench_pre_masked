
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ irq; int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (struct pci_dev*,int) ;
 scalar_t__ FUNC_1 (struct pci_dev*,int) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_1)
{

 if (VAR_1->irq == VAR_0) {
  FUNC_2(&VAR_1->dev, "rtas_msi: no LSI, nothing to do.\n");
  return;
 }


 if (FUNC_0(VAR_1, 1) && FUNC_1(VAR_1, 1)) {
  FUNC_2(&VAR_1->dev, "rtas_msi: no req#msi/x, nothing to do.\n");
  return;
 }

 FUNC_2(&VAR_1->dev, "rtas_msi: disabling existing MSI.\n");
 FUNC_3(VAR_1);
}
