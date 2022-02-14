
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcie_device {int dummy; } ;
struct pci_dev {int dev; } ;


 int FUNC_0 (int *,struct pcie_device**,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct pci_dev *VAR_1, struct pcie_device **VAR_2)
{
 return FUNC_0(&VAR_1->dev, VAR_2, VAR_0);
}
