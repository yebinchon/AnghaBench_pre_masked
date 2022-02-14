
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dn {int dummy; } ;
struct pci_dev {int dummy; } ;
struct device_node {int dummy; } ;
typedef enum pcie_reset_state { ____Placeholder_pcie_reset_state } pcie_reset_state ;


 int VAR_0 ;
 struct pci_dn* FUNC_0 (struct device_node*) ;
 struct device_node* FUNC_1 (struct pci_dev*) ;



 int FUNC_2 (struct pci_dn*,int) ;

int FUNC_3(struct pci_dev *VAR_1, enum pcie_reset_state VAR_2)
{
 struct device_node *VAR_3 = FUNC_1(VAR_1);
 struct pci_dn *VAR_4 = FUNC_0(VAR_3);

 switch (VAR_2) {
 case 130:
  FUNC_2(VAR_4, 0);
  break;
 case 129:
  FUNC_2(VAR_4, 1);
  break;
 case 128:
  FUNC_2(VAR_4, 3);
  break;
 default:
  return -VAR_0;
 };

 return 0;
}
