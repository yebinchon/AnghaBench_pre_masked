
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_msg {int addr; int* buf; int len; int flags; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct i2c_adapter*,struct i2c_msg*,int) ;

int FUNC_2(struct i2c_adapter *VAR_1)
{
 u8 VAR_2[2], VAR_3[2];
 struct i2c_msg VAR_4[2] = {
  { .addr = 18 >> 1, .flags = 0, .buf = VAR_2, .len = 2 },
  { .addr = 18 >> 1, .flags = VAR_0, .buf = VAR_3, .len = 2 },
 };

 VAR_2[0] = 0x03;
 VAR_2[1] = 0x00;

 if (FUNC_1(VAR_1, VAR_4, 2) == 2)
  if (VAR_3[0] == 0x01 && VAR_3[1] == 0xb3) {
   FUNC_0("-D-  DiB7000PC detected");
   return 1;
  }

 VAR_4[0].addr = VAR_4[1].addr = 0x40;

 if (FUNC_1(VAR_1, VAR_4, 2) == 2)
  if (VAR_3[0] == 0x01 && VAR_3[1] == 0xb3) {
   FUNC_0("-D-  DiB7000PC detected");
   return 1;
  }

 FUNC_0("-D-  DiB7000PC not detected");
 return 0;
}
