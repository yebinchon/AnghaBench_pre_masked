
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int * pcidev; } ;


 TYPE_1__* FUNC_0 (struct device_node*) ;
 int VAR_0 ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;
 struct device_node* FUNC_4 (struct pci_dev*) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_1)
{
 struct device_node *VAR_2;
 if (!VAR_1 || !VAR_0)
  return;


 FUNC_6("EEH: Removing device %s\n", FUNC_5(VAR_1));

 VAR_2 = FUNC_4(VAR_1);
 if (FUNC_0(VAR_2)->pcidev == ((void*)0)) {
  FUNC_6("EEH: Not referenced !\n");
  return;
 }
 FUNC_0(VAR_2)->pcidev = ((void*)0);
 FUNC_3 (VAR_1);

 FUNC_2(VAR_1);
 FUNC_1(VAR_1);
}
