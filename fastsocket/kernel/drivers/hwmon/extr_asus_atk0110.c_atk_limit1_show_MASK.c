
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
struct atk_sensor_data {int limit1; scalar_t__ type; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 struct atk_sensor_data* FUNC_0 (struct device_attribute*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 struct atk_sensor_data *VAR_4 = FUNC_0(VAR_2);
 u64 VAR_5 = VAR_4->limit1;

 if (VAR_4->type == VAR_0)
  VAR_5 *= 100;

 return FUNC_1(VAR_3, "%lld\n", VAR_5);
}
