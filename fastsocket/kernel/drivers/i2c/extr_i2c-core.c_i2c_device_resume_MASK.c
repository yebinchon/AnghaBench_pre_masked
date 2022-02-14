
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_driver {int (* resume ) (struct i2c_client*) ;} ;
struct i2c_client {int dummy; } ;
struct device {int driver; } ;


 struct i2c_client* FUNC_0 (struct device*) ;
 int FUNC_1 (struct i2c_client*) ;
 struct i2c_driver* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct device *VAR_0)
{
 struct i2c_client *VAR_1 = FUNC_0(VAR_0);
 struct i2c_driver *VAR_2;

 if (!VAR_1 || !VAR_0->driver)
  return 0;
 VAR_2 = FUNC_2(VAR_0->driver);
 if (!VAR_2->resume)
  return 0;
 return VAR_2->resume(VAR_1);
}
