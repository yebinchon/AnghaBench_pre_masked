
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef size_t u16 ;
struct usb_device {int dummy; } ;
struct sn9c102_device {int * reg; int * control_buffer; struct usb_device* usbdev; } ;


 size_t FUNC_0 (int *) ;
 int FUNC_1 (int,char*,int ,size_t,int) ;
 int VAR_0 ;
 int FUNC_2 (struct usb_device*,int ,int,int,size_t,int ,int *,int,int ) ;
 int FUNC_3 (struct usb_device*,int ) ;

int FUNC_4(struct sn9c102_device* VAR_1, u8 VAR_2, u16 VAR_3)
{
 struct usb_device* VAR_4 = VAR_1->usbdev;
 u8* VAR_5 = VAR_1->control_buffer;
 int VAR_6;

 if (VAR_3 >= FUNC_0(VAR_1->reg))
  return -1;

 *VAR_5 = VAR_2;

 VAR_6 = FUNC_2(VAR_4, FUNC_3(VAR_4, 0), 0x08, 0x41,
         VAR_3, 0, VAR_5, 1, VAR_0);
 if (VAR_6 < 0) {
  FUNC_1(3, "Failed to write a register (value 0x%02X, index "
         "0x%02X, error %d)", VAR_2, VAR_3, VAR_6);
  return -1;
 }

 VAR_1->reg[VAR_3] = VAR_2;

 return 0;
}
