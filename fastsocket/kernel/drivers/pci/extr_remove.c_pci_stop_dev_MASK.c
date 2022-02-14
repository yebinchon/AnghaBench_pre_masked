
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {TYPE_1__* bus; scalar_t__ is_added; int dev; } ;
struct TYPE_2__ {scalar_t__ self; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_4(struct pci_dev *VAR_0)
{
 if (VAR_0->is_added) {
  FUNC_1(VAR_0);
  FUNC_2(VAR_0);
  FUNC_0(&VAR_0->dev);
  VAR_0->is_added = 0;
 }

 if (VAR_0->bus->self)
  FUNC_3(VAR_0);
}
