
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_bus {int number; } ;
struct device_node {char* full_name; } ;


 int FUNC_0 (struct device_node*) ;
 int FUNC_1 (char*,char*,...) ;
 struct device_node* FUNC_2 (struct pci_bus*) ;
 struct device_node* FUNC_3 (struct device_node*,int) ;

struct device_node *
FUNC_4(struct pci_bus *VAR_0, int VAR_1)
{
 struct device_node *VAR_2, *VAR_3;

 FUNC_1("pci_busdev_to_OF_node(%d,0x%x)\n", VAR_0->number, VAR_1);
 VAR_2 = FUNC_2(VAR_0);
 if (VAR_2 == ((void*)0))
  return ((void*)0);
 FUNC_1(" parent is %s\n", VAR_2 ? VAR_2->full_name : "<NULL>");
 VAR_3 = FUNC_3(VAR_2, VAR_1);
 FUNC_0(VAR_2);
 FUNC_1(" result is %s\n", VAR_3 ? VAR_3->full_name : "<NULL>");





 return VAR_3;
}
