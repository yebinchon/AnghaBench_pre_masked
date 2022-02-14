
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_driver {scalar_t__ id_table; } ;
struct i2c_client {int dummy; } ;
struct device_driver {int dummy; } ;
struct device {int dummy; } ;


 int * FUNC_0 (scalar_t__,struct i2c_client*) ;
 struct i2c_client* FUNC_1 (struct device*) ;
 struct i2c_driver* FUNC_2 (struct device_driver*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, struct device_driver *VAR_1)
{
 struct i2c_client *VAR_2 = FUNC_1(VAR_0);
 struct i2c_driver *VAR_3;

 if (!VAR_2)
  return 0;

 VAR_3 = FUNC_2(VAR_1);

 if (VAR_3->id_table)
  return FUNC_0(VAR_3->id_table, VAR_2) != ((void*)0);

 return 0;
}
