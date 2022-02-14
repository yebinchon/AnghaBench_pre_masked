
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct gspca_dev {int usb_err; int * usb_buf; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int ,int ,int ,int,int ,int ,int *,int,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct gspca_dev *VAR_5,
    u16 VAR_6, int VAR_7)
{
 int VAR_8;

 if (VAR_5->usb_err < 0)
  return;






 VAR_8 = FUNC_2(VAR_5->dev,
   FUNC_3(VAR_5->dev, 0),
   0,
   VAR_2 | VAR_4 | VAR_3,
   VAR_6, 0,
   VAR_5->usb_buf, VAR_7,
   500);
 FUNC_0(VAR_0, "reg_r [%02x] -> %02x", VAR_6, VAR_5->usb_buf[0]);
 if (VAR_8 < 0) {
  FUNC_1("reg_r err %d", VAR_8);
  VAR_5->usb_err = VAR_8;
 }
}
