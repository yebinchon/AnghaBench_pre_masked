
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {struct pci_bus* bus; } ;
struct pci_bus {struct pci_bus* parent; } ;



__attribute__((used)) static struct pci_bus *FUNC_0(struct pci_dev *VAR_0)
{
 struct pci_bus *VAR_1;

 VAR_1 = VAR_0->bus;
 while (VAR_1->parent)
  VAR_1 = VAR_1->parent;

 return VAR_1;
}
