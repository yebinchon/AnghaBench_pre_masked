
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct dme1737_data {int vrm; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct dme1737_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (char*,char*,int) ;
 struct i2c_client* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1,
   char *VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_2(VAR_0);
 struct dme1737_data *VAR_4 = FUNC_0(VAR_3);

 return FUNC_1(VAR_2, "%d\n", VAR_4->vrm);
}
