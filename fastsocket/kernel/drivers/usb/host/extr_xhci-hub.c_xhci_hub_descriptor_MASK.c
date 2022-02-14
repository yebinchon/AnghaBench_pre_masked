
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd {int dummy; } ;
struct usb_hub_descriptor {int dummy; } ;
struct usb_hcd {scalar_t__ speed; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct usb_hcd*,struct xhci_hcd*,struct usb_hub_descriptor*) ;
 int FUNC_1 (struct usb_hcd*,struct xhci_hcd*,struct usb_hub_descriptor*) ;

__attribute__((used)) static void FUNC_2(struct usb_hcd *VAR_1, struct xhci_hcd *VAR_2,
  struct usb_hub_descriptor *VAR_3)
{

 if (VAR_1->speed == VAR_0)
  FUNC_1(VAR_1, VAR_2, VAR_3);
 else
  FUNC_0(VAR_1, VAR_2, VAR_3);

}
