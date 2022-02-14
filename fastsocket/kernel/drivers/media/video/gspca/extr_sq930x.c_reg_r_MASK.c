
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct gspca_dev {int usb_err; int usb_buf; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int) ;
 int FUNC_1 (int ,int ,int,int,int ,int ,int ,int,int) ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_3,
  u16 VAR_4, int VAR_5)
{
 int VAR_6;

 if (VAR_3->usb_err < 0)
  return;
 VAR_6 = FUNC_1(VAR_3->dev,
   FUNC_2(VAR_3->dev, 0),
   0x0c,
   VAR_0 | VAR_2 | VAR_1,
   VAR_4, 0, VAR_3->usb_buf, VAR_5,
   500);
 if (VAR_6 < 0) {
  FUNC_0("reg_r %04x failed %d", VAR_4, VAR_6);
  VAR_3->usb_err = VAR_6;
 }
}
