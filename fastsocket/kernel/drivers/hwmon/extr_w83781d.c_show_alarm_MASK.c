
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct w83781d_data {int alarms; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (char*,char*,int) ;
 TYPE_1__* FUNC_1 (struct device_attribute*) ;
 struct w83781d_data* FUNC_2 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0, struct device_attribute *VAR_1,
  char *VAR_2)
{
 struct w83781d_data *VAR_3 = FUNC_2(VAR_0);
 int VAR_4 = FUNC_1(VAR_1)->index;
 return FUNC_0(VAR_2, "%u\n", (VAR_3->alarms >> VAR_4) & 1);
}
