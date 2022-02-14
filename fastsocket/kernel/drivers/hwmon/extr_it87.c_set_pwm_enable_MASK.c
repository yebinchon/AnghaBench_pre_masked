
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct it87_data {int fan_main_ctrl; int update_lock; int * manual_pwm_ctl; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 struct it87_data* FUNC_2 (struct device*) ;
 int FUNC_3 (struct it87_data*,int ) ;
 int FUNC_4 (struct it87_data*,int ,int) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char const*,int *,int) ;
 struct sensor_device_attribute* FUNC_8 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_9(struct device *VAR_3,
  struct device_attribute *VAR_4, const char *VAR_5, size_t VAR_6)
{
 struct sensor_device_attribute *VAR_7 = FUNC_8(VAR_4);
 int VAR_8 = VAR_7->index;

 struct it87_data *VAR_9 = FUNC_2(VAR_3);
 int VAR_10 = FUNC_7(VAR_5, ((void*)0), 10);

 FUNC_5(&VAR_9->update_lock);

 if (VAR_10 == 0) {
  int VAR_11;

  VAR_11 = FUNC_3(VAR_9, VAR_1);
  FUNC_4(VAR_9, VAR_1, VAR_11 | (1 << VAR_8));

  VAR_9->fan_main_ctrl &= ~(1 << VAR_8);
  FUNC_4(VAR_9, VAR_2, VAR_9->fan_main_ctrl);
 } else if (VAR_10 == 1) {

  VAR_9->fan_main_ctrl |= (1 << VAR_8);
  FUNC_4(VAR_9, VAR_2, VAR_9->fan_main_ctrl);

  FUNC_4(VAR_9, FUNC_0(VAR_8), FUNC_1(VAR_9->manual_pwm_ctl[VAR_8]));
 } else {
  FUNC_6(&VAR_9->update_lock);
  return -VAR_0;
 }

 FUNC_6(&VAR_9->update_lock);
 return VAR_6;
}
