
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct net2280 {TYPE_2__* usb; TYPE_1__* regs; } ;
struct TYPE_4__ {int usbctl; } ;
struct TYPE_3__ {int pciirqenb1; int pciirqenb0; } ;


 struct net2280* FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (int ,int *) ;

__attribute__((used)) static void FUNC_2 (struct pci_dev *VAR_0)
{
 struct net2280 *VAR_1 = FUNC_0 (VAR_0);


 FUNC_1 (0, &VAR_1->regs->pciirqenb0);
 FUNC_1 (0, &VAR_1->regs->pciirqenb1);


 FUNC_1 (0, &VAR_1->usb->usbctl);
}
