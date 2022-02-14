
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct temp_data {int status_reg; int cpu; } ;
struct sensor_device_attribute {size_t index; } ;
struct platform_data {struct temp_data** core_data; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 struct platform_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int ,int ,int*,int*) ;
 int FUNC_2 (char*,char*,int) ;
 struct sensor_device_attribute* FUNC_3 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_4(struct device *VAR_0,
    struct device_attribute *VAR_1, char *VAR_2)
{
 u32 VAR_3, VAR_4;
 struct sensor_device_attribute *VAR_5 = FUNC_3(VAR_1);
 struct platform_data *VAR_6 = FUNC_0(VAR_0);
 struct temp_data *VAR_7 = VAR_6->core_data[VAR_5->index];

 FUNC_1(VAR_7->cpu, VAR_7->status_reg, &VAR_3, &VAR_4);

 return FUNC_2(VAR_2, "%d\n", (VAR_3 >> 5) & 1);
}
