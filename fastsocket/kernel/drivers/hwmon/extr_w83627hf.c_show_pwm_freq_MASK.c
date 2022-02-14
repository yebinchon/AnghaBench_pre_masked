
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct w83627hf_data {scalar_t__ type; int * pwm_freq; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int ) ;
 TYPE_1__* FUNC_3 (struct device_attribute*) ;
 scalar_t__ VAR_0 ;
 struct w83627hf_data* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t
FUNC_5(struct device *VAR_1, struct device_attribute *VAR_2, char *VAR_3)
{
 int VAR_4 = FUNC_3(VAR_2)->index;
 struct w83627hf_data *VAR_5 = FUNC_4(VAR_1);
 if (VAR_5->type == VAR_0)
  return FUNC_2(VAR_3, "%ld\n",
   FUNC_1(VAR_5->pwm_freq[VAR_4]));
 else
  return FUNC_2(VAR_3, "%ld\n",
   FUNC_0(VAR_5->pwm_freq[VAR_4]));
}
