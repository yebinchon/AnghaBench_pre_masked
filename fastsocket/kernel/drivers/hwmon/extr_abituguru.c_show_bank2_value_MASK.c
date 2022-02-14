
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {size_t index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct abituguru_data {int* bank2_value; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct abituguru_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;
 struct sensor_device_attribute_2* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_2,
 struct device_attribute *VAR_3, char *VAR_4)
{
 struct sensor_device_attribute_2 *VAR_5 = FUNC_2(VAR_3);
 struct abituguru_data *VAR_6 = FUNC_0(VAR_2);
 if (!VAR_6)
  return -VAR_1;
 return FUNC_1(VAR_4, "%d\n", (VAR_6->bank2_value[VAR_5->index] *
  VAR_0 + 128) / 255);
}
