
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7462_data {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 struct adt7462_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (struct i2c_client*,struct adt7462_data*,int ,int) ;
 scalar_t__ FUNC_2 (char const*,int,long*) ;
 struct i2c_client* FUNC_3 (struct device*) ;
 struct sensor_device_attribute* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_1,
       struct device_attribute *VAR_2,
       const char *VAR_3,
       size_t VAR_4)
{
 struct sensor_device_attribute *VAR_5 = FUNC_4(VAR_2);
 struct i2c_client *VAR_6 = FUNC_3(VAR_1);
 struct adt7462_data *VAR_7 = FUNC_0(VAR_6);
 long VAR_8;

 if (FUNC_2(VAR_3, 10, &VAR_8))
  return -VAR_0;

 switch (VAR_8) {
 case 0:
  FUNC_1(VAR_6, VAR_7, VAR_5->index, 4);
  return VAR_4;
 case 1:
  FUNC_1(VAR_6, VAR_7, VAR_5->index, 7);
  return VAR_4;
 default:
  return -VAR_0;
 }
}
