
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dn {int dummy; } ;
struct pci_dev {int dev; } ;
struct device_node {int dummy; } ;


 struct pci_dn* FUNC_0 (struct device_node*) ;
 int FUNC_1 (int *,char*) ;
 struct device_node* FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static struct pci_dn *FUNC_3(struct pci_dev *VAR_0)
{
 struct device_node *VAR_1;
 struct pci_dn *VAR_2;

 VAR_1 = FUNC_2(VAR_0);
 if (!VAR_1) {
  FUNC_1(&VAR_0->dev, "rtas_msi: No OF device node\n");
  return ((void*)0);
 }

 VAR_2 = FUNC_0(VAR_1);
 if (!VAR_2) {
  FUNC_1(&VAR_0->dev, "rtas_msi: No PCI DN\n");
  return ((void*)0);
 }

 return VAR_2;
}
