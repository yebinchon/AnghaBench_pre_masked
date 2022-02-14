
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int i2c_addr; int flags; int sensor; } ;
struct gspca_dev {int dummy; } ;


 int FUNC_0 (int**) ;
 int VAR_0 ;
 int VAR_1 ;
 int** VAR_2 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct gspca_dev*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct gspca_dev*) ;
 int FUNC_5 (struct gspca_dev*) ;
 int FUNC_6 (struct gspca_dev*) ;
 int FUNC_7 (struct gspca_dev*) ;
 int FUNC_8 (struct gspca_dev*) ;
 int FUNC_9 (struct gspca_dev*) ;
 int FUNC_10 (struct gspca_dev*) ;
 int FUNC_11 (struct gspca_dev*) ;
 scalar_t__ FUNC_12 (struct gspca_dev*,int,int*,int) ;
 int FUNC_13 (struct gspca_dev*,int,int) ;
 int FUNC_14 (struct gspca_dev*) ;

__attribute__((used)) static int FUNC_15(struct gspca_dev *VAR_3)
{
 struct sd *VAR_4 = (struct sd *) VAR_3;
 int VAR_5;
 u8 VAR_6;
 u8 VAR_7[9] =
  {0x80, VAR_4->i2c_addr, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03};

 for (VAR_5 = 0; VAR_5 < FUNC_0(VAR_2); VAR_5++) {
  VAR_6 = VAR_2[VAR_5][1];
  if (FUNC_12(VAR_3, VAR_2[VAR_5][0], &VAR_6, 1) < 0) {
   FUNC_1("Device initialization failed");
   return -VAR_0;
  }
 }

 if (VAR_4->flags & VAR_1)
  FUNC_13(VAR_3, 0x1006, 0x00);
 else
  FUNC_13(VAR_3, 0x1006, 0x20);

 if (FUNC_12(VAR_3, 0x10c0, VAR_7, 9) < 0) {
  FUNC_1("Device initialization failed");
  return -VAR_0;
 }

 switch (VAR_4->sensor) {
 case 130:
  if (FUNC_10(VAR_3) < 0)
   return -VAR_0;
  FUNC_3("OV9650 sensor detected");
  break;
 case 129:
  if (FUNC_11(VAR_3) < 0)
   return -VAR_0;
  FUNC_3("OV9655 sensor detected");
  break;
 case 128:
  if (FUNC_14(VAR_3) < 0)
   return -VAR_0;
  FUNC_3("SOI968 sensor detected");
  break;
 case 132:
  if (FUNC_8(VAR_3) < 0)
   return -VAR_0;
  FUNC_3("OV7660 sensor detected");
  break;
 case 131:
  if (FUNC_9(VAR_3) < 0)
   return -VAR_0;
  FUNC_3("OV7670 sensor detected");
  break;
 case 133:
  if (FUNC_7(VAR_3) < 0)
   return -VAR_0;
  break;
 case 135:
  if (FUNC_5(VAR_3) < 0)
   return -VAR_0;
  FUNC_3("MT9M111 sensor detected");
  break;
 case 134:
  if (FUNC_6(VAR_3) < 0)
   return -VAR_0;
  FUNC_3("MT9M112 sensor detected");
  break;
 case 136:
  if (FUNC_4(VAR_3) < 0)
   return -VAR_0;
  break;
 case 137:
  if (FUNC_2(VAR_3) < 0)
   return -VAR_0;
  FUNC_3("HV7131R sensor detected");
  break;
 default:
  FUNC_3("Unsupported Sensor");
  return -VAR_0;
 }

 return 0;
}
