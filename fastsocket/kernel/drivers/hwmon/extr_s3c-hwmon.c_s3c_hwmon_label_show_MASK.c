
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sensor_device_attribute {size_t index; } ;
struct s3c_hwmon_pdata {struct s3c_hwmon_chcfg** in; } ;
struct s3c_hwmon_chcfg {char* name; } ;
struct device_attribute {int dummy; } ;
struct device {struct s3c_hwmon_pdata* platform_data; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,int ,char*,char*) ;
 struct sensor_device_attribute* FUNC_1 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
        struct device_attribute *VAR_2,
        char *VAR_3)
{
 struct sensor_device_attribute *VAR_4 = FUNC_1(VAR_2);
 struct s3c_hwmon_pdata *VAR_5 = VAR_1->platform_data;
 struct s3c_hwmon_chcfg *VAR_6;

 VAR_6 = VAR_5->in[VAR_4->index];

 return FUNC_0(VAR_3, VAR_0, "%s\n", VAR_6->name);
}
