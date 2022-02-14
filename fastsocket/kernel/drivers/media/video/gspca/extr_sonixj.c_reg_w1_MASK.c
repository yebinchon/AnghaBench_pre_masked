
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct gspca_dev {int usb_err; int * usb_buf; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ,int ,int,int,int ,int ,int *,int,int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void FUNC_4(struct gspca_dev *VAR_4,
     u16 VAR_5,
     u8 VAR_6)
{
 int VAR_7;

 if (VAR_4->usb_err < 0)
  return;
 FUNC_0(VAR_0, "reg_w1 [%04x] = %02x", VAR_5, VAR_6);
 VAR_4->usb_buf[0] = VAR_6;
 VAR_7 = FUNC_2(VAR_4->dev,
   FUNC_3(VAR_4->dev, 0),
   0x08,
   VAR_1 | VAR_3 | VAR_2,
   VAR_5,
   0,
   VAR_4->usb_buf, 1,
   500);
 if (VAR_7 < 0) {
  FUNC_1("reg_w1 err %d", VAR_7);
  VAR_4->usb_err = VAR_7;
 }
}
