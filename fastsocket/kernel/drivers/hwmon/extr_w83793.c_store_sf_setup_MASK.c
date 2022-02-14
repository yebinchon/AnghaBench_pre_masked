
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83793_data {int pwm_default; int pwm_uptime; int pwm_downtime; int temp_critical; int update_lock; } ;
struct sensor_device_attribute_2 {int nr; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int) ;
 void* FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct w83793_data* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char const*,int *,int) ;
 int FUNC_7 (char const*,int *,int) ;
 struct i2c_client* FUNC_8 (struct device*) ;
 struct sensor_device_attribute_2* FUNC_9 (struct device_attribute*) ;
 int FUNC_10 (struct i2c_client*,int ) ;
 int FUNC_11 (struct i2c_client*,int ,int) ;

__attribute__((used)) static ssize_t
FUNC_12(struct device *VAR_7, struct device_attribute *VAR_8,
        const char *VAR_9, size_t VAR_10)
{
 struct sensor_device_attribute_2 *VAR_11 =
     FUNC_9(VAR_8);
 int VAR_12 = VAR_11->nr;
 struct i2c_client *VAR_13 = FUNC_8(VAR_7);
 struct w83793_data *VAR_14 = FUNC_3(VAR_13);

 FUNC_4(&VAR_14->update_lock);
 if (VAR_0 == VAR_12) {
  VAR_14->pwm_default =
      FUNC_10(VAR_13, VAR_3) & 0xc0;
  VAR_14->pwm_default |= FUNC_0(FUNC_7(VAR_9, ((void*)0),
          10),
         0, 0xff) >> 2;
  FUNC_11(VAR_13, VAR_3,
       VAR_14->pwm_default);
 } else if (VAR_2 == VAR_12) {
  VAR_14->pwm_uptime = FUNC_2(FUNC_7(VAR_9, ((void*)0), 10));
  VAR_14->pwm_uptime += VAR_14->pwm_uptime == 0 ? 1 : 0;
  FUNC_11(VAR_13, VAR_5,
       VAR_14->pwm_uptime);
 } else if (VAR_1 == VAR_12) {
  VAR_14->pwm_downtime = FUNC_2(FUNC_7(VAR_9, ((void*)0), 10));
  VAR_14->pwm_downtime += VAR_14->pwm_downtime == 0 ? 1 : 0;
  FUNC_11(VAR_13, VAR_4,
       VAR_14->pwm_downtime);
 } else {
  VAR_14->temp_critical =
      FUNC_10(VAR_13, VAR_6) & 0x80;
  VAR_14->temp_critical |= FUNC_1(FUNC_6(VAR_9, ((void*)0), 10),
         0, 0x7f);
  FUNC_11(VAR_13, VAR_6,
       VAR_14->temp_critical);
 }

 FUNC_5(&VAR_14->update_lock);
 return VAR_10;
}
