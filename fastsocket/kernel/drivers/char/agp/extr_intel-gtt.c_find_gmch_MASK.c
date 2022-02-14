
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int devfn; } ;
struct TYPE_2__ {struct pci_dev* pcidev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 struct pci_dev* FUNC_1 (int ,int ,struct pci_dev*) ;

__attribute__((used)) static int FUNC_2(u16 VAR_2)
{
 struct pci_dev *VAR_3;

 VAR_3 = FUNC_1(VAR_0, VAR_2, ((void*)0));
 if (VAR_3 && FUNC_0(VAR_3->devfn) != 0) {
  VAR_3 = FUNC_1(VAR_0,
          VAR_2, VAR_3);
 }

 if (!VAR_3)
  return 0;

 VAR_1.pcidev = VAR_3;
 return 1;
}
