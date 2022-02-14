
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int parent; } ;
struct pci_bus {int number; int subordinate; int bridge; TYPE_1__ dev; } ;


 struct pci_bus* FUNC_0 (struct pci_bus*,int *,int) ;
 int FUNC_1 (struct pci_bus*) ;
 int FUNC_2 (struct pci_bus*) ;
 struct pci_bus* FUNC_3 (int ,int) ;
 int FUNC_4 (struct pci_bus*) ;

__attribute__((used)) static struct pci_bus *FUNC_5(struct pci_bus *VAR_0, int VAR_1)
{
 int VAR_2;
 struct pci_bus *VAR_3;

 if (VAR_0->number == VAR_1)
  return VAR_0;

 VAR_3 = FUNC_3(FUNC_2(VAR_0), VAR_1);
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_0(VAR_0, ((void*)0), VAR_1);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->subordinate = VAR_1;
 VAR_3->dev.parent = VAR_0->bridge;
 VAR_2 = FUNC_1(VAR_3);
 if (VAR_2) {
  FUNC_4(VAR_3);
  return ((void*)0);
 }

 return VAR_3;
}
