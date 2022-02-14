
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dn {struct pci_dev* pcidev; } ;
struct pci_dev {int dummy; } ;
struct device_node {int dummy; } ;


 struct pci_dn* FUNC_0 (struct device_node*) ;
 int FUNC_1 (struct pci_dev*) ;
 int VAR_0 ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pci_dev*) ;
 struct device_node* FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct pci_dev*) ;
 int FUNC_7 (char*,...) ;

__attribute__((used)) static void FUNC_8(struct pci_dev *VAR_1)
{
 struct device_node *VAR_2;
 struct pci_dn *VAR_3;

 if (!VAR_1 || !VAR_0)
  return;

 FUNC_7("EEH: Adding device %s\n", FUNC_6(VAR_1));

 VAR_2 = FUNC_5(VAR_1);
 VAR_3 = FUNC_0(VAR_2);
 if (VAR_3->pcidev == VAR_1) {
  FUNC_7("EEH: Already referenced !\n");
  return;
 }
 FUNC_1(VAR_3->pcidev);

 FUNC_4 (VAR_1);
 VAR_3->pcidev = VAR_1;

 FUNC_3(VAR_1);
 FUNC_2(VAR_1);
}
