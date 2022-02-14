
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct w83793_data {int** sf2_pwm; int update_lock; } ;
struct sensor_device_attribute_2 {int nr; int index; } ;
struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int,int) ;
 struct w83793_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*,int *,int) ;
 struct i2c_client* FUNC_6 (struct device*) ;
 struct sensor_device_attribute_2* FUNC_7 (struct device_attribute*) ;
 int FUNC_8 (struct i2c_client*,int ) ;
 int FUNC_9 (struct i2c_client*,int ,int) ;

__attribute__((used)) static ssize_t
FUNC_10(struct device *VAR_0, struct device_attribute *VAR_1,
       const char *VAR_2, size_t VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_6(VAR_0);
 struct w83793_data *VAR_5 = FUNC_2(VAR_4);
 struct sensor_device_attribute_2 *VAR_6 =
     FUNC_7(VAR_1);
 int VAR_7 = VAR_6->nr;
 int VAR_8 = VAR_6->index;
 u8 VAR_9 = FUNC_0(FUNC_5(VAR_2, ((void*)0), 10), 0, 0xff) >> 2;

 FUNC_3(&VAR_5->update_lock);
 VAR_5->sf2_pwm[VAR_8][VAR_7] =
     FUNC_8(VAR_4, FUNC_1(VAR_8, VAR_7)) & 0xc0;
 VAR_5->sf2_pwm[VAR_8][VAR_7] |= VAR_9;
 FUNC_9(VAR_4, FUNC_1(VAR_8, VAR_7),
      VAR_5->sf2_pwm[VAR_8][VAR_7]);
 FUNC_4(&VAR_5->update_lock);
 return VAR_3;
}
