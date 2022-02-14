
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sensor_device_attribute {int index; } ;
struct it87_data {int sensor; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct it87_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*) ;
 struct sensor_device_attribute* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1,
  char *VAR_2)
{
 struct sensor_device_attribute *VAR_3 = FUNC_2(VAR_1);
 int VAR_4 = VAR_3->index;

 struct it87_data *VAR_5 = FUNC_0(VAR_0);
 u8 VAR_6 = VAR_5->sensor;

 if (VAR_6 & (1 << VAR_4))
  return FUNC_1(VAR_2, "3\n");
 if (VAR_6 & (8 << VAR_4))
  return FUNC_1(VAR_2, "4\n");
 return FUNC_1(VAR_2, "0\n");
}
