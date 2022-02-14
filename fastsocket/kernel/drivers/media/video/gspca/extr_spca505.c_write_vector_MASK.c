
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct usb_device {int dummy; } ;
struct gspca_dev {struct usb_device* dev; } ;


 int FUNC_0 (struct usb_device*,scalar_t__ const,scalar_t__ const,scalar_t__ const) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_0,
   const u8 VAR_1[][3])
{
 struct usb_device *VAR_2 = VAR_0->dev;
 int VAR_3, VAR_4 = 0;

 while (VAR_1[VAR_4][0] != 0) {
  VAR_3 = FUNC_0(VAR_2, VAR_1[VAR_4][0], VAR_1[VAR_4][2], VAR_1[VAR_4][1]);
  if (VAR_3 < 0)
   return VAR_3;
  VAR_4++;
 }
 return 0;
}
