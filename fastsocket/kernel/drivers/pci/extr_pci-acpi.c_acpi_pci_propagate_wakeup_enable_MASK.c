
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int dev; } ;
struct pci_bus {int * bridge; struct pci_bus* parent; struct pci_dev* self; } ;


 int FUNC_0 (int *,int) ;
 scalar_t__ FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_2(struct pci_bus *VAR_0, bool VAR_1)
{
 while (VAR_0->parent) {
  struct pci_dev *VAR_2 = VAR_0->self;
  int VAR_3;

  VAR_3 = FUNC_0(&VAR_2->dev, VAR_1);
  if (!VAR_3 || FUNC_1(VAR_2))
   return;
  VAR_0 = VAR_0->parent;
 }


 if (VAR_0->bridge)
  FUNC_0(VAR_0->bridge, VAR_1);
}
