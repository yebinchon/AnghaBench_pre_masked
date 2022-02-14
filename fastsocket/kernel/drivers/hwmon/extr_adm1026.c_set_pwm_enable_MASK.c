
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int enable; int pwm; int auto_pwm_min; } ;
struct adm1026_data {int config1; int update_lock; TYPE_1__ pwm1; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct i2c_client*,int ,int) ;
 struct adm1026_data* FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char const*,int *,int) ;
 struct i2c_client* FUNC_7 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_3, struct device_attribute *VAR_4, const char *VAR_5,
  size_t VAR_6)
{
 struct i2c_client *VAR_7 = FUNC_7(VAR_3);
 struct adm1026_data *VAR_8 = FUNC_3(VAR_7);
 int VAR_9 = FUNC_6(VAR_5, ((void*)0), 10);
 int VAR_10;

 if ((VAR_9 >= 0) && (VAR_9 < 3)) {
  FUNC_4(&VAR_8->update_lock);
  VAR_10 = VAR_8->pwm1.enable;
  VAR_8->pwm1.enable = VAR_9;
  VAR_8->config1 = (VAR_8->config1 & ~VAR_2)
    | ((VAR_9 == 2) ? VAR_2 : 0);
  FUNC_2(VAR_7, VAR_0,
   VAR_8->config1);
  if (VAR_9 == 2) {
   VAR_8->pwm1.pwm = FUNC_1((VAR_8->pwm1.pwm & 0x0f) |
    FUNC_0(VAR_8->pwm1.auto_pwm_min));
   FUNC_2(VAR_7, VAR_1,
    VAR_8->pwm1.pwm);
  } else if (!((VAR_10 == 1) && (VAR_9 == 1))) {

   VAR_8->pwm1.pwm = 255;
   FUNC_2(VAR_7, VAR_1,
    VAR_8->pwm1.pwm);
  }
  FUNC_5(&VAR_8->update_lock);
 }
 return VAR_6;
}
