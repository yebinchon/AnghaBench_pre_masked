
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct w83l786ng_data {int * fan_div; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,char*,int) ;
 TYPE_1__* FUNC_2 (struct device_attribute*) ;
 struct w83l786ng_data* FUNC_3 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_4(struct device *VAR_0, struct device_attribute *VAR_1,
      char *VAR_2)
{
 int VAR_3 = FUNC_2(VAR_1)->index;
 struct w83l786ng_data *VAR_4 = FUNC_3(VAR_0);
 return FUNC_1(VAR_2, "%u\n", FUNC_0(VAR_4->fan_div[VAR_3]));
}
