
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7462_data {int dummy; } ;
typedef long ssize_t ;


 long VAR_0 ;
 long FUNC_0 (long) ;
 struct adt7462_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,struct adt7462_data*,int ,long) ;
 scalar_t__ FUNC_3 (char const*,int,long*) ;
 struct i2c_client* FUNC_4 (struct device*) ;
 struct sensor_device_attribute* FUNC_5 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
     struct device_attribute *VAR_2,
     const char *VAR_3,
     size_t VAR_4)
{
 struct sensor_device_attribute *VAR_5 = FUNC_5(VAR_2);
 struct i2c_client *VAR_6 = FUNC_4(VAR_1);
 struct adt7462_data *VAR_7 = FUNC_1(VAR_6);
 long VAR_8;

 if (FUNC_3(VAR_3, 10, &VAR_8))
  return -VAR_0;

 VAR_8 = FUNC_0(VAR_8);
 if (VAR_8 < 0)
  return VAR_8;

 FUNC_2(VAR_6, VAR_7, VAR_5->index, VAR_8);

 return VAR_4;
}
