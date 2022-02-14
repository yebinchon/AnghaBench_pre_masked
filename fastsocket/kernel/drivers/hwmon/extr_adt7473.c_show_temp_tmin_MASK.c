
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {size_t index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7473_data {int * temp_tmin; int temp_twos_complement; } ;
typedef int ssize_t ;


 struct adt7473_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,char*,int) ;
 struct sensor_device_attribute* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
         struct device_attribute *VAR_1,
         char *VAR_2)
{
 struct sensor_device_attribute *VAR_3 = FUNC_3(VAR_1);
 struct adt7473_data *VAR_4 = FUNC_0(VAR_0);
 return FUNC_2(VAR_2, "%d\n", 1000 * FUNC_1(
      VAR_4->temp_twos_complement,
      VAR_4->temp_tmin[VAR_3->index]));
}
