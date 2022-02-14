
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct gspca_dev {int usb_err; int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char*,int ,int ,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int,int,int ,int ,int *,int ,int) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct gspca_dev *VAR_4, u16 VAR_5, u16 VAR_6)
{
 int VAR_7;

 if (VAR_4->usb_err < 0)
  return;
 FUNC_0(VAR_0, "reg_w v: %04x i: %04x", VAR_5, VAR_6);
 VAR_7 = FUNC_3(VAR_4->dev,
   FUNC_4(VAR_4->dev, 0),
   0x0c,
   VAR_1 | VAR_3 | VAR_2,
   VAR_5, VAR_6, ((void*)0), 0,
   500);
 FUNC_2(30);
 if (VAR_7 < 0) {
  FUNC_1("reg_w %04x %04x failed %d", VAR_5, VAR_6, VAR_7);
  VAR_4->usb_err = VAR_7;
 }
}
