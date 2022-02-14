
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int*) ;
 int FUNC_1 (char*,char*,char*) ;
 struct i2c_client* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2,
       char *VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_2(VAR_1);
 u8 VAR_5;
 int VAR_6;

 VAR_6 = FUNC_0(VAR_4, &VAR_5);
 if (VAR_6)
  return VAR_6;

 return FUNC_1(VAR_3, "%s\n", (VAR_5 & VAR_0)
         ? "disabled" : "enabled");
}
