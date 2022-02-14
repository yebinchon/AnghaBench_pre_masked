
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct xhci_hcd {TYPE_1__* run_regs; } ;
struct usb_hcd {int dummy; } ;
struct TYPE_2__ {int microframe_index; } ;


 struct xhci_hcd* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (struct xhci_hcd*,int *) ;

int FUNC_2(struct usb_hcd *VAR_0)
{
 struct xhci_hcd *VAR_1 = FUNC_0(VAR_0);

 return FUNC_1(VAR_1, &VAR_1->run_regs->microframe_index) >> 3;
}
