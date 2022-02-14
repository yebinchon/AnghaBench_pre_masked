
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ns2501_priv {int quiet; } ;
struct intel_dvo_device {int slave_addr; struct i2c_adapter* i2c_bus; struct ns2501_priv* dev_priv; } ;
struct i2c_msg {int len; int* buf; int flags; int addr; } ;
struct i2c_adapter {int name; } ;


 int FUNC_0 (char*,int,int ,int ) ;
 int FUNC_1 (struct i2c_adapter*,struct i2c_msg*,int) ;

__attribute__((used)) static bool FUNC_2(struct intel_dvo_device *VAR_0, int VAR_1, uint8_t VAR_2)
{
 struct ns2501_priv *VAR_3 = VAR_0->dev_priv;
 struct i2c_adapter *VAR_4 = VAR_0->i2c_bus;
 uint8_t VAR_5[2];

 struct i2c_msg VAR_6 = {
  .addr = VAR_0->slave_addr,
  .flags = 0,
  .len = 2,
  .buf = VAR_5,
 };

 VAR_5[0] = VAR_1;
 VAR_5[1] = VAR_2;

 if (FUNC_1(VAR_4, &VAR_6, 1) == 1) {
  return 1;
 }

 if (!VAR_3->quiet) {
  FUNC_0("Unable to write register 0x%02x to %s:%d\n",
         VAR_1, VAR_4->name, VAR_0->slave_addr);
 }

 return 0;
}
