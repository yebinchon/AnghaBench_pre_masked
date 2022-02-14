
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcf8591_data {unsigned int aout; int control; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 struct pcf8591_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,int ,unsigned int) ;
 int FUNC_2 (char const*,int *,int) ;
 struct i2c_client* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 unsigned int VAR_5;
 struct i2c_client *VAR_6 = FUNC_3(VAR_1);
 struct pcf8591_data *VAR_7 = FUNC_0(VAR_6);
 if ((VAR_5 = (FUNC_2(VAR_3, ((void*)0), 10) + 5) / 10) <= 255) {
  VAR_7->aout = VAR_5;
  FUNC_1(VAR_6, VAR_7->control, VAR_7->aout);
  return VAR_4;
 }
 return -VAR_0;
}
