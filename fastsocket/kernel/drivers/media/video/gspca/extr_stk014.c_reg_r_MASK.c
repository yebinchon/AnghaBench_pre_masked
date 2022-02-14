
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct usb_device {int dummy; } ;
struct gspca_dev {int usb_err; int * usb_buf; struct usb_device* dev; } ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (struct usb_device*,int ,int,int,int,int ,int *,int,int) ;
 int FUNC_2 (struct usb_device*,int ) ;

__attribute__((used)) static u8 FUNC_3(struct gspca_dev *VAR_3,
   __u16 VAR_4)
{
 struct usb_device *VAR_5 = VAR_3->dev;
 int VAR_6;

 if (VAR_3->usb_err < 0)
  return 0;
 VAR_6 = FUNC_1(VAR_5, FUNC_2(VAR_5, 0),
   0x00,
   VAR_0 | VAR_2 | VAR_1,
   0x00,
   VAR_4,
   VAR_3->usb_buf, 1,
   500);
 if (VAR_6 < 0) {
  FUNC_0("reg_r err %d", VAR_6);
  VAR_3->usb_err = VAR_6;
  return 0;
 }
 return VAR_3->usb_buf[0];
}
