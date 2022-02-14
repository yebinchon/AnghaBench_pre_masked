
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xhci_hcd {int quirks; TYPE_2__* op_regs; int lock; } ;
struct TYPE_3__ {int controller; } ;
struct usb_hcd {TYPE_1__ self; } ;
struct TYPE_4__ {int status; } ;


 int VAR_0 ;
 struct xhci_hcd* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct xhci_hcd*) ;
 int FUNC_6 (struct xhci_hcd*,char*,int ) ;
 int FUNC_7 (struct xhci_hcd*) ;
 int FUNC_8 (struct xhci_hcd*,int *) ;

void FUNC_9(struct usb_hcd *VAR_1)
{
 struct xhci_hcd *VAR_2 = FUNC_0(VAR_1);

 if (VAR_2->quirks & VAR_0)
  FUNC_4(FUNC_3(VAR_1->self.controller));

 FUNC_1(&VAR_2->lock);
 FUNC_7(VAR_2);
 FUNC_2(&VAR_2->lock);

 FUNC_5(VAR_2);

 FUNC_6(VAR_2, "xhci_shutdown completed - status = %x\n",
      FUNC_8(VAR_2, &VAR_2->op_regs->status));
}
