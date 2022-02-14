
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xhci_hcd {int lock; int * shared_hcd; } ;
struct usb_hcd {int dummy; } ;


 struct xhci_hcd* FUNC_0 (struct usb_hcd*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct xhci_hcd*) ;

__attribute__((used)) static void FUNC_4(struct usb_hcd *VAR_0)
{
 struct xhci_hcd *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->lock);
 FUNC_3(VAR_1);





 VAR_1->shared_hcd = ((void*)0);
 FUNC_2(&VAR_1->lock);
}
