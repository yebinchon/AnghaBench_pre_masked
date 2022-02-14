
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lm93_data {int * auto_pwm_min_hyst; int sfc2; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; } ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int) ;
 struct lm93_data* FUNC_2 (struct device*) ;
 int FUNC_3 (char*,char*,int) ;
 TYPE_1__* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
    struct device_attribute *VAR_1, char *VAR_2)
{
 int VAR_3 = (FUNC_4(VAR_1))->index;
 struct lm93_data *VAR_4 = FUNC_2(VAR_0);
 int VAR_5 = FUNC_1(VAR_4->sfc2, VAR_3);
 return FUNC_3(VAR_2,"%d\n",FUNC_0(
     VAR_4->auto_pwm_min_hyst[VAR_3/2], VAR_5));
}
