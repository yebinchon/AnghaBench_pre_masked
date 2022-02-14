
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsc47m1_data {int * pwm; } ;
struct sensor_device_attribute {size_t index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 struct smsc47m1_data* FUNC_1 (struct device*,int ) ;
 int FUNC_2 (char*,char*,int) ;
 struct sensor_device_attribute* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0, struct device_attribute
         *VAR_1, char *VAR_2)
{
 struct sensor_device_attribute *VAR_3 = FUNC_3(VAR_1);
 struct smsc47m1_data *VAR_4 = FUNC_1(VAR_0, 0);
 return FUNC_2(VAR_2, "%d\n", FUNC_0(VAR_4->pwm[VAR_3->index]));
}
