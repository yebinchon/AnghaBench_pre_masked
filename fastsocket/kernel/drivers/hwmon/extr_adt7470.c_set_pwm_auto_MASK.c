
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sensor_device_attribute {int index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7470_data {long* pwm_automatic; int lock; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 size_t VAR_2 ;
 struct adt7470_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (struct i2c_client*,int) ;
 int FUNC_3 (struct i2c_client*,int,int) ;
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
 struct sensor_device_attribute *VAR_7 = FUNC_8(VAR_4);
 struct i2c_client *VAR_8 = FUNC_7(VAR_3);
 struct adt7470_data *VAR_9 = FUNC_1(VAR_8);
 int VAR_10 = FUNC_0(VAR_7->index);
 int VAR_11;
 long VAR_12;
 u8 VAR_13;

 if (FUNC_6(VAR_5, 10, &VAR_12))
  return -VAR_2;

 if (VAR_7->index % 2)
  VAR_11 = VAR_1;
 else
  VAR_11 = VAR_0;

 if (VAR_12 != 2 && VAR_12 != 1)
  return -VAR_2;
 VAR_12--;

 FUNC_4(&VAR_9->lock);
 VAR_9->pwm_automatic[VAR_7->index] = VAR_12;
 VAR_13 = FUNC_2(VAR_8, VAR_10);
 if (VAR_12)
  VAR_13 |= VAR_11;
 else
  VAR_13 &= ~VAR_11;
 FUNC_3(VAR_8, VAR_10, VAR_13);
 FUNC_5(&VAR_9->lock);

 return VAR_6;
}
