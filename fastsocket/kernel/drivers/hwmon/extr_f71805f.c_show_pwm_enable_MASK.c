
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct f71805f_data {int* fan_ctrl; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;


 struct f71805f_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;
 struct sensor_device_attribute* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1, struct device_attribute
          *VAR_2, char *VAR_3)
{
 struct f71805f_data *VAR_4 = FUNC_0(VAR_1);
 struct sensor_device_attribute *VAR_5 = FUNC_2(VAR_2);
 int VAR_6 = VAR_5->index;
 int VAR_7;

 switch (VAR_4->fan_ctrl[VAR_6] & VAR_0) {
 case 129:
  VAR_7 = 3;
  break;
 case 128:
  VAR_7 = 2;
  break;
 default:
  VAR_7 = 1;
 }

 return FUNC_1(VAR_3, "%d\n", VAR_7);
}
