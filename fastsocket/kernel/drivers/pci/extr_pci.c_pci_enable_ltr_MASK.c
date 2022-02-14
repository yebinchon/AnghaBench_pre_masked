
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {TYPE_1__* bus; int devfn; } ;
struct TYPE_2__ {struct pci_dev* self; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*,int ,int ) ;

int FUNC_3(struct pci_dev *VAR_4)
{
 int VAR_5;


 if (FUNC_0(VAR_4->devfn) != 0)
  return -VAR_0;

 if (!FUNC_1(VAR_4))
  return -VAR_1;


 if (VAR_4->bus->self) {
  VAR_5 = FUNC_3(VAR_4->bus->self);
  if (VAR_5)
   return VAR_5;
 }

 return FUNC_2(VAR_4, VAR_2, VAR_3);
}
