
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct pci_dev {int dummy; } ;
struct pci_bus {struct pci_dev* self; } ;
struct ixgbe_adapter {TYPE_2__* pdev; } ;
struct TYPE_4__ {TYPE_1__* bus; } ;
struct TYPE_3__ {struct pci_bus* parent; } ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*,int ) ;
 int FUNC_1 (struct pci_dev*,scalar_t__,int *) ;

__attribute__((used)) static int FUNC_2(struct ixgbe_adapter *VAR_1,
       u32 VAR_2, u16 *VAR_3)
{
 int VAR_4 = 0;
 struct pci_dev *VAR_5;
 struct pci_bus *VAR_6;

 VAR_6 = VAR_1->pdev->bus->parent;
 if (!VAR_6)
  return -1;

 VAR_5 = VAR_6->self;
 if (!VAR_5)
  return -1;

 VAR_4 = FUNC_0(VAR_5, VAR_0);
 if (!VAR_4)
  return -1;

 FUNC_1(VAR_5, VAR_4 + VAR_2, VAR_3);
 return 0;
}
