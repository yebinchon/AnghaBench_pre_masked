
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_driver {int (* attach_adapter ) (struct i2c_adapter*) ;} ;
struct i2c_adapter {int dummy; } ;
struct device_driver {int dummy; } ;


 int FUNC_0 (struct i2c_adapter*,struct i2c_driver*) ;
 int FUNC_1 (struct i2c_adapter*) ;
 struct i2c_driver* FUNC_2 (struct device_driver*) ;

__attribute__((used)) static int FUNC_3(struct device_driver *VAR_0, void *VAR_1)
{
 struct i2c_driver *VAR_2 = FUNC_2(VAR_0);
 struct i2c_adapter *VAR_3 = VAR_1;


 FUNC_0(VAR_3, VAR_2);


 if (VAR_2->attach_adapter) {

  VAR_2->attach_adapter(VAR_3);
 }
 return 0;
}
