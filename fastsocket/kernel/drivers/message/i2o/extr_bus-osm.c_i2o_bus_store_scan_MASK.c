
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2o_device {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (struct i2o_device*) ;
 int FUNC_1 (char*,int) ;
 struct i2o_device* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
      struct device_attribute *VAR_1,
      const char *VAR_2, size_t VAR_3)
{
 struct i2o_device *VAR_4 = FUNC_2(VAR_0);
 int VAR_5;

 if ((VAR_5 = FUNC_0(VAR_4)))
  FUNC_1("bus scan failed %d\n", VAR_5);

 return VAR_3;
}
