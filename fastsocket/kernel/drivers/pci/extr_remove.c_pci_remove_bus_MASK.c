
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_bus {int dev; int is_added; int node; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int FUNC_3 (struct pci_bus*) ;
 int FUNC_4 (struct pci_bus*) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct pci_bus *VAR_1)
{
 FUNC_3(VAR_1);

 FUNC_1(&VAR_0);
 FUNC_2(&VAR_1->node);
 FUNC_5(&VAR_0);
 if (!VAR_1->is_added)
  return;

 FUNC_4(VAR_1);
 FUNC_0(&VAR_1->dev);
}
