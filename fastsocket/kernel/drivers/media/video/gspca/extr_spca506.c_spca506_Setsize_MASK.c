
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct gspca_dev {struct usb_device* dev; } ;
typedef int __u16 ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct usb_device*,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_1, __u16 VAR_2,
       __u16 VAR_3, __u16 VAR_4)
{
 struct usb_device *VAR_5 = VAR_1->dev;

 FUNC_0(VAR_0, "** SetSize **");
 FUNC_1(VAR_5, 0x04, (0x18 | (VAR_2 & 0x07)), 0x0000);

 FUNC_1(VAR_5, 0x04, 0x41, 0x0001);
 FUNC_1(VAR_5, 0x04, 0x00, 0x0002);

 FUNC_1(VAR_5, 0x04, 0x00, 0x0003);


 FUNC_1(VAR_5, 0x04, 0x00, 0x0004);

 FUNC_1(VAR_5, 0x04, 0x01, 0x0005);

 FUNC_1(VAR_5, 0x04, VAR_3, 0x0006);

 FUNC_1(VAR_5, 0x04, VAR_4, 0x0007);

 FUNC_1(VAR_5, 0x04, 0x00, 0x0008);

 FUNC_1(VAR_5, 0x04, 0x00, 0x0009);

 FUNC_1(VAR_5, 0x04, 0x21, 0x000a);

 FUNC_1(VAR_5, 0x04, 0x00, 0x000b);
}
