
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct fhci_usb {int saved_msk; TYPE_2__* fhci; } ;
struct fhci_hcd {struct fhci_usb* usb_lld; } ;
struct TYPE_4__ {TYPE_1__* regs; } ;
struct TYPE_3__ {int usb_mod; int usb_mask; int usb_event; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static u32 FUNC_3(struct fhci_hcd *VAR_1)
{
 struct fhci_usb *VAR_2 = VAR_1->usb_lld;

 FUNC_1(&VAR_2->fhci->regs->usb_event, 0xffff);
 FUNC_1(&VAR_2->fhci->regs->usb_mask, VAR_2->saved_msk);
 FUNC_2(&VAR_2->fhci->regs->usb_mod, VAR_0);

 FUNC_0(100);

 return 0;
}
