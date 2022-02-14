
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsc47m192_data {int alarms; } ;
struct sensor_device_attribute {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct smsc47m192_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;
 struct sensor_device_attribute* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1,
  char *VAR_2)
{
 struct sensor_device_attribute *VAR_3 = FUNC_2(VAR_1);
 int VAR_4 = VAR_3->index;
 struct smsc47m192_data *VAR_5 = FUNC_0(VAR_0);
 return FUNC_1(VAR_2, "%u\n", (VAR_5->alarms & VAR_4) ? 1 : 0);
}
