
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
typedef int u8 ;
struct ivch_priv {int quiet; } ;
struct intel_dvo_device {int slave_addr; struct i2c_adapter* i2c_bus; struct ivch_priv* dev_priv; } ;
struct i2c_msg {int flags; int len; int* buf; int addr; } ;
struct i2c_adapter {int name; } ;


 int FUNC_0 (char*,int,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct i2c_adapter*,struct i2c_msg*,int) ;

__attribute__((used)) static bool FUNC_2(struct intel_dvo_device *VAR_2, int VAR_3, uint16_t *VAR_4)
{
 struct ivch_priv *VAR_5 = VAR_2->dev_priv;
 struct i2c_adapter *VAR_6 = VAR_2->i2c_bus;
 u8 VAR_7[1];
 u8 VAR_8[2];

 struct i2c_msg VAR_9[] = {
  {
   .addr = VAR_2->slave_addr,
   .flags = VAR_1,
   .len = 0,
  },
  {
   .addr = 0,
   .flags = VAR_0,
   .len = 1,
   .buf = VAR_7,
  },
  {
   .addr = VAR_2->slave_addr,
   .flags = VAR_1 | VAR_0,
   .len = 2,
   .buf = VAR_8,
  }
 };

 VAR_7[0] = VAR_3;

 if (FUNC_1(VAR_6, VAR_9, 3) == 3) {
  *VAR_4 = (VAR_8[1] << 8) | VAR_8[0];
  return 1;
 };

 if (!VAR_5->quiet) {
  FUNC_0("Unable to read register 0x%02x from "
    "%s:%02x.\n",
     VAR_3, VAR_6->name, VAR_2->slave_addr);
 }
 return 0;
}
