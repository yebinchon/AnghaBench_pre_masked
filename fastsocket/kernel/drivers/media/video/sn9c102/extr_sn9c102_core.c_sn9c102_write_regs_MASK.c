
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct usb_device {int dummy; } ;
struct sn9c102_device {size_t* control_buffer; size_t* reg; struct usb_device* usbdev; } ;


 int FUNC_0 (int,char*,size_t,size_t,int) ;
 int VAR_0 ;
 int FUNC_1 (struct usb_device*,int ,int,int,size_t,int ,size_t*,int,int ) ;
 int FUNC_2 (struct usb_device*,int ) ;

int FUNC_3(struct sn9c102_device* VAR_1, const u8 VAR_2[][2],
         int VAR_3)
{
 struct usb_device* VAR_4 = VAR_1->usbdev;
 u8* VAR_5 = VAR_1->control_buffer;
 int VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  u8 VAR_8 = VAR_2[VAR_6][1];
  *VAR_5 = VAR_2[VAR_6][0];

  VAR_7 = FUNC_1(VAR_4, FUNC_2(VAR_4, 0), 0x08,
          0x41, VAR_8, 0, VAR_5, 1,
          VAR_0);

  if (VAR_7 < 0) {
   FUNC_0(3, "Failed to write a register (value 0x%02X, "
          "index 0x%02X, error %d)", *VAR_5, VAR_8, VAR_7);
   return -1;
  }

  VAR_1->reg[VAR_8] = *VAR_5;
 }

 return 0;
}
