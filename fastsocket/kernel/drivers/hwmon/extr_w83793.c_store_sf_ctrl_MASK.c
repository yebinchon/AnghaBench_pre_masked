
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct w83793_data {int* temp_fan_map; int pwm_enable; int* temp_cruise; int* tolerance; int update_lock; } ;
struct sensor_device_attribute_2 {int nr; int index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int) ;
 int VAR_4 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 struct w83793_data* FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char const*,int *,int) ;
 int FUNC_8 (char const*,int *,int) ;
 struct i2c_client* FUNC_9 (struct device*) ;
 struct sensor_device_attribute_2* FUNC_10 (struct device_attribute*) ;
 void* FUNC_11 (struct i2c_client*,int ) ;
 int FUNC_12 (struct i2c_client*,int ,int) ;

__attribute__((used)) static ssize_t
FUNC_13(struct device *VAR_5, struct device_attribute *VAR_6,
       const char *VAR_7, size_t VAR_8)
{
 struct sensor_device_attribute_2 *VAR_9 =
     FUNC_10(VAR_6);
 int VAR_10 = VAR_9->nr;
 int VAR_11 = VAR_9->index;
 struct i2c_client *VAR_12 = FUNC_9(VAR_5);
 struct w83793_data *VAR_13 = FUNC_4(VAR_12);
 u32 VAR_14;

 FUNC_5(&VAR_13->update_lock);
 if (VAR_2 == VAR_10) {
  VAR_14 = FUNC_8(VAR_7, ((void*)0), 10) & 0xff;
  FUNC_12(VAR_12, FUNC_2(VAR_11), VAR_14);
  VAR_13->temp_fan_map[VAR_11] = VAR_14;
 } else if (VAR_3 == VAR_10) {
  VAR_14 = FUNC_8(VAR_7, ((void*)0), 10);
  if (2 == VAR_14 || 3 == VAR_14) {
   VAR_13->pwm_enable =
       FUNC_11(VAR_12, VAR_4);
   if (VAR_14 - 2)
    VAR_13->pwm_enable |= 1 << VAR_11;
   else
    VAR_13->pwm_enable &= ~(1 << VAR_11);
   FUNC_12(VAR_12, VAR_4,
       VAR_13->pwm_enable);
  } else {
   FUNC_6(&VAR_13->update_lock);
   return -VAR_0;
  }
 } else if (VAR_1 == VAR_10) {
  VAR_13->temp_cruise[VAR_11] =
      FUNC_11(VAR_12, FUNC_1(VAR_11));
  VAR_14 = FUNC_0(FUNC_7(VAR_7, ((void*)0), 10), 0, 0x7f);
  VAR_13->temp_cruise[VAR_11] &= 0x80;
  VAR_13->temp_cruise[VAR_11] |= VAR_14;

  FUNC_12(VAR_12, FUNC_1(VAR_11),
      VAR_13->temp_cruise[VAR_11]);
 } else {
  int VAR_15 = VAR_11 >> 1;
  u8 VAR_16 = (VAR_11 & 0x01) ? 4 : 0;
  VAR_13->tolerance[VAR_15] =
      FUNC_11(VAR_12, FUNC_3(VAR_15));

  VAR_14 = FUNC_0(FUNC_7(VAR_7, ((void*)0), 10), 0, 0x0f);
  VAR_13->tolerance[VAR_15] &= ~(0x0f << VAR_16);
  VAR_13->tolerance[VAR_15] |= VAR_14 << VAR_16;
  FUNC_12(VAR_12, FUNC_3(VAR_15),
       VAR_13->tolerance[VAR_15]);
 }

 FUNC_6(&VAR_13->update_lock);
 return VAR_8;
}
