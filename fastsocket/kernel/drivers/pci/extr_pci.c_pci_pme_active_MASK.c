
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pci_dev {int dev; scalar_t__ pm_cap; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int *,char*,char*) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int*) ;
 int FUNC_2 (struct pci_dev*,scalar_t__,int) ;

void FUNC_3(struct pci_dev *VAR_4, bool VAR_5)
{
 u16 VAR_6;

 if (!VAR_4->pm_cap)
  return;

 FUNC_1(VAR_4, VAR_4->pm_cap + VAR_1, &VAR_6);

 VAR_6 |= VAR_3 | VAR_2;
 if (!VAR_5)
  VAR_6 &= ~VAR_2;

 FUNC_2(VAR_4, VAR_4->pm_cap + VAR_1, VAR_6);

 FUNC_0(VAR_0, &VAR_4->dev, "PME# %s\n",
   VAR_5 ? "enabled" : "disabled");
}
