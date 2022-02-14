
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {size_t index; size_t nr; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct abituguru_data {int** bank1_settings; int* bank1_max_value; } ;
typedef int ssize_t ;


 struct abituguru_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;
 struct sensor_device_attribute_2* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
 struct device_attribute *VAR_1, char *VAR_2)
{
 struct sensor_device_attribute_2 *VAR_3 = FUNC_2(VAR_1);
 struct abituguru_data *VAR_4 = FUNC_0(VAR_0);
 return FUNC_1(VAR_2, "%d\n",
  (VAR_4->bank1_settings[VAR_3->index][VAR_3->nr] *
  VAR_4->bank1_max_value[VAR_3->index] + 128) / 255);
}
