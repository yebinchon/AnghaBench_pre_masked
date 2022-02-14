
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int u8 ;
struct intel_dvo_device {int i2c_bus; int slave_addr; } ;
struct i2c_msg {int len; int * buf; int flags; int addr; } ;


 int FUNC_0 (int ,struct i2c_msg*,int) ;

__attribute__((used)) static bool FUNC_1(struct intel_dvo_device *VAR_0, u8 VAR_1, u8 VAR_2)
{
 uint8_t VAR_3[2] = { VAR_1, VAR_2 };
 struct i2c_msg VAR_4 = {
  .addr = VAR_0->slave_addr,
  .flags = 0,
  .len = 2,
  .buf = VAR_3,
 };
 return FUNC_0(VAR_0->i2c_bus, &VAR_4, 1) == 1;
}
