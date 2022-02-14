
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_gmbus {int reg0; } ;
struct i2c_adapter {int dummy; } ;


 struct intel_gmbus* FUNC_0 (struct i2c_adapter*) ;

void FUNC_1(struct i2c_adapter *VAR_0, int VAR_1)
{
 struct intel_gmbus *VAR_2 = FUNC_0(VAR_0);

 VAR_2->reg0 = (VAR_2->reg0 & ~(0x3 << 8)) | VAR_1;
}
