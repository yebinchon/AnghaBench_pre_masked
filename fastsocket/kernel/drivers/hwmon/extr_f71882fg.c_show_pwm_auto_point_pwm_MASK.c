
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f71882fg_data {int pwm_enable; int** pwm_auto_point_pwm; int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
struct TYPE_2__ {int index; int nr; } ;


 struct f71882fg_data* FUNC_0 (struct device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,int) ;
 TYPE_1__* FUNC_4 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
           struct device_attribute *VAR_1,
           char *VAR_2)
{
 int VAR_3;
 struct f71882fg_data *VAR_4 = FUNC_0(VAR_0);
 int VAR_5 = FUNC_4(VAR_1)->index;
 int VAR_6 = FUNC_4(VAR_1)->nr;

 FUNC_1(&VAR_4->update_lock);
 if (VAR_4->pwm_enable & (1 << (2 * VAR_5))) {

  VAR_3 = VAR_4->pwm_auto_point_pwm[VAR_5][VAR_6];
 } else {

  VAR_3 = 32 * 255 / (32 + VAR_4->pwm_auto_point_pwm[VAR_5][VAR_6]);
 }
 FUNC_2(&VAR_4->update_lock);

 return FUNC_3(VAR_2, "%d\n", VAR_3);
}
