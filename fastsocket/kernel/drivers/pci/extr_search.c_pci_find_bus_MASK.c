
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_bus {int dummy; } ;


 struct pci_bus* FUNC_0 (struct pci_bus*,int) ;
 int FUNC_1 (struct pci_bus*) ;
 struct pci_bus* FUNC_2 (struct pci_bus*) ;

struct pci_bus * FUNC_3(int VAR_0, int VAR_1)
{
 struct pci_bus *VAR_2 = ((void*)0);
 struct pci_bus *VAR_3;

 while ((VAR_2 = FUNC_2(VAR_2)) != ((void*)0)) {
  if (FUNC_1(VAR_2) != VAR_0)
   continue;
  VAR_3 = FUNC_0(VAR_2, VAR_1);
  if (VAR_3)
   return VAR_3;
 }
 return ((void*)0);
}
