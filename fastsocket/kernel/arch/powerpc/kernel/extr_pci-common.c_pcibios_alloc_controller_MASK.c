
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_controller {int is_dynamic; struct device_node* dn; int list_node; scalar_t__ global_number; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_controller*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int *) ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct device_node*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct pci_controller* FUNC_6 (int,int ) ;

struct pci_controller *FUNC_7(struct device_node *VAR_5)
{
 struct pci_controller *VAR_6;

 VAR_6 = FUNC_6(sizeof(struct pci_controller), VAR_0);
 if (VAR_6 == ((void*)0))
  return ((void*)0);
 FUNC_4(&VAR_3);
 VAR_6->global_number = VAR_1++;
 FUNC_1(&VAR_6->list_node, &VAR_2);
 FUNC_5(&VAR_3);
 VAR_6->dn = VAR_5;
 VAR_6->is_dynamic = VAR_4;
 return VAR_6;
}
