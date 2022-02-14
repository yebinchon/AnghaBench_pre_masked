
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usbhid_device {int intf; } ;
struct hid_device {struct usbhid_device* driver_data; } ;


 int FUNC_0 (int ) ;

int FUNC_1(struct hid_device *VAR_0)
{
 struct usbhid_device *VAR_1 = VAR_0->driver_data;

 return FUNC_0(VAR_1->intf);
}
