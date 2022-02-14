
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct sd {int i2c_addr; int hstart; int vstart; int sensor; } ;
struct gspca_dev {int ctrl_dis; } ;
struct TYPE_5__ {int reg; int val; } ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct gspca_dev*,int,int*) ;
 scalar_t__ FUNC_3 (struct gspca_dev*,int,int) ;
 int FUNC_4 (char*) ;
 TYPE_1__* VAR_7 ;
 TYPE_1__* VAR_8 ;
 TYPE_1__* VAR_9 ;

__attribute__((used)) static int FUNC_5(struct gspca_dev *VAR_10)
{
 struct sd *VAR_11 = (struct sd *) VAR_10;
 int VAR_12;
 u16 VAR_13;
 int VAR_14;

 VAR_11->i2c_addr = 0x5d;
 VAR_14 = FUNC_2(VAR_10, 0xff, &VAR_13);
 if ((VAR_14 == 0) && (VAR_13 == 0x8243)) {
  for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_7); VAR_12++) {
   if (FUNC_3(VAR_10, VAR_7[VAR_12].reg,
     VAR_7[VAR_12].val) < 0) {
    FUNC_1("MT9V011 sensor initialization failed");
    return -VAR_1;
   }
  }
  VAR_11->hstart = 2;
  VAR_11->vstart = 2;
  VAR_11->sensor = VAR_4;
  FUNC_4("MT9V011 sensor detected");
  return 0;
 }

 VAR_11->i2c_addr = 0x5c;
 FUNC_3(VAR_10, 0x01, 0x0004);
 VAR_14 = FUNC_2(VAR_10, 0xff, &VAR_13);
 if ((VAR_14 == 0) && (VAR_13 == 0x823a)) {
  for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_8); VAR_12++) {
   if (FUNC_3(VAR_10, VAR_8[VAR_12].reg,
     VAR_8[VAR_12].val) < 0) {
    FUNC_1("MT9V111 sensor initialization failed");
    return -VAR_1;
   }
  }
  VAR_10->ctrl_dis = (1 << VAR_2)
     | (1 << VAR_0)
     | (1 << VAR_3);
  VAR_11->hstart = 2;
  VAR_11->vstart = 2;
  VAR_11->sensor = VAR_5;
  FUNC_4("MT9V111 sensor detected");
  return 0;
 }

 VAR_11->i2c_addr = 0x5d;
 VAR_14 = FUNC_3(VAR_10, 0xf0, 0x0000);
 if (VAR_14 < 0) {
  VAR_11->i2c_addr = 0x48;
  FUNC_3(VAR_10, 0xf0, 0x0000);
 }
 VAR_14 = FUNC_2(VAR_10, 0x00, &VAR_13);
 if ((VAR_14 == 0) && (VAR_13 == 0x1229)) {
  for (VAR_12 = 0; VAR_12 < FUNC_0(VAR_9); VAR_12++) {
   if (FUNC_3(VAR_10, VAR_9[VAR_12].reg,
     VAR_9[VAR_12].val) < 0) {
    FUNC_1("MT9V112 sensor initialization failed");
    return -VAR_1;
   }
  }
  VAR_11->hstart = 6;
  VAR_11->vstart = 2;
  VAR_11->sensor = VAR_6;
  FUNC_4("MT9V112 sensor detected");
  return 0;
 }

 return -VAR_1;
}
