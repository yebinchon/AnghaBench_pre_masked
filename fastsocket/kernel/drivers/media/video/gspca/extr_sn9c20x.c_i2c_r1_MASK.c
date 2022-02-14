
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int i2c_addr; } ;
struct gspca_dev {int* usb_buf; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct gspca_dev*,int*) ;
 scalar_t__ FUNC_1 (struct gspca_dev*,int,int) ;

__attribute__((used)) static int FUNC_2(struct gspca_dev *VAR_1, u8 VAR_2, u8 *VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_1;
 u8 VAR_5[8];

 VAR_5[0] = 0x81 | (1 << 4);
 VAR_5[1] = VAR_4->i2c_addr;
 VAR_5[2] = VAR_2;
 VAR_5[3] = 0;
 VAR_5[4] = 0;
 VAR_5[5] = 0;
 VAR_5[6] = 0;
 VAR_5[7] = 0x10;
 if (FUNC_0(VAR_1, VAR_5) < 0)
  return -VAR_0;
 VAR_5[0] = 0x81 | (1 << 4) | 0x02;
 VAR_5[2] = 0;
 if (FUNC_0(VAR_1, VAR_5) < 0)
  return -VAR_0;
 if (FUNC_1(VAR_1, 0x10c2, 5) < 0)
  return -VAR_0;
 *VAR_3 = VAR_1->usb_buf[4];
 return 0;
}
