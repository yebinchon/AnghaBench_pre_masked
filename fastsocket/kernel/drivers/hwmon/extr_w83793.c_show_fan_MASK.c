
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct w83793_data {int* fan; int* fan_min; } ;
struct sensor_device_attribute_2 {int nr; int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*,int ) ;
 struct sensor_device_attribute_2* FUNC_2 (struct device_attribute*) ;
 struct w83793_data* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_1, struct device_attribute *VAR_2, char *VAR_3)
{
 struct sensor_device_attribute_2 *VAR_4 =
     FUNC_2(VAR_2);
 int VAR_5 = VAR_4->nr;
 int VAR_6 = VAR_4->index;
 struct w83793_data *VAR_7 = FUNC_3(VAR_1);
 u16 VAR_8;

 if (VAR_0 == VAR_5) {
  VAR_8 = VAR_7->fan[VAR_6] & 0x0fff;
 } else {
  VAR_8 = VAR_7->fan_min[VAR_6] & 0x0fff;
 }

 return FUNC_1(VAR_3, "%lu\n", FUNC_0(VAR_8));
}
