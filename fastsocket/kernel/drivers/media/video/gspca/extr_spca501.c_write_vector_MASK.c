
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_device {int dummy; } ;
struct gspca_dev {struct usb_device* dev; } ;
typedef scalar_t__ __u16 ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,scalar_t__ const,scalar_t__ const,scalar_t__ const) ;
 int FUNC_1 (struct usb_device*,scalar_t__ const,scalar_t__ const,scalar_t__ const) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_1,
   const __u16 VAR_2[][3])
{
 struct usb_device *VAR_3 = VAR_1->dev;
 int VAR_4, VAR_5 = 0;

 while (VAR_2[VAR_5][0] != 0 || VAR_2[VAR_5][1] != 0 || VAR_2[VAR_5][2] != 0) {
  VAR_4 = FUNC_1(VAR_3, VAR_2[VAR_5][0], VAR_2[VAR_5][2], VAR_2[VAR_5][1]);
  if (VAR_4 < 0) {
   FUNC_0(VAR_0,
    "Reg write failed for 0x%02x,0x%02x,0x%02x",
    VAR_2[VAR_5][0], VAR_2[VAR_5][1], VAR_2[VAR_5][2]);
   return VAR_4;
  }
  VAR_5++;
 }
 return 0;
}
