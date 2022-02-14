
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_serial {int dummy; } ;
struct usb_device_id {scalar_t__ driver_info; } ;
struct ftdi_sio_quirk {int (* probe ) (struct usb_serial*) ;} ;


 int FUNC_0 (struct usb_serial*) ;
 int FUNC_1 (struct usb_serial*,void*) ;

__attribute__((used)) static int FUNC_2(struct usb_serial *VAR_0,
     const struct usb_device_id *VAR_1)
{
 struct ftdi_sio_quirk *VAR_2 =
    (struct ftdi_sio_quirk *)VAR_1->driver_info;

 if (VAR_2 && VAR_2->probe) {
  int VAR_3 = VAR_2->probe(VAR_0);
  if (VAR_3 != 0)
   return VAR_3;
 }

 FUNC_1(VAR_0, (void *)VAR_1->driver_info);

 return 0;
}
