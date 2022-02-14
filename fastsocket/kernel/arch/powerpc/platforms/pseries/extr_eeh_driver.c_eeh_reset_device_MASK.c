
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dn {int eeh_freeze_count; scalar_t__ eeh_pe_config_addr; struct device_node* node; } ;
struct pci_bus {int dummy; } ;
struct device_node {struct device_node* sibling; struct device_node* child; struct device_node* parent; } ;


 struct pci_dn* FUNC_0 (struct device_node*) ;
 int FUNC_1 (struct pci_dn*) ;
 int FUNC_2 (struct pci_bus*) ;
 int FUNC_3 (struct device_node*) ;
 int FUNC_4 (struct pci_bus*) ;
 int FUNC_5 (struct pci_dn*) ;
 int FUNC_6 (struct pci_dn*) ;
 int FUNC_7 (int) ;

__attribute__((used)) static int FUNC_8 (struct pci_dn *VAR_0, struct pci_bus *VAR_1)
{
 struct device_node *VAR_2;
 int VAR_3, VAR_4;


 VAR_3 = VAR_0->eeh_freeze_count;

 if (VAR_1)
  FUNC_4(VAR_1);




 VAR_4 = FUNC_6(VAR_0);
 if (VAR_4)
  return VAR_4;


 VAR_2 = VAR_0->node;
 if (!FUNC_3(VAR_2) && FUNC_0(VAR_2->parent))
  VAR_2 = VAR_2->parent->child;

 while (VAR_2) {
  struct pci_dn *VAR_5 = FUNC_0(VAR_2);

  if (VAR_0->eeh_pe_config_addr == VAR_5->eeh_pe_config_addr) {
   FUNC_5(VAR_5);
   FUNC_1(VAR_5);
   }
  VAR_2 = VAR_2->sibling;
 }







 if (VAR_1) {
  FUNC_7 (5);
  FUNC_2(VAR_1);
 }
 VAR_0->eeh_freeze_count = VAR_3;

 return 0;
}
