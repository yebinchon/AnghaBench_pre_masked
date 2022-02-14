
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhid_device {int dummy; } ;
struct usb_interface {int dummy; } ;
struct hid_device {struct usbhid_device* driver_data; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct hid_device*) ;
 int FUNC_2 (struct usbhid_device*) ;
 struct hid_device* FUNC_3 (struct usb_interface*) ;

__attribute__((used)) static void FUNC_4(struct usb_interface *VAR_0)
{
 struct hid_device *VAR_1 = FUNC_3(VAR_0);
 struct usbhid_device *VAR_2;

 if (FUNC_0(!VAR_1))
  return;

 VAR_2 = VAR_1->driver_data;
 FUNC_1(VAR_1);
 FUNC_2(VAR_2);
}
