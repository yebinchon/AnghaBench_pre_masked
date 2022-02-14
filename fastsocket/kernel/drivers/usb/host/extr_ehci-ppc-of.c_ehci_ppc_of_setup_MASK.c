
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct ehci_hcd {int sbrn; } ;


 int FUNC_0 (struct ehci_hcd*) ;
 int FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (struct ehci_hcd*) ;
 struct ehci_hcd* FUNC_3 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_4(struct usb_hcd *VAR_0)
{
 struct ehci_hcd *VAR_1 = FUNC_3(VAR_0);
 int VAR_2;

 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2)
  return VAR_2;

 VAR_1->sbrn = 0x20;
 return FUNC_2(VAR_1);
}
