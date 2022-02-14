
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct pci_dev {int dummy; } ;
struct ohci_hcd {int dummy; } ;
struct TYPE_3__ {int controller; } ;
struct TYPE_4__ {TYPE_1__ self; } ;


 TYPE_2__* FUNC_0 (struct ohci_hcd*) ;
 int FUNC_1 (struct pci_dev*,int,int*) ;
 int FUNC_2 (struct pci_dev*,int,int) ;
 struct pci_dev* FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ohci_hcd *VAR_0, int VAR_1)
{
 struct pci_dev *VAR_2;
 u16 VAR_3;

 VAR_2 = FUNC_3(FUNC_0(VAR_0)->self.controller);
 FUNC_1(VAR_2, 0x50, &VAR_3);
 if (VAR_1 == 0)
  FUNC_2(VAR_2, 0x50, VAR_3 & 0xfcff);
 else
  FUNC_2(VAR_2, 0x50, VAR_3 | 0x0300);
}
