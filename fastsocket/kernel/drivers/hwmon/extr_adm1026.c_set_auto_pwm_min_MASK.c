
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int enable; int pwm; int auto_pwm_min; } ;
struct adm1026_data {int update_lock; TYPE_1__ pwm1; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ,int) ;
 int FUNC_3 (struct i2c_client*,int ,int) ;
 struct adm1026_data* FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char const*,int *,int) ;
 struct i2c_client* FUNC_8 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_1, struct device_attribute *VAR_2, const char *VAR_3,
  size_t VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_8(VAR_1);
 struct adm1026_data *VAR_6 = FUNC_4(VAR_5);
 int VAR_7 = FUNC_7(VAR_3, ((void*)0), 10);

 FUNC_5(&VAR_6->update_lock);
 VAR_6->pwm1.auto_pwm_min = FUNC_2(VAR_7, 0, 255);
 if (VAR_6->pwm1.enable == 2) {
  VAR_6->pwm1.pwm = FUNC_1((VAR_6->pwm1.pwm & 0x0f) |
   FUNC_0(VAR_6->pwm1.auto_pwm_min));
  FUNC_3(VAR_5, VAR_0, VAR_6->pwm1.pwm);
 }
 FUNC_6(&VAR_6->update_lock);
 return VAR_4;
}
