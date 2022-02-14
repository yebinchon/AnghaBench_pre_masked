
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmac_i2c_bus {struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;


 int FUNC_0 (int) ;

void FUNC_1(struct pmac_i2c_bus *VAR_0,
        struct i2c_adapter *VAR_1)
{
 FUNC_0(VAR_0->adapter != VAR_1);
 VAR_0->adapter = ((void*)0);
}
