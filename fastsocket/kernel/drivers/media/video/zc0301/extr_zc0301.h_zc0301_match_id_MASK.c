
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zc0301_device {int usbdev; } ;
struct usb_device_id {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,struct usb_device_id const*) ;

struct zc0301_device*
FUNC_2(struct zc0301_device* VAR_0, const struct usb_device_id *VAR_1)
{
 return FUNC_1(FUNC_0(VAR_0->usbdev, 0), VAR_1) ? VAR_0 : ((void*)0);
}
