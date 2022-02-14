
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct it87_data {int* manual_pwm_ctl; int fan_main_ctrl; int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 struct it87_data* FUNC_2 (struct device*) ;
 int FUNC_3 (struct it87_data*,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char const*,int *,int) ;
 struct sensor_device_attribute* FUNC_7 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_8(struct device *VAR_1, struct device_attribute *VAR_2,
  const char *VAR_3, size_t VAR_4)
{
 struct sensor_device_attribute *VAR_5 = FUNC_7(VAR_2);
 int VAR_6 = VAR_5->index;

 struct it87_data *VAR_7 = FUNC_2(VAR_1);
 int VAR_8 = FUNC_6(VAR_3, ((void*)0), 10);

 if (VAR_8 < 0 || VAR_8 > 255)
  return -VAR_0;

 FUNC_4(&VAR_7->update_lock);
 VAR_7->manual_pwm_ctl[VAR_6] = VAR_8;
 if (VAR_7->fan_main_ctrl & (1 << VAR_6))
  FUNC_3(VAR_7, FUNC_0(VAR_6), FUNC_1(VAR_7->manual_pwm_ctl[VAR_6]));
 FUNC_5(&VAR_7->update_lock);
 return VAR_4;
}
