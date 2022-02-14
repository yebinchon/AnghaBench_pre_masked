
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int pme_support; int dev; int pm_cap; } ;
typedef int pci_power_t ;


 int VAR_0 ;


 int VAR_1 ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 scalar_t__ FUNC_3 (struct pci_dev*) ;

pci_power_t FUNC_4(struct pci_dev *VAR_2)
{
 pci_power_t VAR_3 = VAR_1;

 if (FUNC_3(VAR_2)) {




  pci_power_t VAR_4 = FUNC_2(VAR_2);

  switch (VAR_4) {
  case 129:
  case 128:
   break;
  case 131:
  case 130:
   if (FUNC_1(VAR_2))
    break;
  default:
   VAR_3 = VAR_4;
  }
 } else if (!VAR_2->pm_cap) {
  VAR_3 = VAR_0;
 } else if (FUNC_0(&VAR_2->dev)) {





  if (VAR_2->pme_support) {
   while (VAR_3
         && !(VAR_2->pme_support & (1 << VAR_3)))
    VAR_3--;
  }
 }

 return VAR_3;
}
