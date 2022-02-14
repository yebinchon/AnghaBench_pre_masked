
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {struct pci_bus* subordinate; } ;
struct pci_bus {int dummy; } ;


 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_bus*) ;
 int FUNC_3 (struct pci_dev*) ;

void FUNC_4(struct pci_dev *VAR_0)
{
 FUNC_3(VAR_0);
 if (VAR_0->subordinate) {
  struct pci_bus *VAR_1 = VAR_0->subordinate;

  FUNC_1(VAR_0);
  FUNC_2(VAR_1);
  VAR_0->subordinate = ((void*)0);
 }

 FUNC_0(VAR_0);
}
