
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct usb_serial {struct usb_device* dev; } ;
struct TYPE_2__ {int idProduct; int idVendor; } ;
struct usb_device {TYPE_1__ descriptor; } ;


 int FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct usb_serial *VAR_0)
{
 struct usb_device *VAR_1 = VAR_0->dev;
 if (FUNC_0(VAR_1->descriptor.idVendor) == 0x18ec &&
   FUNC_0(VAR_1->descriptor.idProduct) == 0x3118)
  return 1;
 return 0;
}
