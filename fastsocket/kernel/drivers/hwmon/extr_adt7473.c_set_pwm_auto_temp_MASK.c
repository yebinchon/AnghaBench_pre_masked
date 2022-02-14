
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef long u8 ;
struct sensor_device_attribute {size_t index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7473_data {long* pwm_behavior; int lock; } ;
typedef size_t ssize_t ;


 long VAR_0 ;
 long VAR_1 ;
 int FUNC_0 (size_t) ;
 size_t VAR_2 ;
 struct adt7473_data* FUNC_1 (struct i2c_client*) ;
 long FUNC_2 (struct i2c_client*,int ) ;
 int FUNC_3 (struct i2c_client*,int ,long) ;
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
 u8 VAR_7;
 struct sensor_device_attribute *VAR_8 = FUNC_8(VAR_4);
 struct i2c_client *VAR_9 = FUNC_7(VAR_3);
 struct adt7473_data *VAR_10 = FUNC_1(VAR_9);
 long VAR_11;

 if (FUNC_6(VAR_5, 10, &VAR_11))
  return -VAR_2;

 switch (VAR_11) {
 case 1:
 case 2:
 case 6:
 case 7:
  VAR_11--;
  break;
 case 0:
  VAR_11 = 4;
  break;
 default:
  return -VAR_2;
 }

 FUNC_4(&VAR_10->lock);
 VAR_7 = FUNC_2(VAR_9,
           FUNC_0(VAR_8->index));
 VAR_7 = (VAR_11 << VAR_1) |
       (VAR_7 & ~VAR_0);
 FUNC_3(VAR_9, FUNC_0(VAR_8->index),
      VAR_7);
 VAR_10->pwm_behavior[VAR_8->index] = VAR_7;
 FUNC_5(&VAR_10->lock);

 return VAR_6;
}
