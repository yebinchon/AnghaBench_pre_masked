
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct w83793_data {int* temp_fan_map; int pwm_enable; int* temp_cruise; int* tolerance; } ;
struct sensor_device_attribute_2 {int nr; int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (char*,char*,int) ;
 struct sensor_device_attribute_2* FUNC_2 (struct device_attribute*) ;
 struct w83793_data* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_3, struct device_attribute *VAR_4, char *VAR_5)
{
 struct sensor_device_attribute_2 *VAR_6 =
     FUNC_2(VAR_4);
 int VAR_7 = VAR_6->nr;
 int VAR_8 = VAR_6->index;
 struct w83793_data *VAR_9 = FUNC_3(VAR_3);
 u32 VAR_10;

 if (VAR_1 == VAR_7) {
  VAR_10 = VAR_9->temp_fan_map[VAR_8];
 } else if (VAR_2 == VAR_7) {

  VAR_10 = ((VAR_9->pwm_enable >> VAR_8) & 0x01) + 2;
 } else if (VAR_0 == VAR_7) {
  VAR_10 = FUNC_0(VAR_9->temp_cruise[VAR_8] & 0x7f);
 } else {
  VAR_10 = VAR_9->tolerance[VAR_8 >> 1] >> ((VAR_8 & 0x01) ? 4 : 0);
  VAR_10 = FUNC_0(VAR_10 & 0x0f);
 }
 return FUNC_1(VAR_5, "%d\n", VAR_10);
}
