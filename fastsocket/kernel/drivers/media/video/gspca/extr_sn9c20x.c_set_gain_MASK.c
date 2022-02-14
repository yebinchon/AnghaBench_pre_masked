
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int i2c_addr; int sensor; size_t gain; } ;
struct gspca_dev {int dummy; } ;
 int* VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int*) ;
 int* VAR_1 ;
 int* VAR_2 ;
 int* VAR_3 ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_4)
{
 struct sd *VAR_5 = (struct sd *) VAR_4;
 u8 VAR_6[8] = {0x81, VAR_5->i2c_addr, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1d};
 switch (VAR_5->sensor) {
 case 132:
 case 131:
 case 128:
 case 129:
 case 130:
  VAR_6[0] |= (2 << 4);
  VAR_6[3] = VAR_3[VAR_5->gain];
  break;
 case 134:
  VAR_6[0] |= (3 << 4);
  VAR_6[2] = 0x35;
  VAR_6[3] = VAR_1[VAR_5->gain] >> 8;
  VAR_6[4] = VAR_1[VAR_5->gain] & 0xff;
  break;
 case 133:
  VAR_6[0] |= (3 << 4);
  VAR_6[2] = 0x2f;
  VAR_6[3] = VAR_1[VAR_5->gain] >> 8;
  VAR_6[4] = VAR_1[VAR_5->gain] & 0xff;
  break;
 case 135:
  VAR_6[0] |= (3 << 4);
  VAR_6[2] = 0x2f;
  VAR_6[3] = VAR_2[VAR_5->gain] >> 8;
  VAR_6[4] = VAR_2[VAR_5->gain] & 0xff;
  break;
 case 136:
  VAR_6[0] |= (2 << 4);
  VAR_6[2] = 0x30;
  VAR_6[3] = VAR_0[VAR_5->gain];
  break;
 default:
  return 0;
 }
 FUNC_0(VAR_4, VAR_6);
 return 0;
}
