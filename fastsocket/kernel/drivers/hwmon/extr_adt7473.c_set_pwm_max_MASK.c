
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {size_t index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7473_data {long* pwm_max; int lock; } ;
typedef size_t ssize_t ;


 int FUNC_0 (size_t) ;
 size_t VAR_0 ;
 long FUNC_1 (long,int ,int) ;
 struct adt7473_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*,int ,long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (char const*,int,long*) ;
 struct i2c_client* FUNC_7 (struct device*) ;
 struct sensor_device_attribute* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_1,
      struct device_attribute *VAR_2,
      const char *VAR_3,
      size_t VAR_4)
{
 struct sensor_device_attribute *VAR_5 = FUNC_8(VAR_2);
 struct i2c_client *VAR_6 = FUNC_7(VAR_1);
 struct adt7473_data *VAR_7 = FUNC_2(VAR_6);
 long VAR_8;

 if (FUNC_6(VAR_3, 10, &VAR_8))
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_8, 0, 255);

 FUNC_4(&VAR_7->lock);
 VAR_7->pwm_max[VAR_5->index] = VAR_8;
 FUNC_3(VAR_6, FUNC_0(VAR_5->index),
      VAR_8);
 FUNC_5(&VAR_7->lock);

 return VAR_4;
}
