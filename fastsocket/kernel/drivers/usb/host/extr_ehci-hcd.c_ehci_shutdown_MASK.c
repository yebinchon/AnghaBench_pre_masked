
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct ehci_hcd {int lock; int iaa_watchdog; int watchdog; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct ehci_hcd*) ;
 struct ehci_hcd* FUNC_2 (struct usb_hcd*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct usb_hcd *VAR_0)
{
 struct ehci_hcd *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(&VAR_1->watchdog);
 FUNC_0(&VAR_1->iaa_watchdog);

 FUNC_3(&VAR_1->lock);
 FUNC_1(VAR_1);
 FUNC_4(&VAR_1->lock);
}
