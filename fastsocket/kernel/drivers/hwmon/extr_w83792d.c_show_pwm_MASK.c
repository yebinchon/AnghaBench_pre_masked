
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83792d_data {int* pwm; } ;
struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int) ;
 struct sensor_device_attribute* FUNC_1 (struct device_attribute*) ;
 struct w83792d_data* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1,
  char *VAR_2)
{
 struct sensor_device_attribute *VAR_3 = FUNC_1(VAR_1);
 int VAR_4 = VAR_3->index;
 struct w83792d_data *VAR_5 = FUNC_2(VAR_0);
 return FUNC_0(VAR_2, "%d\n", (VAR_5->pwm[VAR_4] & 0x0f) << 4);
}
