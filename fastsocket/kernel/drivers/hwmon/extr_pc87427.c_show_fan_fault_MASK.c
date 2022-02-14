
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {int index; } ;
struct pc87427_data {int* fan_status; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 struct pc87427_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;
 struct sensor_device_attribute* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1, struct device_attribute
         *VAR_2, char *VAR_3)
{
 struct sensor_device_attribute *VAR_4 = FUNC_2(VAR_2);
 struct pc87427_data *VAR_5 = FUNC_0(VAR_1);
 int VAR_6 = VAR_4->index;

 return FUNC_1(VAR_3, "%d\n", !!(VAR_5->fan_status[VAR_6]
           & VAR_0));
}
