
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct mc44s803_priv {int i2c; TYPE_1__* cfg; } ;
struct i2c_msg {int* buf; int len; int flags; int addr; } ;
struct TYPE_2__ {int i2c_address; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct i2c_msg*,int) ;
 int FUNC_1 (int ,char*) ;

__attribute__((used)) static int FUNC_2(struct mc44s803_priv *VAR_2, u32 VAR_3)
{
 u8 VAR_4[3];
 struct i2c_msg VAR_5 = {
  .addr = VAR_2->cfg->i2c_address, .flags = 0, .buf = VAR_4, .len = 3
 };

 VAR_4[0] = (VAR_3 & 0xff0000) >> 16;
 VAR_4[1] = (VAR_3 & 0xff00) >> 8;
 VAR_4[2] = (VAR_3 & 0xff);

 if (FUNC_0(VAR_2->i2c, &VAR_5, 1) != 1) {
  FUNC_1(VAR_1, "I2C write failed\n");
  return -VAR_0;
 }
 return 0;
}
