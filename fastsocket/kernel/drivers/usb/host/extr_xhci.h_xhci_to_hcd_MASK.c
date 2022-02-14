
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd {struct usb_hcd* main_hcd; } ;
struct usb_hcd {int dummy; } ;



__attribute__((used)) static inline struct usb_hcd *FUNC_0(struct xhci_hcd *VAR_0)
{
 return VAR_0->main_hcd;
}
