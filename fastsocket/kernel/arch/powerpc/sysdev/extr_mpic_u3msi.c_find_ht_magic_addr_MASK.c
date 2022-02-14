
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct pci_dev {struct pci_bus* bus; } ;
struct pci_bus {int self; struct pci_bus* parent; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static u64 FUNC_2(struct pci_dev *VAR_1)
{
 struct pci_bus *VAR_2;
 unsigned int VAR_3;

 for (VAR_2 = VAR_1->bus; VAR_2; VAR_2 = VAR_2->parent) {
  VAR_3 = FUNC_0(VAR_2->self, VAR_0);
  if (VAR_3)
   return FUNC_1(VAR_2->self, VAR_3);
 }

 return 0;
}
