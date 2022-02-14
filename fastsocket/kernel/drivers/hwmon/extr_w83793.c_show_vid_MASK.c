
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83793_data {int vrm; int * vid; } ;
struct sensor_device_attribute_2 {int index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int) ;
 struct sensor_device_attribute_2* FUNC_1 (struct device_attribute*) ;
 int FUNC_2 (int ,int ) ;
 struct w83793_data* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1, char *VAR_2)
{
 struct w83793_data *VAR_3 = FUNC_3(VAR_0);
 struct sensor_device_attribute_2 *VAR_4 =
     FUNC_1(VAR_1);
 int VAR_5 = VAR_4->index;

 return FUNC_0(VAR_2, "%d\n", FUNC_2(VAR_3->vid[VAR_5], VAR_3->vrm));
}
