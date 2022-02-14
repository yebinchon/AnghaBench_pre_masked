
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_hcd {TYPE_1__* driver; } ;
struct usb_device {int bus; } ;
struct TYPE_2__ {int (* get_frame_number ) (struct usb_hcd*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct usb_hcd*) ;
 struct usb_hcd* FUNC_1 (int ) ;
 int FUNC_2 (struct usb_hcd*) ;

int FUNC_3 (struct usb_device *VAR_1)
{
 struct usb_hcd *VAR_2 = FUNC_1(VAR_1->bus);

 if (!FUNC_0(VAR_2))
  return -VAR_0;
 return VAR_2->driver->get_frame_number (VAR_2);
}
