
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
 int FUNC_0 () ;
 struct adt7473_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,...) ;
 struct sensor_device_attribute* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_1,
      struct device_attribute *VAR_2,
      char *VAR_3)
{
 struct sensor_device_attribute *VAR_4 = FUNC_3(VAR_2);
 struct adt7473_data *VAR_5 = FUNC_1(VAR_1);
 int VAR_6 = VAR_5->pwm_behavior[VAR_4->index] >> VAR_0;

 switch (VAR_6) {
 case 3:
 case 4:
 case 7:
  return FUNC_2(VAR_3, "0\n");
 case 0:
 case 1:
 case 5:
 case 6:
  return FUNC_2(VAR_3, "%d\n", VAR_6 + 1);
 case 2:
  return FUNC_2(VAR_3, "4\n");
 }

 FUNC_0();
}
