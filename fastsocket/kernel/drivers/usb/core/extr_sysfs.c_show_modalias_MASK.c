
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct usb_interface {struct usb_host_interface* cur_altsetting; } ;
struct TYPE_4__ {int bInterfaceClass; int bInterfaceSubClass; int bInterfaceProtocol; } ;
struct usb_host_interface {TYPE_2__ desc; } ;
struct TYPE_3__ {int bDeviceClass; int bDeviceSubClass; int bDeviceProtocol; int bcdDevice; int idProduct; int idVendor; } ;
struct usb_device {TYPE_1__ descriptor; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct usb_device* FUNC_0 (struct usb_interface*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int,int,int,int,int,int,int,int,int) ;
 struct usb_interface* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
  struct device_attribute *VAR_1, char *VAR_2)
{
 struct usb_interface *VAR_3;
 struct usb_device *VAR_4;
 struct usb_host_interface *VAR_5;

 VAR_3 = FUNC_3(VAR_0);
 VAR_4 = FUNC_0(VAR_3);
 VAR_5 = VAR_3->cur_altsetting;

 return FUNC_2(VAR_2, "usb:v%04Xp%04Xd%04Xdc%02Xdsc%02Xdp%02X"
   "ic%02Xisc%02Xip%02X\n",
   FUNC_1(VAR_4->descriptor.idVendor),
   FUNC_1(VAR_4->descriptor.idProduct),
   FUNC_1(VAR_4->descriptor.bcdDevice),
   VAR_4->descriptor.bDeviceClass,
   VAR_4->descriptor.bDeviceSubClass,
   VAR_4->descriptor.bDeviceProtocol,
   VAR_5->desc.bInterfaceClass,
   VAR_5->desc.bInterfaceSubClass,
   VAR_5->desc.bInterfaceProtocol);
}
