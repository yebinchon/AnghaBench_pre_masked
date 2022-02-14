
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int sensor; int i2c_addr; } ;
struct gspca_dev {int dummy; } ;





 int FUNC_0 (struct gspca_dev*,int*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct gspca_dev*,int,int) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_0, u8 VAR_1, int VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_0;
 u8 VAR_4[8];

 switch (VAR_3->sensor) {
 case 130:
 case 128:
 case 129:
  VAR_4[0] = 0x80 | 0x10;
  break;
 default:
  VAR_4[0] = 0x81 | 0x10;
  break;
 }
 VAR_4[1] = VAR_3->i2c_addr;
 VAR_4[2] = VAR_1;
 VAR_4[3] = 0;
 VAR_4[4] = 0;
 VAR_4[5] = 0;
 VAR_4[6] = 0;
 VAR_4[7] = 0x10;
 FUNC_0(VAR_0, VAR_4);
 FUNC_1(2);
 VAR_4[0] = (VAR_4[0] & 0x81) | (VAR_2 << 4) | 0x02;
 VAR_4[2] = 0;
 FUNC_0(VAR_0, VAR_4);
 FUNC_1(2);
 FUNC_2(VAR_0, 0x0a, 5);
}
