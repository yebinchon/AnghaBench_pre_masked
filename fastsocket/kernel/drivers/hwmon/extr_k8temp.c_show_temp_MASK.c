
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute_2 {int nr; int index; } ;
struct k8temp_data {int temp_offset; int ** temp; scalar_t__ swap_core_select; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (int ) ;
 struct k8temp_data* FUNC_1 (struct device*) ;
 int FUNC_2 (char*,char*,int) ;
 struct sensor_device_attribute_2* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
    struct device_attribute *VAR_1, char *VAR_2)
{
 struct sensor_device_attribute_2 *VAR_3 =
     FUNC_3(VAR_1);
 int VAR_4 = VAR_3->nr;
 int VAR_5 = VAR_3->index;
 int VAR_6;
 struct k8temp_data *VAR_7 = FUNC_1(VAR_0);

 if (VAR_7->swap_core_select)
  VAR_4 = VAR_4 ? 0 : 1;

 VAR_6 = FUNC_0(VAR_7->temp[VAR_4][VAR_5]) + VAR_7->temp_offset;

 return FUNC_2(VAR_2, "%d\n", VAR_6);
}
