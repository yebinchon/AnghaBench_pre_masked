
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_controller {scalar_t__ is_dynamic; int list_node; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_controller*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct pci_controller *VAR_1)
{
 FUNC_2(&VAR_0);
 FUNC_1(&VAR_1->list_node);
 FUNC_3(&VAR_0);

 if (VAR_1->is_dynamic)
  FUNC_0(VAR_1);
}
