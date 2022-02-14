
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {int nr; size_t index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7475_data {int alarms; unsigned short** voltage; } ;
typedef int ssize_t ;



 struct adt7475_data* FUNC_0 (struct device*) ;
 int FUNC_1 (unsigned short) ;
 int FUNC_2 (unsigned short) ;
 int FUNC_3 (char*,char*,int) ;
 struct sensor_device_attribute_2* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0, struct device_attribute *VAR_1,
       char *VAR_2)
{
 struct adt7475_data *VAR_3 = FUNC_0(VAR_0);
 struct sensor_device_attribute_2 *VAR_4 = FUNC_4(VAR_1);
 unsigned short VAR_5;

 switch (VAR_4->nr) {
 case 128:
  return FUNC_3(VAR_2, "%d\n",
          (VAR_3->alarms >> (VAR_4->index + 1)) & 1);
 default:
  VAR_5 = VAR_3->voltage[VAR_4->nr][VAR_4->index];
  return FUNC_3(VAR_2, "%d\n",
          VAR_4->index ==
          0 ? FUNC_2(VAR_5) : FUNC_1(VAR_5));
 }
}
