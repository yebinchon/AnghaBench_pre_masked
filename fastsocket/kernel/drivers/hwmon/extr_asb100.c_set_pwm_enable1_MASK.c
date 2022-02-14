
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct asb100_data {int pwm; int update_lock; } ;
typedef size_t ssize_t ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int ,int) ;
 struct asb100_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 unsigned long FUNC_4 (char const*,int *,int) ;
 struct i2c_client* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_1,
  struct device_attribute *VAR_2, const char *VAR_3, size_t VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_5(VAR_1);
 struct asb100_data *VAR_6 = FUNC_1(VAR_5);
 unsigned long VAR_7 = FUNC_4(VAR_3, ((void*)0), 10);

 FUNC_2(&VAR_6->update_lock);
 VAR_6->pwm &= 0x0f;
 VAR_6->pwm |= (VAR_7 ? 0x80 : 0x00);
 FUNC_0(VAR_5, VAR_0, VAR_6->pwm);
 FUNC_3(&VAR_6->update_lock);
 return VAR_4;
}
