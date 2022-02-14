
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f71882fg_data {scalar_t__ type; int pwm_enable; int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int index; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 struct f71882fg_data* FUNC_0 (struct device*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct f71882fg_data*,int ) ;
 int FUNC_2 (struct f71882fg_data*,int ,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 long FUNC_5 (char const*,int *,int) ;
 TYPE_1__* FUNC_6 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_7(struct device *VAR_4, struct device_attribute
    *VAR_5, const char *VAR_6, size_t VAR_7)
{
 struct f71882fg_data *VAR_8 = FUNC_0(VAR_4);
 int VAR_9 = FUNC_6(VAR_5)->index;
 long VAR_10 = FUNC_5(VAR_6, ((void*)0), 10);


 if (VAR_8->type == VAR_3 && VAR_9 == 2 && VAR_10 != 2)
  return -VAR_0;

 FUNC_3(&VAR_8->update_lock);
 VAR_8->pwm_enable = FUNC_1(VAR_8, VAR_1);

 if (VAR_8->type == VAR_3 && ((VAR_8->pwm_enable >> 2 * VAR_9) & 1)) {
  switch (VAR_10) {
  case 2:
   VAR_8->pwm_enable &= ~(2 << (2 * VAR_9));
   break;
  case 3:
   VAR_8->pwm_enable |= 2 << (2 * VAR_9);
   break;
  default:
   VAR_7 = -VAR_0;
   goto leave;
  }
 } else {
  switch (VAR_10) {
  case 1:

   if (VAR_8->type == VAR_2 &&
       ((VAR_8->pwm_enable >> (2 * VAR_9)) & 1)) {
    VAR_7 = -VAR_0;
    goto leave;
   }
   VAR_8->pwm_enable |= 2 << (2 * VAR_9);
   break;
  case 2:
   VAR_8->pwm_enable &= ~(2 << (2 * VAR_9));
   break;
  default:
   VAR_7 = -VAR_0;
   goto leave;
  }
 }
 FUNC_2(VAR_8, VAR_1, VAR_8->pwm_enable);
leave:
 FUNC_4(&VAR_8->update_lock);

 return VAR_7;
}
