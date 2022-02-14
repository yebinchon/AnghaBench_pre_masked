
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {size_t index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7462_data {int* pwm_tmin; int* pwm_trange; int lock; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (size_t) ;
 size_t VAR_2 ;
 int FUNC_1 (long) ;
 struct adt7462_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (char const*,int,long*) ;
 struct i2c_client* FUNC_7 (struct device*) ;
 struct sensor_device_attribute* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_3,
       struct device_attribute *VAR_4,
       const char *VAR_5,
       size_t VAR_6)
{
 int VAR_7;
 struct sensor_device_attribute *VAR_8 = FUNC_8(VAR_4);
 struct i2c_client *VAR_9 = FUNC_7(VAR_3);
 struct adt7462_data *VAR_10 = FUNC_2(VAR_9);
 int VAR_11, VAR_12;
 long VAR_13;

 if (FUNC_6(VAR_5, 10, &VAR_13))
  return -VAR_2;


 VAR_11 = (VAR_10->pwm_tmin[VAR_8->index] - 64) * 1000;
 VAR_12 = FUNC_1(VAR_13 - VAR_11);

 if (VAR_12 < 0)
  return -VAR_2;

 VAR_7 = VAR_12 << VAR_1;
 VAR_7 |= VAR_10->pwm_trange[VAR_8->index] & VAR_0;

 FUNC_4(&VAR_10->lock);
 VAR_10->pwm_trange[VAR_8->index] = VAR_7;
 FUNC_3(VAR_9, FUNC_0(VAR_8->index),
      VAR_7);
 FUNC_5(&VAR_10->lock);

 return VAR_6;
}
