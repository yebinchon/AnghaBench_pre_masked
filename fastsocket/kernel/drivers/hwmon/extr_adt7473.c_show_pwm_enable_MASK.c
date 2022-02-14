
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {size_t index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7473_data {int* pwm_behavior; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct adt7473_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*) ;
 struct sensor_device_attribute* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
          struct device_attribute *VAR_2,
          char *VAR_3)
{
 struct sensor_device_attribute *VAR_4 = FUNC_2(VAR_2);
 struct adt7473_data *VAR_5 = FUNC_0(VAR_1);

 switch (VAR_5->pwm_behavior[VAR_4->index] >> VAR_0) {
 case 3:
  return FUNC_1(VAR_3, "0\n");
 case 7:
  return FUNC_1(VAR_3, "1\n");
 default:
  return FUNC_1(VAR_3, "2\n");
 }
}
