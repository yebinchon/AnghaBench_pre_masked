
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct usb_device {int dummy; } ;
struct gspca_dev {int usb_buf; struct usb_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct usb_device*,int ,int,int,int,int,int ,int,int) ;
 int FUNC_3 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_4(struct gspca_dev *VAR_4, u16 VAR_5, u16 VAR_6)
{
 struct usb_device *VAR_7 = VAR_4->dev;
 int VAR_8;
 VAR_8 = FUNC_2(VAR_7, FUNC_3(VAR_7, 0),
   0x00,
   VAR_1 | VAR_3 | VAR_2,
   VAR_5,
   0x00,
   VAR_4->usb_buf,
   VAR_6,
   500);
 if (FUNC_1(VAR_8 < 0 || VAR_8 != VAR_6)) {
  FUNC_0("Read register failed 0x%02X", VAR_5);
  return -VAR_0;
 }
 return 0;
}
