
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct w83793_data {int** pwm; int * pwm_stop_time; } ;
struct sensor_device_attribute_2 {int nr; int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int) ;
 struct sensor_device_attribute_2* FUNC_2 (struct device_attribute*) ;
 struct w83793_data* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2, char *VAR_3)
{
 struct sensor_device_attribute_2 *VAR_4 =
     FUNC_2(VAR_2);
 struct w83793_data *VAR_5 = FUNC_3(VAR_1);
 u16 VAR_6;
 int VAR_7 = VAR_4->nr;
 int VAR_8 = VAR_4->index;

 if (VAR_0 == VAR_7)
  VAR_6 = FUNC_0(VAR_5->pwm_stop_time[VAR_8]);
 else
  VAR_6 = (VAR_5->pwm[VAR_8][VAR_7] & 0x3f) << 2;

 return FUNC_1(VAR_3, "%d\n", VAR_6);
}
