
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {int dummy; } ;
struct fhci_usb {int ep0; TYPE_1__* actual_frame; } ;
struct fhci_hcd {int lock; int timer; struct fhci_usb* usb_lld; } ;
typedef int irqreturn_t ;
struct TYPE_2__ {scalar_t__ frame_status; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct fhci_usb*) ;
 int FUNC_2 (int ,int,int) ;
 struct fhci_hcd* FUNC_3 (struct usb_hcd*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

irqreturn_t FUNC_6(int VAR_3, void *VAR_4)
{
 struct usb_hcd *VAR_5 = VAR_4;
 struct fhci_hcd *VAR_6 = FUNC_3(VAR_5);
 struct fhci_usb *VAR_7 = VAR_6->usb_lld;

 FUNC_4(&VAR_6->lock);

 FUNC_2(VAR_6->timer, 1000, 0);

 if (VAR_7->actual_frame->frame_status == VAR_0) {
  VAR_7->actual_frame->frame_status = VAR_1;
  FUNC_0(VAR_7->ep0);
 }

 FUNC_1(VAR_7);

 FUNC_5(&VAR_6->lock);

 return VAR_2;
}
