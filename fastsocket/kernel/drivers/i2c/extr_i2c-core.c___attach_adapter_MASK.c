
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_driver {int (* attach_adapter ) (struct i2c_adapter*) ;} ;
struct i2c_adapter {int dummy; } ;
struct device {int * type; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_adapter*,struct i2c_driver*) ;
 int FUNC_1 (struct i2c_adapter*) ;
 struct i2c_adapter* FUNC_2 (struct device*) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_1, void *VAR_2)
{
 struct i2c_adapter *VAR_3;
 struct i2c_driver *VAR_4 = VAR_2;

 if (VAR_1->type != &VAR_0)
  return 0;
 VAR_3 = FUNC_2(VAR_1);

 FUNC_0(VAR_3, VAR_4);


 if (VAR_4->attach_adapter)
  VAR_4->attach_adapter(VAR_3);

 return 0;
}
