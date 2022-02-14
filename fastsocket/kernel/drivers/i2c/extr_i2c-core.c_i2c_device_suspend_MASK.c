
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_driver {int (* suspend ) (struct i2c_client*,int ) ;} ;
struct i2c_client {int dummy; } ;
struct device {int driver; } ;
typedef int pm_message_t ;


 struct i2c_client* FUNC_0 (struct device*) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 struct i2c_driver* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0, pm_message_t VAR_1)
{
 struct i2c_client *VAR_2 = FUNC_0(VAR_0);
 struct i2c_driver *VAR_3;

 if (!VAR_2 || !VAR_0->driver)
  return 0;
 VAR_3 = FUNC_2(VAR_0->driver);
 if (!VAR_3->suspend)
  return 0;
 return VAR_3->suspend(VAR_2, VAR_1);
}
