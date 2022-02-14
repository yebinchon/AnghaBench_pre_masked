
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct w83792d_data {int* pwm; int update_lock; } ;
struct sensor_device_attribute {int index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int * VAR_1 ;
 struct w83792d_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*,int *,int) ;
 struct i2c_client* FUNC_4 (struct device*) ;
 struct sensor_device_attribute* FUNC_5 (struct device_attribute*) ;
 int FUNC_6 (struct i2c_client*,int ) ;
 int FUNC_7 (struct i2c_client*,int ,int) ;

__attribute__((used)) static ssize_t
FUNC_8(struct device *VAR_2, struct device_attribute *VAR_3,
   const char *VAR_4, size_t VAR_5)
{
 struct sensor_device_attribute *VAR_6 = FUNC_5(VAR_3);
 int VAR_7 = VAR_6->index;
 struct i2c_client *VAR_8 = FUNC_4(VAR_2);
 struct w83792d_data *VAR_9 = FUNC_0(VAR_8);
 u32 VAR_10;

 VAR_10 = FUNC_3(VAR_4, ((void*)0), 10);
 if (VAR_10 != 0 && VAR_10 != 1)
  return -VAR_0;

 FUNC_1(&VAR_9->update_lock);
 VAR_9->pwm[VAR_7] = FUNC_6(VAR_8, VAR_1[VAR_7]);
 if (VAR_10) {
  VAR_9->pwm[VAR_7] |= 0x80;
 } else {
  VAR_9->pwm[VAR_7] &= 0x7f;
 }
 FUNC_7(VAR_8, VAR_1[VAR_7], VAR_9->pwm[VAR_7]);
 FUNC_2(&VAR_9->update_lock);

 return VAR_5;
}
