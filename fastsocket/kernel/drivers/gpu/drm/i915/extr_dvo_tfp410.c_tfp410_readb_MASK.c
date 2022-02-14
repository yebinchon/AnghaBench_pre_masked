
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u8 ;
struct tfp410_priv {int quiet; } ;
struct intel_dvo_device {int slave_addr; struct i2c_adapter* i2c_bus; struct tfp410_priv* dev_priv; } ;
struct i2c_msg {int len; int* buf; int flags; int addr; } ;
struct i2c_adapter {int name; } ;


 int FUNC_0 (char*,int,int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct i2c_adapter*,struct i2c_msg*,int) ;

__attribute__((used)) static bool FUNC_2(struct intel_dvo_device *VAR_1, int VAR_2, uint8_t *VAR_3)
{
 struct tfp410_priv *VAR_4 = VAR_1->dev_priv;
 struct i2c_adapter *VAR_5 = VAR_1->i2c_bus;
 u8 VAR_6[2];
 u8 VAR_7[2];

 struct i2c_msg VAR_8[] = {
  {
   .addr = VAR_1->slave_addr,
   .flags = 0,
   .len = 1,
   .buf = VAR_6,
  },
  {
   .addr = VAR_1->slave_addr,
   .flags = VAR_0,
   .len = 1,
   .buf = VAR_7,
  }
 };

 VAR_6[0] = VAR_2;
 VAR_6[1] = 0;

 if (FUNC_1(VAR_5, VAR_8, 2) == 2) {
  *VAR_3 = VAR_7[0];
  return 1;
 };

 if (!VAR_4->quiet) {
  FUNC_0("Unable to read register 0x%02x from %s:%02x.\n",
     VAR_2, VAR_5->name, VAR_1->slave_addr);
 }
 return 0;
}
