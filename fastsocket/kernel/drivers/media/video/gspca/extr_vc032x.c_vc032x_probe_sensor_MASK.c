
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct sensor_info {int m1; int m2; int I2cAdd; int op; int IdAdd; int VpId; int sensorId; } ;
struct sd {int flags; scalar_t__ bridge; } ;
struct gspca_dev {int* usb_buf; } ;


 int FUNC_0 (struct sensor_info*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int,char*,int,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (struct gspca_dev*,int) ;
 int FUNC_3 (struct gspca_dev*,int,int,int) ;
 int FUNC_4 (struct gspca_dev*,int,int,int) ;
 struct sensor_info* VAR_7 ;
 struct sensor_info* VAR_8 ;

__attribute__((used)) static int FUNC_5(struct gspca_dev *VAR_9)
{
 struct sd *VAR_10 = (struct sd *) VAR_9;
 int VAR_11, VAR_12;
 u16 VAR_13;
 const struct sensor_info *VAR_14;


 if (VAR_10->flags & VAR_3) {
  FUNC_4(VAR_9, 0xa0, 0x01, 0xb301);
  FUNC_4(VAR_9, 0x89, 0xf0ff, 0xffff);

 }

 FUNC_3(VAR_9, 0xa1, 0xbfcf, 1);
 FUNC_1(VAR_2, "vc032%d check sensor header %02x",
  VAR_10->bridge == VAR_0 ? 1 : 3, VAR_9->usb_buf[0]);
 if (VAR_10->bridge == VAR_0) {
  VAR_14 = VAR_7;
  VAR_12 = FUNC_0(VAR_7);
 } else {
  VAR_14 = VAR_8;
  VAR_12 = FUNC_0(VAR_8);
 }
 for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11++) {
  FUNC_4(VAR_9, 0xa0, 0x02, 0xb334);
  FUNC_4(VAR_9, 0xa0, VAR_14->m1, 0xb300);
  FUNC_4(VAR_9, 0xa0, VAR_14->m2, 0xb300);
  FUNC_4(VAR_9, 0xa0, 0x01, 0xb308);
  FUNC_4(VAR_9, 0xa0, 0x0c, 0xb309);
  FUNC_4(VAR_9, 0xa0, VAR_14->I2cAdd, 0xb335);
  FUNC_4(VAR_9, 0xa0, VAR_14->op, 0xb301);
  VAR_13 = FUNC_2(VAR_9, VAR_14->IdAdd);
  if (VAR_13 == 0 && VAR_14->IdAdd == 0x82)
   VAR_13 = FUNC_2(VAR_9, 0x83);
  if (VAR_13 != 0) {
   FUNC_1(VAR_1|VAR_2, "Sensor ID %04x (%d)",
    VAR_13, VAR_11);
   if (VAR_13 == VAR_14->VpId)
    return VAR_14->sensorId;

   switch (VAR_13) {
   case 0x3130:
    return VAR_6;
   case 0x7673:
    return VAR_5;
   case 0x8243:
    return VAR_4;
   }
  }
  VAR_14++;
 }
 return -1;
}
