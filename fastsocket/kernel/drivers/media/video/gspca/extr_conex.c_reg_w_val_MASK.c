
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct gspca_dev {int * usb_buf; struct usb_device* dev; } ;
typedef int __u8 ;
typedef int __u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct usb_device*,int ,int ,int,int ,int ,int *,int,int) ;
 int FUNC_1 (struct usb_device*,int ) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_3,
   __u16 VAR_4,
   __u8 VAR_5)
{
 struct usb_device *VAR_6 = VAR_3->dev;

 VAR_3->usb_buf[0] = VAR_5;
 FUNC_0(VAR_6,
   FUNC_1(VAR_6, 0),
   0,
   VAR_0 | VAR_2 | VAR_1,
   0,
   VAR_4, VAR_3->usb_buf, 1, 500);
}
