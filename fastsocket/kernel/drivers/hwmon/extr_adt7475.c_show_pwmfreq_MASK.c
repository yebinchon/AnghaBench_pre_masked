
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {size_t index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7475_data {int* range; } ;
typedef int ssize_t ;


 struct adt7475_data* FUNC_0 (struct device*) ;
 int* VAR_0 ;
 int FUNC_1 (char*,char*,int) ;
 struct sensor_device_attribute_2* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1, struct device_attribute *VAR_2,
       char *VAR_3)
{
 struct adt7475_data *VAR_4 = FUNC_0(VAR_1);
 struct sensor_device_attribute_2 *VAR_5 = FUNC_2(VAR_2);

 return FUNC_1(VAR_3, "%d\n",
         VAR_0[VAR_4->range[VAR_5->index] & 7]);
}
