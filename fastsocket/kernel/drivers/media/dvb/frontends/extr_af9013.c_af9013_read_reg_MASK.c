
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct i2c_msg {int len; int* buf; int flags; int addr; } ;
struct TYPE_2__ {int demod_address; } ;
struct af9013_state {int i2c; TYPE_1__ config; } ;
typedef int obuf ;
typedef int ibuf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;
 int FUNC_1 (char*,int) ;

__attribute__((used)) static int FUNC_2(struct af9013_state *VAR_2, u16 VAR_3, u8 *VAR_4)
{
 u8 VAR_5[3] = { VAR_3 >> 8, VAR_3 & 0xff, 0 };
 u8 VAR_6[1];
 struct i2c_msg VAR_7[2] = {
  {
   .addr = VAR_2->config.demod_address,
   .flags = 0,
   .len = sizeof(VAR_5),
   .buf = VAR_5
  }, {
   .addr = VAR_2->config.demod_address,
   .flags = VAR_1,
   .len = sizeof(VAR_6),
   .buf = VAR_6
  }
 };

 if (FUNC_0(VAR_2->i2c, VAR_7, 2) != 2) {
  FUNC_1("I2C read failed reg:%04x", VAR_3);
  return -VAR_0;
 }
 *VAR_4 = VAR_6[0];
 return 0;
}
