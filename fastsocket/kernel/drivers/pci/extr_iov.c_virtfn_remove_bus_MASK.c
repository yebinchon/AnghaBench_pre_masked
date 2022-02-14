
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_bus {int number; int devices; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct pci_bus*) ;
 struct pci_bus* FUNC_3 (int ,int) ;
 int FUNC_4 (struct pci_bus*) ;

__attribute__((used)) static void FUNC_5(struct pci_bus *VAR_0, int VAR_1)
{
 struct pci_bus *VAR_2;

 if (VAR_0->number == VAR_1)
  return;

 VAR_2 = FUNC_3(FUNC_2(VAR_0), VAR_1);
 FUNC_0(!VAR_2);

 if (FUNC_1(&VAR_2->devices))
  FUNC_4(VAR_2);
}
