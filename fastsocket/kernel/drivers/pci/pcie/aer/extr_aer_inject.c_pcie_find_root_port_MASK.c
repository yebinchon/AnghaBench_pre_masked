
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {TYPE_1__* bus; } ;
struct TYPE_2__ {struct pci_dev* self; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct pci_dev*) ;
 scalar_t__ FUNC_1 (struct pci_dev*) ;

__attribute__((used)) static struct pci_dev *FUNC_2(struct pci_dev *VAR_1)
{
 while (1) {
  if (!FUNC_0(VAR_1))
   break;
  if (FUNC_1(VAR_1) == VAR_0)
   return VAR_1;
  if (!VAR_1->bus->self)
   break;
  VAR_1 = VAR_1->bus->self;
 }
 return ((void*)0);
}
