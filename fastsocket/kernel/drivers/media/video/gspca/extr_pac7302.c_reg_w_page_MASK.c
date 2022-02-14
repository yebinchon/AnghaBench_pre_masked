
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {int usb_err; scalar_t__* usb_buf; int dev; } ;
typedef scalar_t__ __u8 ;


 scalar_t__ const VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,int,scalar_t__ const,int) ;
 int FUNC_1 (int ,int ,int ,int,int ,int,scalar_t__*,int,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_4,
   const __u8 *VAR_5, int VAR_6)
{
 int VAR_7;
 int VAR_8 = 0;

 if (VAR_4->usb_err < 0)
  return;
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++) {
  if (VAR_5[VAR_7] == VAR_0)
   continue;
  VAR_4->usb_buf[0] = VAR_5[VAR_7];
  VAR_8 = FUNC_1(VAR_4->dev,
    FUNC_2(VAR_4->dev, 0),
    0,
   VAR_1 | VAR_3 | VAR_2,
    0, VAR_7, VAR_4->usb_buf, 1,
    500);
  if (VAR_8 < 0) {
   FUNC_0("reg_w_page() failed index 0x%02x, "
   "value 0x%02x, error %d",
    VAR_7, VAR_5[VAR_7], VAR_8);
   VAR_4->usb_err = VAR_8;
   break;
  }
 }
}
