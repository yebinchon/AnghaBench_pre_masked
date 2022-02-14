
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct sd {scalar_t__ chip_revision; scalar_t__ contrast; } ;
struct gspca_dev {struct usb_device* dev; } ;
typedef scalar_t__ __u8 ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct usb_device*,int,scalar_t__) ;
 int FUNC_1 (struct gspca_dev*) ;

__attribute__((used)) static void FUNC_2(struct gspca_dev *VAR_1)
{
 struct sd *VAR_2 = (struct sd *) VAR_1;
 struct usb_device *VAR_3 = VAR_1->dev;
 __u8 VAR_4;

 if (VAR_2->chip_revision != VAR_0)
  return;
 VAR_4 = VAR_2->contrast + 0x20;


 FUNC_1(VAR_1);

 FUNC_0(VAR_3, 0x8652, VAR_4);

 FUNC_0(VAR_3, 0x8654, VAR_4);
}
