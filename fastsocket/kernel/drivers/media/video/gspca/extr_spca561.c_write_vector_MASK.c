
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct gspca_dev {struct usb_device* dev; } ;
typedef scalar_t__ __u16 ;


 int FUNC_0 (struct usb_device*,scalar_t__ const,scalar_t__ const) ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_0,
   const __u16 VAR_1[][2])
{
 struct usb_device *VAR_2 = VAR_0->dev;
 int VAR_3;

 VAR_3 = 0;
 while (VAR_1[VAR_3][1] != 0) {
  FUNC_0(VAR_2, VAR_1[VAR_3][1], VAR_1[VAR_3][0]);
  VAR_3++;
 }
}
