
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;
struct TYPE_2__ {int demod_address; } ;
struct ec100_state {int i2c; TYPE_1__ config; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;
 int FUNC_1 (char*,int ) ;

__attribute__((used)) static int FUNC_2(struct ec100_state *VAR_2, u8 VAR_3, u8 *VAR_4)
{
 struct i2c_msg VAR_5[2] = {
  {
   .addr = VAR_2->config.demod_address,
   .flags = 0,
   .len = 1,
   .buf = &VAR_3
  }, {
   .addr = VAR_2->config.demod_address,
   .flags = VAR_1,
   .len = 1,
   .buf = VAR_4
  }
 };

 if (FUNC_0(VAR_2->i2c, VAR_5, 2) != 2) {
  FUNC_1("I2C read failed reg:%02x", VAR_3);
  return -VAR_0;
 }
 return 0;
}
