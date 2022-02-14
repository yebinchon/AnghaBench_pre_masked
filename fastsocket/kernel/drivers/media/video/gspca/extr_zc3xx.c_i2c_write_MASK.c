
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct gspca_dev {scalar_t__ usb_err; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int,int,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct gspca_dev*,int) ;
 int FUNC_4 (struct gspca_dev*,int,int) ;

__attribute__((used)) static u8 FUNC_5(struct gspca_dev *VAR_1,
   u8 VAR_2,
   u8 VAR_3,
   u8 VAR_4)
{
 u8 VAR_5;

 if (VAR_1->usb_err < 0)
  return 0;
 FUNC_4(VAR_1, VAR_2, 0x92);
 FUNC_4(VAR_1, VAR_3, 0x93);
 FUNC_4(VAR_1, VAR_4, 0x94);
 FUNC_4(VAR_1, 0x01, 0x90);
 FUNC_2(1);
 VAR_5 = FUNC_3(VAR_1, 0x0091);
 if (VAR_5 != 0x00)
  FUNC_1("i2c_w status error %02x", VAR_5);
 FUNC_0(VAR_0, "i2c w [%02x] = %02x%02x (%02x)",
   VAR_2, VAR_4, VAR_3, VAR_5);
 return VAR_5;
}
