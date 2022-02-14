
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sensor_device_attribute {size_t index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7470_data {long* pwm_automatic; int lock; } ;
typedef long ssize_t ;


 int FUNC_0 (size_t) ;
 long VAR_0 ;
 long FUNC_1 (long) ;
 struct adt7470_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (struct i2c_client*,int) ;
 int FUNC_4 (struct i2c_client*,int,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (char const*,int,long*) ;
 struct i2c_client* FUNC_8 (struct device*) ;
 struct sensor_device_attribute* FUNC_9 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_10(struct device *VAR_1,
     struct device_attribute *VAR_2,
     const char *VAR_3,
     size_t VAR_4)
{
 struct sensor_device_attribute *VAR_5 = FUNC_9(VAR_2);
 struct i2c_client *VAR_6 = FUNC_8(VAR_1);
 struct adt7470_data *VAR_7 = FUNC_2(VAR_6);
 int VAR_8 = FUNC_0(VAR_5->index);
 long VAR_9;
 u8 VAR_10;

 if (FUNC_7(VAR_3, 10, &VAR_9))
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_9);
 if (VAR_9 < 0)
  return VAR_9;

 FUNC_5(&VAR_7->lock);
 VAR_7->pwm_automatic[VAR_5->index] = VAR_9;
 VAR_10 = FUNC_3(VAR_6, VAR_8);

 if (!(VAR_5->index % 2)) {
  VAR_10 &= 0xF;
  VAR_10 |= (VAR_9 << 4) & 0xF0;
 } else {
  VAR_10 &= 0xF0;
  VAR_10 |= VAR_9 & 0xF;
 }

 FUNC_4(VAR_6, VAR_8, VAR_10);
 FUNC_6(&VAR_7->lock);

 return VAR_4;
}
