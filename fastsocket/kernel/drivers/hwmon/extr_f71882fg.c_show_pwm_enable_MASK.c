
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f71882fg_data {int pwm_enable; int type; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 struct f71882fg_data* FUNC_0 (struct device*) ;
 int VAR_0 ;
 int FUNC_1 (char*,char*,int) ;
 TYPE_1__* FUNC_2 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct device *VAR_1,
          struct device_attribute *VAR_2, char *VAR_3)
{
 int VAR_4 = 0;
 struct f71882fg_data *VAR_5 = FUNC_0(VAR_1);
 int VAR_6 = FUNC_2(VAR_2)->index;

 switch ((VAR_5->pwm_enable >> 2 * VAR_6) & 3) {
 case 0:
 case 1:
  VAR_4 = 2;
  break;
 case 2:
  VAR_4 = 1;
  break;
 case 3:
  if (VAR_5->type == VAR_0)
   VAR_4 = 3;
  else
   VAR_4 = 1;
  break;
 }

 return FUNC_1(VAR_3, "%d\n", VAR_4);
}
