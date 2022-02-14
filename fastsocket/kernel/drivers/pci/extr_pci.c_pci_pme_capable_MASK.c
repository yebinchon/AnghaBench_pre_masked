
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int pme_support; int pm_cap; } ;
typedef int pci_power_t ;



bool FUNC_0(struct pci_dev *VAR_0, pci_power_t VAR_1)
{
 if (!VAR_0->pm_cap)
  return 0;

 return !!(VAR_0->pme_support & (1 << VAR_1));
}
