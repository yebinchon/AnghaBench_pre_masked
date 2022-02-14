
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {scalar_t__ driver_info; scalar_t__ bInterfaceClass; scalar_t__ bDeviceClass; scalar_t__ idVendor; } ;
struct usb_device {int dummy; } ;


 scalar_t__ FUNC_0 (struct usb_device*,struct usb_device_id const*) ;
 struct usb_device_id* VAR_0 ;

__attribute__((used)) static const struct usb_device_id *FUNC_1(struct usb_device *VAR_1)
{
 const struct usb_device_id *VAR_2 = VAR_0;

 for (; VAR_2->idVendor || VAR_2->bDeviceClass || VAR_2->bInterfaceClass ||
   VAR_2->driver_info; VAR_2++) {
  if (FUNC_0(VAR_1, VAR_2))
   return VAR_2;
 }
 return ((void*)0);
}
