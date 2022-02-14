
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sensor_device_attribute_2 {int nr; int index; } ;
struct f71805f_data {TYPE_1__* auto_points; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int * temp; } ;


 struct f71805f_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int ) ;
 int FUNC_2 (int ) ;
 struct sensor_device_attribute_2* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
     struct device_attribute *VAR_1,
     char* VAR_2)
{
 struct f71805f_data *VAR_3 = FUNC_0(VAR_0);
 struct sensor_device_attribute_2 *VAR_4 = FUNC_3(VAR_1);
 int VAR_5 = VAR_4->nr;
 int VAR_6 = VAR_4->index;

 return FUNC_1(VAR_2, "%ld\n",
         FUNC_2(VAR_3->auto_points[VAR_5].temp[VAR_6]));
}
