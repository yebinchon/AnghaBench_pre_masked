
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sensor_device_attribute_2 {size_t index; size_t nr; } ;
struct ibmpex_bmc_data {TYPE_1__* sensors; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int multiplier; int* values; } ;


 struct ibmpex_bmc_data* FUNC_0 (struct device*) ;
 int FUNC_1 (struct ibmpex_bmc_data*) ;
 int FUNC_2 (char*,char*,int) ;
 struct sensor_device_attribute_2* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
      struct device_attribute *VAR_1,
      char *VAR_2)
{
 struct sensor_device_attribute_2 *VAR_3 = FUNC_3(VAR_1);
 struct ibmpex_bmc_data *VAR_4 = FUNC_0(VAR_0);
 int VAR_5 = VAR_4->sensors[VAR_3->index].multiplier;
 FUNC_1(VAR_4);

 return FUNC_2(VAR_2, "%d\n",
         VAR_4->sensors[VAR_3->index].values[VAR_3->nr] * VAR_5);
}
