
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f71882fg_data {int fan_beep; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 struct f71882fg_data* FUNC_0 (struct device*) ;
 int FUNC_1 (char*,char*) ;
 TYPE_1__* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_0, struct device_attribute
 *VAR_1, char *VAR_2)
{
 struct f71882fg_data *VAR_3 = FUNC_0(VAR_0);
 int VAR_4 = FUNC_2(VAR_1)->index;

 if (VAR_3->fan_beep & (1 << VAR_4))
  return FUNC_1(VAR_2, "1\n");
 else
  return FUNC_1(VAR_2, "0\n");
}
