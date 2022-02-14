
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
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;
 int FUNC_1 (int*,int*,int) ;
 int FUNC_2 (char*,int,int) ;

__attribute__((used)) static int FUNC_3(struct af9013_state *VAR_1, u8 VAR_2, u16 VAR_3,
 u8 *VAR_4, u8 VAR_5)
{
 u8 VAR_6[3+VAR_5];
 struct i2c_msg VAR_7 = {
  .addr = VAR_1->config.demod_address,
  .flags = 0,
  .len = sizeof(VAR_6),
  .buf = VAR_6 };

 VAR_6[0] = VAR_3 >> 8;
 VAR_6[1] = VAR_3 & 0xff;
 VAR_6[2] = VAR_2;
 FUNC_1(&VAR_6[3], VAR_4, VAR_5);

 if (FUNC_0(VAR_1->i2c, &VAR_7, 1) != 1) {
  FUNC_2("I2C write failed reg:%04x len:%d", VAR_3, VAR_5);
  return -VAR_0;
 }
 return 0;
}
