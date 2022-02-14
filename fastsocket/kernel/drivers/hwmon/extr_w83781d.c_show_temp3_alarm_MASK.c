
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83781d_data {scalar_t__ type; int alarms; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (char*,char*,int) ;
 scalar_t__ VAR_0 ;
 struct w83781d_data* FUNC_1 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_2(struct device *VAR_1,
  struct device_attribute *VAR_2, char *VAR_3)
{
 struct w83781d_data *VAR_4 = FUNC_1(VAR_1);
 int VAR_5 = (VAR_4->type == VAR_0) ? 5 : 13;
 return FUNC_0(VAR_3, "%u\n", (VAR_4->alarms >> VAR_5) & 1);
}
