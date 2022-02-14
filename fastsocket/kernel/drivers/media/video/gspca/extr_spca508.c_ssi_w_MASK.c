
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_device {int dummy; } ;
struct gspca_dev {scalar_t__* usb_buf; struct usb_device* dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct gspca_dev*,int) ;
 int FUNC_3 (struct usb_device*,int,int) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_1,
  u16 VAR_2, u16 VAR_3)
{
 struct usb_device *VAR_4 = VAR_1->dev;
 int VAR_5, VAR_6;

 VAR_5 = FUNC_3(VAR_4, 0x8802, VAR_2 >> 8);
 if (VAR_5 < 0)
  goto out;
 VAR_5 = FUNC_3(VAR_4, 0x8801, VAR_2 & 0x00ff);
 if (VAR_5 < 0)
  goto out;
 if ((VAR_2 & 0xff00) == 0x1000) {
  VAR_5 = FUNC_3(VAR_4, 0x8805, VAR_3 & 0x00ff);
  if (VAR_5 < 0)
   goto out;
  VAR_3 >>= 8;
 }
 VAR_5 = FUNC_3(VAR_4, 0x8800, VAR_3);
 if (VAR_5 < 0)
  goto out;


 VAR_6 = 10;
 for (;;) {
  VAR_5 = FUNC_2(VAR_1, 0x8803);
  if (VAR_5 < 0)
   break;
  if (VAR_1->usb_buf[0] == 0)
   break;
  if (--VAR_6 <= 0) {
   FUNC_0(VAR_0, "ssi_w busy %02x",
     VAR_1->usb_buf[0]);
   VAR_5 = -1;
   break;
  }
  FUNC_1(8);
 }

out:
 return VAR_5;
}
