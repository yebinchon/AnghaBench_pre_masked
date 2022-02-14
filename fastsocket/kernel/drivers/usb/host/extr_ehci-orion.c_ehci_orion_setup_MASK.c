
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int has_tt; } ;
struct ehci_hcd {int dummy; } ;


 int FUNC_0 (struct ehci_hcd*) ;
 int FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (struct ehci_hcd*,int ) ;
 int FUNC_3 (struct ehci_hcd*) ;
 struct ehci_hcd* FUNC_4 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_5(struct usb_hcd *VAR_0)
{
 struct ehci_hcd *VAR_1 = FUNC_4(VAR_0);
 int VAR_2;

 FUNC_3(VAR_1);
 VAR_2 = FUNC_0(VAR_1);
 if (VAR_2)
  return VAR_2;




 VAR_2 = FUNC_1(VAR_0);
 if (VAR_2)
  return VAR_2;

 VAR_0->has_tt = 1;

 FUNC_2(VAR_1, 0);

 return VAR_2;
}
