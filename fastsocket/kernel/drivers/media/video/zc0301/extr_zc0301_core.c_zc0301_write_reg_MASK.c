
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct zc0301_device {struct usb_device* usbdev; } ;
struct usb_device {int dummy; } ;


 int FUNC_0 (int,char*,int ,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (struct usb_device*,int ,int,int,int ,int ,int *,int ,int ) ;
 int FUNC_2 (struct usb_device*,int ) ;

int FUNC_3(struct zc0301_device* VAR_1, u16 VAR_2, u16 VAR_3)
{
 struct usb_device* VAR_4 = VAR_1->usbdev;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_4, FUNC_2(VAR_4, 0), 0xa0, 0x40,
         VAR_3, VAR_2, ((void*)0), 0, VAR_0);
 if (VAR_5 < 0) {
  FUNC_0(3, "Failed to write a register (index 0x%04X, "
         "value 0x%02X, error %d)",VAR_2, VAR_3, VAR_5);
  return -1;
 }

 return 0;
}
