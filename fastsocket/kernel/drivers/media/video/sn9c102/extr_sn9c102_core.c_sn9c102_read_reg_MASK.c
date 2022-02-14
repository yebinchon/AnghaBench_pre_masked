
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct usb_device {int dummy; } ;
struct sn9c102_device {scalar_t__* control_buffer; struct usb_device* usbdev; } ;


 int FUNC_0 (int,char*,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (struct usb_device*,int ,int,int,int ,int ,scalar_t__*,int,int ) ;
 int FUNC_2 (struct usb_device*,int ) ;

int FUNC_3(struct sn9c102_device* VAR_1, u16 VAR_2)
{
 struct usb_device* VAR_3 = VAR_1->usbdev;
 u8* VAR_4 = VAR_1->control_buffer;
 int VAR_5;

 VAR_5 = FUNC_1(VAR_3, FUNC_2(VAR_3, 0), 0x00, 0xc1,
         VAR_2, 0, VAR_4, 1, VAR_0);
 if (VAR_5 < 0)
  FUNC_0(3, "Failed to read a register (index 0x%02X, error %d)",
      VAR_2, VAR_5);

 return (VAR_5 >= 0) ? (int)(*VAR_4) : -1;
}
