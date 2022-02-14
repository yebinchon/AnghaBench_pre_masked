
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sensor_s {int i2c_addr; int i2c_dum; } ;
struct sd {int expo; int sensor; int gain; } ;
struct gspca_dev {int dummy; } ;




 int VAR_0 ;
 int FUNC_0 (struct gspca_dev*,int,int ,int*,int) ;
 struct sensor_s* VAR_1 ;

__attribute__((used)) static void FUNC_1(struct gspca_dev *VAR_2)
{
 struct sd *VAR_3 = (struct sd *) VAR_2;
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8;
 const struct sensor_s *VAR_9;
 u16 VAR_10;
 u8 VAR_11[15];

 VAR_5 = VAR_3->expo;
 VAR_4 = 0;
 VAR_10 = VAR_0;

 switch (VAR_3->sensor) {
 case 129:
 case 128:
  VAR_8 = VAR_3->sensor == 129 ? 0x210 : 0x26f;
  if (VAR_5 >= VAR_8) {
   VAR_6 = 0;
   VAR_7 = VAR_5;
  } else {
   VAR_6 = VAR_8 - VAR_5;
   VAR_7 = VAR_8;
  }
  VAR_11[VAR_4++] = VAR_6 >> 8;
  VAR_11[VAR_4++] = VAR_6;
  VAR_11[VAR_4++] = VAR_7 >> 8;
  VAR_11[VAR_4++] = VAR_7;
  VAR_11[VAR_4++] = VAR_3->gain;
  break;
 default:


  VAR_10 |= 0x0100;
  VAR_9 = &VAR_1[VAR_3->sensor];
  VAR_11[VAR_4++] = VAR_9->i2c_addr;
  VAR_11[VAR_4++] = 0x08;
  VAR_11[VAR_4++] = 0x09;
  VAR_11[VAR_4++] = VAR_5 >> 8;
  VAR_11[VAR_4++] = VAR_9->i2c_dum;
  VAR_11[VAR_4++] = VAR_5;
  VAR_11[VAR_4++] = 0x35;
  VAR_11[VAR_4++] = 0x00;
  VAR_11[VAR_4++] = VAR_9->i2c_dum;
  VAR_11[VAR_4++] = 0x80 + VAR_3->gain / 2;
  VAR_11[VAR_4++] = 0x00;
  VAR_11[VAR_4++] = 0x00;
  VAR_11[VAR_4++] = 0x00;
  VAR_11[VAR_4++] = 0x00;
  VAR_11[VAR_4++] = 0x83;
  break;
 }
 FUNC_0(VAR_2, VAR_10, 0, VAR_11, VAR_4);
}
