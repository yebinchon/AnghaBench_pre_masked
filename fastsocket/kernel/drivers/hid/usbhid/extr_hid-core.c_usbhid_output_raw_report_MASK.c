
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usbhid_device {struct usb_interface* intf; } ;
struct usb_interface {struct usb_host_interface* cur_altsetting; } ;
struct TYPE_2__ {int bInterfaceNumber; } ;
struct usb_host_interface {TYPE_1__ desc; } ;
struct usb_device {int dummy; } ;
struct hid_device {struct usbhid_device* driver_data; } ;
typedef unsigned char __u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct usb_device* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct usb_device*,int ,int ,int,unsigned char,int ,unsigned char*,size_t,int ) ;
 int FUNC_2 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_3(struct hid_device *VAR_5, __u8 *VAR_6, size_t VAR_7,
  unsigned char VAR_8)
{
 struct usbhid_device *VAR_9 = VAR_5->driver_data;
 struct usb_device *VAR_10 = FUNC_0(VAR_5);
 struct usb_interface *VAR_11 = VAR_9->intf;
 struct usb_host_interface *VAR_12 = VAR_11->cur_altsetting;
 int VAR_13;

 VAR_13 = FUNC_1(VAR_10, FUNC_2(VAR_10, 0),
  VAR_0,
  VAR_2 | VAR_4 | VAR_3,
  ((VAR_8 + 1) << 8) | *VAR_6,
  VAR_12->desc.bInterfaceNumber, VAR_6 + 1, VAR_7 - 1,
  VAR_1);


 if (VAR_13 > 0)
  VAR_13++;

 return VAR_13;
}
