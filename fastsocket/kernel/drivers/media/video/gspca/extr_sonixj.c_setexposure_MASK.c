
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct sd {int sensor; } ;
struct gspca_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int) ;







 int FUNC_1 (struct gspca_dev*,int,int) ;
 int FUNC_2 (struct gspca_dev*,int const*) ;
 int FUNC_3 (struct gspca_dev*,int,int) ;

__attribute__((used)) static u32 FUNC_4(struct gspca_dev *VAR_1,
   u32 VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_1;

 switch (VAR_3->sensor) {
 case 134: {
  int VAR_4, VAR_5;


  VAR_4 = 19 + VAR_2 * 25 / 256;
  FUNC_1(VAR_1, 0x68, VAR_4);
  VAR_4 -= 12;
  VAR_5 = VAR_4 * VAR_4 * 4;
  FUNC_1(VAR_1, 0x03, VAR_5 >> 8);
  FUNC_1(VAR_1, 0x04, VAR_5);
  break;
     }
 case 133: {
  u8 VAR_6[] =
   { 0xc1, 0x11, 0x25, 0x00, 0x00, 0x00, 0x00, 0x16 };

  VAR_6[3] = VAR_2 >> 16;
  VAR_6[4] = VAR_2 >> 8;
  VAR_6[5] = VAR_2;
  FUNC_2(VAR_1, VAR_6);
  break;
     }
 case 132:
 case 131: {
  u8 VAR_7[] =
   { 0xb1, 0x5d, 0x09, 0x00, 0x00, 0x00, 0x00, 0x16 };
  static const u8 VAR_8[] =
   { 0xb1, 0x5d, 0x07, 0x00, 0x03, 0x00, 0x00, 0x10 };
  static const u8 VAR_9[] =
   { 0xb1, 0x5d, 0x07, 0x00, 0x02, 0x00, 0x00, 0x10 };

  if (VAR_2 > 0x0635)
   VAR_2 = 0x0635;
  else if (VAR_2 < 0x0001)
   VAR_2 = 0x0001;
  VAR_7[3] = VAR_2 >> 8;
  VAR_7[4] = VAR_2;
  FUNC_2(VAR_1, VAR_7);
  FUNC_2(VAR_1, VAR_8);
  FUNC_2(VAR_1, VAR_9);
  break;
     }
 case 130: {
  u8 VAR_10[] =
   { 0xa1, 0x21, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x10 };
  u8 VAR_11[] =
   { 0xa1, 0x21, 0x10, 0x00, 0x00, 0x00, 0x00, 0x10 };
  static const u8 VAR_12[] =
   { 0xa1, 0x21, 0x00, 0x10, 0x00, 0x00, 0x00, 0x1d };

  if (VAR_2 > 0x1fff)
   VAR_2 = 0x1fff;
  else if (VAR_2 < 0x0001)
   VAR_2 = 0x0001;
  VAR_10[3] = (VAR_2 & 0x03fc) >> 2;
  FUNC_2(VAR_1, VAR_10);
  VAR_11[3] = ((VAR_2 & 0x1c00) >> 10)
    | ((VAR_2 & 0x0003) << 4);
  FUNC_2(VAR_1, VAR_11);
  FUNC_2(VAR_1, VAR_12);
  FUNC_0(VAR_0, "set exposure %d",
   ((VAR_11[3] & 0x07) << 10)
   | (VAR_10[3] << 2)
   | ((VAR_11[3] & 0x30) >> 4));
  break;
     }
 case 129: {
  u8 VAR_13[] =
   { 0xb1, 0x5c, 0x09, 0x00, 0x00, 0x00, 0x00, 0x10 };

  if (VAR_2 > 0x0280)
   VAR_2 = 0x0280;
  else if (VAR_2 < 0x0040)
   VAR_2 = 0x0040;
  VAR_13[3] = VAR_2 >> 8;
  VAR_13[4] = VAR_2;
  FUNC_2(VAR_1, VAR_13);
  break;
     }
 case 128: {
  u8 VAR_14[] =
   { 0xa0, 0x34, 0xe5, 0x00, 0x00, 0x00, 0x00, 0x10 };


  if (VAR_2 > 0x03ff)
   VAR_2 = 0x03ff;
   if (VAR_2 < 0x0001)
   VAR_2 = 0x0001;
  VAR_14[3] = VAR_2 >> 2;
  FUNC_2(VAR_1, VAR_14);
  FUNC_3(VAR_1, 0x96, VAR_2 >> 5);
  FUNC_0(VAR_0, "set exposure %d", VAR_14[3]);
  break;
     }
 }
 return VAR_2;
}
