
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int devfn; TYPE_1__* bus; } ;
struct TYPE_2__ {scalar_t__ number; } ;


 scalar_t__ FUNC_0 (int ) ;
 struct pci_dev* FUNC_1 (unsigned int,unsigned int,struct pci_dev*) ;

__attribute__((used)) static struct pci_dev *FUNC_2(unsigned int VAR_0,
      unsigned int VAR_1,
      struct pci_dev *VAR_2)
{
 struct pci_dev *VAR_3 = ((void*)0);

 VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_3);
 while (VAR_3) {
  if ((VAR_3->bus->number == VAR_2->bus->number) &&
      (FUNC_0(VAR_3->devfn) == FUNC_0(VAR_2->devfn)))
   break;
  VAR_3 = FUNC_1(VAR_0, VAR_1, VAR_3);
 }

 return VAR_3;
}
