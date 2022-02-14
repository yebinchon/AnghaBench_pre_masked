
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dev_released; } ;
struct device {int dummy; } ;


 int FUNC_0 (int *) ;
 struct i2c_adapter* FUNC_1 (struct device*) ;

__attribute__((used)) static void FUNC_2(struct device *VAR_0)
{
 struct i2c_adapter *VAR_1 = FUNC_1(VAR_0);
 FUNC_0(&VAR_1->dev_released);
}
