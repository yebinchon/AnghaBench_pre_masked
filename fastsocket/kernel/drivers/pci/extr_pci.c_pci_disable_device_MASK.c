
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_devres {scalar_t__ enabled; } ;
struct pci_dev {scalar_t__ is_busmaster; int enable_cnt; } ;


 scalar_t__ FUNC_0 (int,int *) ;
 int FUNC_1 (struct pci_dev*) ;
 struct pci_devres* FUNC_2 (struct pci_dev*) ;

void
FUNC_3(struct pci_dev *VAR_0)
{
 struct pci_devres *VAR_1;

 VAR_1 = FUNC_2(VAR_0);
 if (VAR_1)
  VAR_1->enabled = 0;

 if (FUNC_0(1, &VAR_0->enable_cnt) != 0)
  return;

 FUNC_1(VAR_0);

 VAR_0->is_busmaster = 0;
}
