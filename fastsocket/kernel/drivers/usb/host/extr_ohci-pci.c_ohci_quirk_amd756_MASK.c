
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_hcd {int dummy; } ;
struct ohci_hcd {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (struct usb_hcd*) ;
 struct ohci_hcd* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (struct ohci_hcd*,char*) ;

__attribute__((used)) static int FUNC_3(struct usb_hcd *VAR_1)
{
 struct ohci_hcd *VAR_2 = FUNC_1 (VAR_1);

 VAR_2->flags = VAR_0;
 FUNC_2 (VAR_2, "AMD756 erratum 4 workaround\n");


 return FUNC_0(VAR_1);
}
