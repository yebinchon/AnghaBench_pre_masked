
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct fhci_hcd {int * usb_lld; } ;


 int FUNC_0 (struct fhci_hcd*) ;
 int FUNC_1 (struct fhci_hcd*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct fhci_hcd* FUNC_4 (struct usb_hcd*) ;

__attribute__((used)) static void FUNC_5(struct usb_hcd *VAR_0)
{
 struct fhci_hcd *VAR_1 = FUNC_4(VAR_0);

 FUNC_2(VAR_1->usb_lld);
 FUNC_1(VAR_1);

 FUNC_3(VAR_1->usb_lld);
 VAR_1->usb_lld = ((void*)0);
 FUNC_0(VAR_1);
}
