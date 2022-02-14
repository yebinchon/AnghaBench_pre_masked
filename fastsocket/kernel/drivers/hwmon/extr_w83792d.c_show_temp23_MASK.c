
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83792d_data {int ** temp_add; } ;
struct sensor_device_attribute_2 {int nr; int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (char*,char*,long) ;
 struct sensor_device_attribute_2* FUNC_2 (struct device_attribute*) ;
 struct w83792d_data* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1,
    char *VAR_2)
{
 struct sensor_device_attribute_2 *VAR_3 = FUNC_2(VAR_1);
 int VAR_4 = VAR_3->nr;
 int VAR_5 = VAR_3->index;
 struct w83792d_data *VAR_6 = FUNC_3(VAR_0);
 return FUNC_1(VAR_2,"%ld\n",
  (long)FUNC_0(VAR_6->temp_add[VAR_4][VAR_5],
   VAR_6->temp_add[VAR_4][VAR_5+1]));
}
