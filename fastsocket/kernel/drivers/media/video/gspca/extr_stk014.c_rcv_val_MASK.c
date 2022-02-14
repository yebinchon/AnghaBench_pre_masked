
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct gspca_dev {int usb_err; int usb_buf; struct usb_device* dev; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct gspca_dev*,int,int) ;
 int FUNC_2 (struct usb_device*,int ,int ,int,int*,int) ;
 int FUNC_3 (struct usb_device*,int) ;

__attribute__((used)) static void FUNC_4(struct gspca_dev *VAR_0,
   int VAR_1)
{
 struct usb_device *VAR_2 = VAR_0->dev;
 int VAR_3, VAR_4;

 FUNC_1(VAR_0, 0x634, (VAR_1 >> 16) & 0xff);
 FUNC_1(VAR_0, 0x635, (VAR_1 >> 8) & 0xff);
 FUNC_1(VAR_0, 0x636, VAR_1 & 0xff);
 FUNC_1(VAR_0, 0x637, 0);
 FUNC_1(VAR_0, 0x638, 4);
 FUNC_1(VAR_0, 0x639, 0);
 FUNC_1(VAR_0, 0x63a, 0);
 FUNC_1(VAR_0, 0x63b, 0);
 FUNC_1(VAR_0, 0x630, 5);
 if (VAR_0->usb_err < 0)
  return;
 VAR_4 = FUNC_2(VAR_2,
   FUNC_3(VAR_2, 0x05),
   VAR_0->usb_buf,
   4,
   &VAR_3,
   500);
 if (VAR_4 < 0) {
  FUNC_0("rcv_val err %d", VAR_4);
  VAR_0->usb_err = VAR_4;
 }
}
