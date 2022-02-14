
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct sd {int brightness; } ;
struct gspca_dev {struct usb_device* dev; } ;
typedef int __u8 ;


 int FUNC_0 (struct usb_device*,int,int ) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;
 struct usb_device *VAR_2 = VAR_0->dev;
 __u8 VAR_3;

 VAR_3 = VAR_1->brightness;


 FUNC_0(VAR_2, 0x8611, VAR_3);
 FUNC_0(VAR_2, 0x8612, VAR_3);
 FUNC_0(VAR_2, 0x8613, VAR_3);
 FUNC_0(VAR_2, 0x8614, VAR_3);
}
