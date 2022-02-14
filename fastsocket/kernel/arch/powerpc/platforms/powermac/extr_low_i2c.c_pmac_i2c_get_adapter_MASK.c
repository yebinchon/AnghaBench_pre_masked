
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmac_i2c_bus {struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;



struct i2c_adapter *FUNC_0(struct pmac_i2c_bus *VAR_0)
{
 return VAR_0->adapter;
}
