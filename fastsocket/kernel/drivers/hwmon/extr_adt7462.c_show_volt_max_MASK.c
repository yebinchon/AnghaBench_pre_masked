
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {size_t index; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct adt7462_data {int* volt_max; } ;
typedef int ssize_t ;


 struct adt7462_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*,int) ;
 struct sensor_device_attribute* FUNC_2 (struct device_attribute*) ;
 int FUNC_3 (struct adt7462_data*,size_t) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
        struct device_attribute *VAR_1,
        char *VAR_2)
{
 struct sensor_device_attribute *VAR_3 = FUNC_2(VAR_1);
 struct adt7462_data *VAR_4 = FUNC_0(VAR_0);
 int VAR_5 = FUNC_3(VAR_4, VAR_3->index);

 VAR_5 *= VAR_4->volt_max[VAR_3->index];
 VAR_5 /= 1000;

 return FUNC_1(VAR_2, "%d\n", VAR_5);
}
