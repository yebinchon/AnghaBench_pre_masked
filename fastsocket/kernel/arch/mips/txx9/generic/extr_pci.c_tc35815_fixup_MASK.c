
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {scalar_t__ pm_cap; int dev; } ;


 int FUNC_0 (int *,char*) ;

__attribute__((used)) static void FUNC_1(struct pci_dev *VAR_0)
{

 if (VAR_0->pm_cap) {
  FUNC_0(&VAR_0->dev, "PM disabled\n");
  VAR_0->pm_cap = 0;
 }
}
