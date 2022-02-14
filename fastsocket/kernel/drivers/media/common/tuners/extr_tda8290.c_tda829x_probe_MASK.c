
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tuner_i2c_props {int addr; struct i2c_adapter* adap; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct tuner_i2c_props*) ;
 scalar_t__ FUNC_1 (struct tuner_i2c_props*) ;
 int FUNC_2 (struct tuner_i2c_props*,unsigned char*,int) ;
 int FUNC_3 (struct tuner_i2c_props*,unsigned char*,int,unsigned char*,int) ;

int FUNC_4(struct i2c_adapter *VAR_2, u8 VAR_3)
{
 struct tuner_i2c_props VAR_4 = {
  .adap = VAR_2,
  .addr = VAR_3,
 };

 unsigned char VAR_5[] = { 0x00, 0x00 };
 unsigned char VAR_6[] = { 0x01, 0x02 };
 unsigned char VAR_7[] = { 0x01, 0x04 };
 unsigned char VAR_8[] = { 0x00, 0xd6, 0x30 };
 unsigned char VAR_9 = 0x07;
 unsigned char VAR_10;

 unsigned char VAR_11[8];
 int VAR_12;


 FUNC_3(&VAR_4,
     VAR_5, 1, VAR_11, 8);
 for (VAR_12 = 1; VAR_12 < 8; VAR_12++) {
  if (VAR_11[VAR_12] != VAR_11[0])
   break;
 }


 if (VAR_12 == 8)
  return -VAR_0;

 if ((FUNC_0(&VAR_4) == 0) ||
     (FUNC_1(&VAR_4) == 0))
  return 0;


 FUNC_2(&VAR_4, VAR_6, 2);
 FUNC_2(&VAR_4, VAR_5, 2);
 FUNC_3(&VAR_4, &VAR_9, 1, &VAR_10, 1);
 if (VAR_10 == 0) {
  FUNC_2(&VAR_4, VAR_7, 2);
  FUNC_2(&VAR_4, VAR_5, 2);
  FUNC_3(&VAR_4,
      &VAR_9, 1, &VAR_10, 1);
  if (VAR_10 == 0x7b) {
   return 0;
  }
 }
 FUNC_2(&VAR_4, VAR_8, 3);
 return -VAR_0;
}
