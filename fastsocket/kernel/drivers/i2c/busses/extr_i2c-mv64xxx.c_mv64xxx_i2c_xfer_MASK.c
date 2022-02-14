
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv64xxx_i2c_data {int dummy; } ;
struct i2c_msg {int dummy; } ;
struct i2c_adapter {int dummy; } ;


 struct mv64xxx_i2c_data* FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (struct mv64xxx_i2c_data*,struct i2c_msg*) ;

__attribute__((used)) static int
FUNC_2(struct i2c_adapter *VAR_0, struct i2c_msg VAR_1[], int VAR_2)
{
 struct mv64xxx_i2c_data *VAR_3 = FUNC_0(VAR_0);
 int VAR_4, VAR_5;

 for (VAR_4=0; VAR_4<VAR_2; VAR_4++)
  if ((VAR_5 = FUNC_1(VAR_3, &VAR_1[VAR_4])) < 0)
   return VAR_5;

 return VAR_2;
}
