
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int i2c_addr; int sensor; int exposure; } ;
struct gspca_dev {int dummy; } ;
 int FUNC_0 (struct gspca_dev*,int*) ;

__attribute__((used)) static int FUNC_1(struct gspca_dev *VAR_0)
{
 struct sd *VAR_1 = (struct sd *) VAR_0;
 u8 VAR_2[8] = {0x81, VAR_1->i2c_addr, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1e};
 switch (VAR_1->sensor) {
 case 131:
 case 130:
 case 128:
 case 129:
  VAR_2[0] |= (3 << 4);
  VAR_2[2] = 0x2d;
  VAR_2[3] = VAR_1->exposure & 0xff;
  VAR_2[4] = VAR_1->exposure >> 8;
  break;
 case 134:
 case 132:
 case 133:
  VAR_2[0] |= (3 << 4);
  VAR_2[2] = 0x09;
  VAR_2[3] = VAR_1->exposure >> 8;
  VAR_2[4] = VAR_1->exposure & 0xff;
  break;
 case 135:
  VAR_2[0] |= (4 << 4);
  VAR_2[2] = 0x25;
  VAR_2[3] = (VAR_1->exposure >> 5) & 0xff;
  VAR_2[4] = (VAR_1->exposure << 3) & 0xff;
  VAR_2[5] = 0;
  break;
 default:
  return 0;
 }
 FUNC_0(VAR_0, VAR_2);
 return 0;
}
