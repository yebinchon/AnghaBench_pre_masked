
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sensor_device_attribute {size_t index; } ;
struct platform_data {TYPE_1__** core_data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int ttarget; } ;


 struct platform_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;
 struct sensor_device_attribute* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0,
    struct device_attribute *VAR_1, char *VAR_2)
{
 struct sensor_device_attribute *VAR_3 = FUNC_2(VAR_1);
 struct platform_data *VAR_4 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2, "%d\n", VAR_4->core_data[VAR_3->index]->ttarget);
}
