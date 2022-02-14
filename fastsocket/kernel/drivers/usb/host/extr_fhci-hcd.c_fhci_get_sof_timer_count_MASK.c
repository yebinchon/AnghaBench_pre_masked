
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct fhci_usb {TYPE_2__* fhci; } ;
struct TYPE_4__ {TYPE_1__* regs; } ;
struct TYPE_3__ {int usb_sof_tmr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

u16 FUNC_2(struct fhci_usb *VAR_0)
{
 return FUNC_0(FUNC_1(&VAR_0->fhci->regs->usb_sof_tmr) / 12);
}
