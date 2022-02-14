
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct gspca_dev {struct usb_device* dev; } ;


 int FUNC_0 (struct usb_device*,int,int,int) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0)
{
 struct usb_device *VAR_1 = VAR_0->dev;

 FUNC_0(VAR_1, 0x02, 0x00, 0x0000);
 FUNC_0(VAR_1, 0x03, 0x00, 0x0004);
 FUNC_0(VAR_1, 0x03, 0x00, 0x0003);
}
