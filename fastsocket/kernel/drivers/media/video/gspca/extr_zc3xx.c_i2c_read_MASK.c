
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct gspca_dev {scalar_t__ usb_err; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int,int,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct gspca_dev*,int) ;
 int FUNC_4 (struct gspca_dev*,int,int) ;

__attribute__((used)) static u16 FUNC_5(struct gspca_dev *VAR_1,
   u8 VAR_2)
{
 u8 VAR_3;
 u16 VAR_4;

 if (VAR_1->usb_err < 0)
  return 0;
 FUNC_4(VAR_1, VAR_2, 0x0092);
 FUNC_4(VAR_1, 0x02, 0x0090);
 FUNC_2(20);
 VAR_3 = FUNC_3(VAR_1, 0x0091);
 if (VAR_3 != 0x00)
  FUNC_1("i2c_r status error %02x", VAR_3);
 VAR_4 = FUNC_3(VAR_1, 0x0095);
 VAR_4 |= FUNC_3(VAR_1, 0x0096) << 8;
 FUNC_0(VAR_0, "i2c r [%02x] -> %04x (%02x)",
   VAR_2, VAR_4, VAR_3);
 return VAR_4;
}
