
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd {struct usb_hcd* shared_hcd; } ;
struct usb_hcd {int regs; } ;
struct platform_device {int dummy; } ;


 struct xhci_hcd* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct xhci_hcd*) ;
 struct usb_hcd* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct usb_hcd*) ;
 int FUNC_5 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct usb_hcd *VAR_1 = FUNC_3(VAR_0);
 struct xhci_hcd *VAR_2 = FUNC_0(VAR_1);

 FUNC_5(VAR_2->shared_hcd);
 FUNC_4(VAR_2->shared_hcd);

 FUNC_5(VAR_1);
 FUNC_1(VAR_1->regs);
 FUNC_4(VAR_1);
 FUNC_2(VAR_2);

 return 0;
}
