
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct w83791d_data {unsigned long* pwm_enable; int update_lock; } ;
struct sensor_device_attribute {int index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int * VAR_1 ;
 struct w83791d_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char const*,int,unsigned long*) ;
 struct i2c_client* FUNC_4 (struct device*) ;
 struct sensor_device_attribute* FUNC_5 (struct device_attribute*) ;
 size_t FUNC_6 (struct i2c_client*,int ) ;
 int FUNC_7 (struct i2c_client*,int ,size_t) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_2,
  struct device_attribute *VAR_3, const char *VAR_4, size_t VAR_5)
{
 struct sensor_device_attribute *VAR_6 = FUNC_5(VAR_3);
 struct i2c_client *VAR_7 = FUNC_4(VAR_2);
 struct w83791d_data *VAR_8 = FUNC_0(VAR_7);
 int VAR_9 = VAR_6->index;
 unsigned long VAR_10;
 u8 VAR_11;
 u8 VAR_12 = 0;
 u8 VAR_13 = 0;
 u8 VAR_14 = 0;

 int VAR_15 = FUNC_3(VAR_4, 10, &VAR_10);

 if (VAR_15 || VAR_10 < 1 || VAR_10 > 3)
  return -VAR_0;

 FUNC_1(&VAR_8->update_lock);
 VAR_8->pwm_enable[VAR_9] = VAR_10 - 1;
 switch (VAR_9) {
 case 0:
  VAR_12 = 0;
  VAR_13 = 2;
  VAR_14 = 0xf3;
  break;
 case 1:
  VAR_12 = 0;
  VAR_13 = 4;
  VAR_14 = 0xcf;
  break;
 case 2:
  VAR_12 = 1;
  VAR_13 = 2;
  VAR_14 = 0xf3;
  break;
 }

 VAR_11 = FUNC_6(VAR_7, VAR_1[VAR_12]);
 VAR_11 = (VAR_11 & VAR_14) |
     VAR_8->pwm_enable[VAR_9] << VAR_13;

 FUNC_7(VAR_7, VAR_1[VAR_12], VAR_11);
 FUNC_2(&VAR_8->update_lock);

 return VAR_5;
}
