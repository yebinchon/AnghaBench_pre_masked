
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int bus_name; } ;
struct usb_hcd {TYPE_1__ self; } ;
struct ohci_hcd {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 struct ohci_hcd* FUNC_1 (struct usb_hcd*) ;
 int FUNC_2 (struct ohci_hcd*) ;
 int FUNC_3 (struct ohci_hcd*) ;
 int FUNC_4 (struct usb_hcd*) ;

__attribute__((used)) static int FUNC_5(struct usb_hcd *VAR_0)
{
 struct ohci_hcd *VAR_1 = FUNC_1(VAR_0);
 int VAR_2;

 if ((VAR_2 = FUNC_2(VAR_1)) < 0)
  return VAR_2;

 if ((VAR_2 = FUNC_3(VAR_1)) < 0) {
  FUNC_0("can't start %s", VAR_0->self.bus_name);
  FUNC_4(VAR_0);
  return VAR_2;
 }

 return 0;
}
