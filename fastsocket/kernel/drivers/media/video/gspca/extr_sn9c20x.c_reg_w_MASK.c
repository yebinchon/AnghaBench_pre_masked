
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct usb_device {int dummy; } ;
struct gspca_dev {int usb_buf; struct usb_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int ,int const*,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct usb_device*,int ,int,int,int ,int,int ,int,int) ;
 int FUNC_4 (struct usb_device*,int ) ;

__attribute__((used)) static int FUNC_5(struct gspca_dev *VAR_4, u16 VAR_5,
   const u8 *VAR_6, int VAR_7)
{
 struct usb_device *VAR_8 = VAR_4->dev;
 int VAR_9;
 FUNC_1(VAR_4->usb_buf, VAR_6, VAR_7);
 VAR_9 = FUNC_3(VAR_8, FUNC_4(VAR_8, 0),
   0x08,
   VAR_1 | VAR_3 | VAR_2,
   VAR_5,
   0x00,
   VAR_4->usb_buf,
   VAR_7,
   500);
 if (FUNC_2(VAR_9 < 0 || VAR_9 != VAR_7)) {
  FUNC_0("Write register failed index 0x%02X", VAR_5);
  return -VAR_0;
 }
 return 0;
}
