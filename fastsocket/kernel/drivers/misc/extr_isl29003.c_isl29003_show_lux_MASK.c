
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (char*,char*,int) ;
 struct i2c_client* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
     struct device_attribute *VAR_2, char *VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_3(VAR_1);


 if (!FUNC_1(VAR_4))
  return -VAR_0;

 return FUNC_2(VAR_3, "%d\n", FUNC_0(VAR_4));
}
