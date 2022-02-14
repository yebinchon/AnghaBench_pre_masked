
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct ch341_private {unsigned long baud_rate; } ;


 short VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct usb_device*,int,int,short) ;
 int FUNC_1 (char*,unsigned long) ;

__attribute__((used)) static int FUNC_2(struct usb_device *VAR_3,
         struct ch341_private *VAR_4)
{
 short VAR_5, VAR_6;
 int VAR_7;
 unsigned long VAR_8;
 short VAR_9;

 FUNC_1("ch341_set_baudrate(%d)", VAR_4->baud_rate);

 if (!VAR_4->baud_rate)
  return -VAR_2;
 VAR_8 = (VAR_1 / VAR_4->baud_rate);
 VAR_9 = VAR_0;

 while ((VAR_8 > 0xfff0) && VAR_9) {
  VAR_8 >>= 3;
  VAR_9--;
 }

 if (VAR_8 > 0xfff0)
  return -VAR_2;

 VAR_8 = 0x10000 - VAR_8;
 VAR_5 = (VAR_8 & 0xff00) | VAR_9;
 VAR_6 = VAR_8 & 0xff;

 VAR_7 = FUNC_0(VAR_3, 0x9a, 0x1312, VAR_5);
 if (!VAR_7)
  VAR_7 = FUNC_0(VAR_3, 0x9a, 0x0f2c, VAR_6);

 return VAR_7;
}
