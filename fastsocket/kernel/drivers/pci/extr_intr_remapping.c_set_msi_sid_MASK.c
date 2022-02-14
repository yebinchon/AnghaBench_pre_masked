
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int devfn; TYPE_1__* bus; } ;
struct irte {int dummy; } ;
struct TYPE_2__ {int number; int parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct pci_dev* FUNC_0 (struct pci_dev*) ;
 scalar_t__ FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct irte*,int ,int ,int) ;

int FUNC_3(struct irte *VAR_3, struct pci_dev *VAR_4)
{
 struct pci_dev *VAR_5;

 if (!VAR_3 || !VAR_4)
  return -1;


 if (FUNC_1(VAR_4) || !VAR_4->bus->parent) {
  FUNC_2(VAR_3, VAR_2, VAR_0,
        (VAR_4->bus->number << 8) | VAR_4->devfn);
  return 0;
 }

 VAR_5 = FUNC_0(VAR_4);
 if (VAR_5) {
  if (FUNC_1(VAR_5))
   FUNC_2(VAR_3, VAR_1, VAR_0,
    (VAR_5->bus->number << 8) | VAR_4->bus->number);
  else
   FUNC_2(VAR_3, VAR_2, VAR_0,
    (VAR_5->bus->number << 8) | VAR_5->devfn);
 }

 return 0;
}
