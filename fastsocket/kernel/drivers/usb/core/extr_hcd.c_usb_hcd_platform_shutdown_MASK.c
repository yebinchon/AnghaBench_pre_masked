
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {TYPE_1__* driver; } ;
struct platform_device {int dummy; } ;
struct TYPE_2__ {int (* shutdown ) (struct usb_hcd*) ;} ;


 struct usb_hcd* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct usb_hcd*) ;

void
FUNC_2(struct platform_device* VAR_0)
{
 struct usb_hcd *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->driver->shutdown)
  VAR_1->driver->shutdown(VAR_1);
}
