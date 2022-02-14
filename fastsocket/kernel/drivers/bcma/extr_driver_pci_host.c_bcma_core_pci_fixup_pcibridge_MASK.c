
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int devfn; TYPE_2__* bus; } ;
struct TYPE_4__ {TYPE_1__* ops; } ;
struct TYPE_3__ {scalar_t__ read; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (struct pci_dev*,int ,int) ;
 scalar_t__ FUNC_4 (struct pci_dev*,int ) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (char*,int ) ;

__attribute__((used)) static void FUNC_7(struct pci_dev *VAR_2)
{
 if (VAR_2->bus->ops->read != VAR_1) {

  return;
 }
 if (FUNC_0(VAR_2->devfn) != 0)
  return;

 FUNC_6("PCI: Fixing up bridge %s\n", FUNC_1(VAR_2));


 FUNC_2(VAR_2);
 if (FUNC_4(VAR_2, ~0) < 0) {
  FUNC_5("PCI: BCMA bridge enable failed\n");
  return;
 }


 FUNC_3(VAR_2, VAR_0, 3);
}
