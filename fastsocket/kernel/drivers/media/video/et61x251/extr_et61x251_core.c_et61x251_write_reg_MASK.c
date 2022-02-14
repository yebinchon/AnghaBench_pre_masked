
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usb_device {int dummy; } ;
struct et61x251_device {int * control_buffer; struct usb_device* usbdev; } ;


 int FUNC_0 (int,char*,int ,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (struct usb_device*,int ,int,int,int ,int ,int *,int,int ) ;
 int FUNC_2 (struct usb_device*,int ) ;

int FUNC_3(struct et61x251_device* VAR_1, u8 VAR_2, u16 VAR_3)
{
 struct usb_device* VAR_4 = VAR_1->usbdev;
 u8* VAR_5 = VAR_1->control_buffer;
 int VAR_6;

 *VAR_5 = VAR_2;

 VAR_6 = FUNC_1(VAR_4, FUNC_2(VAR_4, 0), 0x00, 0x41,
         0, VAR_3, VAR_5, 1, VAR_0);
 if (VAR_6 < 0) {
  FUNC_0(3, "Failed to write a register (value 0x%02X, index "
         "0x%02X, error %d)", VAR_2, VAR_3, VAR_6);
  return -1;
 }

 return 0;
}
