
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct w83793_data {int* pwm_stop_time; int** pwm; int update_lock; } ;
struct sensor_device_attribute_2 {int nr; int index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int) ;
 struct w83793_data* FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char const*,int *,int) ;
 struct i2c_client* FUNC_8 (struct device*) ;
 struct sensor_device_attribute_2* FUNC_9 (struct device_attribute*) ;
 int FUNC_10 (struct i2c_client*,int ) ;
 int FUNC_11 (struct i2c_client*,int ,int) ;

__attribute__((used)) static ssize_t
FUNC_12(struct device *VAR_1, struct device_attribute *VAR_2,
   const char *VAR_3, size_t VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_8(VAR_1);
 struct w83793_data *VAR_6 = FUNC_4(VAR_5);
 struct sensor_device_attribute_2 *VAR_7 =
     FUNC_9(VAR_2);
 int VAR_8 = VAR_7->nr;
 int VAR_9 = VAR_7->index;
 u8 VAR_10;

 FUNC_5(&VAR_6->update_lock);
 if (VAR_0 == VAR_8) {
  VAR_10 = FUNC_1(FUNC_7(VAR_3, ((void*)0), 10));
  VAR_6->pwm_stop_time[VAR_9] = VAR_10;
  FUNC_11(VAR_5, FUNC_3(VAR_9),
       VAR_10);
 } else {
  VAR_10 = FUNC_0(FUNC_7(VAR_3, ((void*)0), 10), 0, 0xff)
        >> 2;
  VAR_6->pwm[VAR_9][VAR_8] =
      FUNC_10(VAR_5, FUNC_2(VAR_9, VAR_8)) & 0xc0;
  VAR_6->pwm[VAR_9][VAR_8] |= VAR_10;
  FUNC_11(VAR_5, FUNC_2(VAR_9, VAR_8),
       VAR_6->pwm[VAR_9][VAR_8]);
 }

 FUNC_6(&VAR_6->update_lock);
 return VAR_4;
}
