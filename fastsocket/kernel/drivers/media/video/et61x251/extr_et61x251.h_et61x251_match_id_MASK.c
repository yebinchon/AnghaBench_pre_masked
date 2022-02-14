
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device_id {int dummy; } ;
struct et61x251_device {int usbdev; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ,struct usb_device_id const*) ;

struct et61x251_device*
FUNC_2(struct et61x251_device* VAR_0, const struct usb_device_id *VAR_1)
{
 return FUNC_1(FUNC_0(VAR_0->usbdev, 0), VAR_1) ? VAR_0 : ((void*)0);
}
