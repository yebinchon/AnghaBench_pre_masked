
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct f71882fg_data {int pwm_enable; scalar_t__ type; long* pwm; int* fan_target; int* fan_full_speed; int update_lock; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef size_t ssize_t ;
struct TYPE_2__ {int index; } ;


 size_t VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 long FUNC_3 (long,int ,int) ;
 struct f71882fg_data* FUNC_4 (struct device*) ;
 int FUNC_5 (struct f71882fg_data*,int ) ;
 int FUNC_6 (struct f71882fg_data*,int ) ;
 int FUNC_7 (struct f71882fg_data*,int ,int) ;
 int FUNC_8 (struct f71882fg_data*,int ,long) ;
 scalar_t__ VAR_2 ;
 long FUNC_9 (int) ;
 int FUNC_10 (long) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 long FUNC_13 (char const*,int *,int) ;
 TYPE_1__* FUNC_14 (struct device_attribute*) ;

__attribute__((used)) static ssize_t FUNC_15(struct device *VAR_3,
    struct device_attribute *VAR_4, const char *VAR_5,
    size_t VAR_6)
{
 struct f71882fg_data *VAR_7 = FUNC_4(VAR_3);
 int VAR_8 = FUNC_14(VAR_4)->index;
 long VAR_9 = FUNC_13(VAR_5, ((void*)0), 10);
 VAR_9 = FUNC_3(VAR_9, 0, 255);

 FUNC_11(&VAR_7->update_lock);
 VAR_7->pwm_enable = FUNC_6(VAR_7, VAR_1);
 if ((VAR_7->type == VAR_2 && ((VAR_7->pwm_enable >> 2 * VAR_8) & 3) != 2) ||
     (VAR_7->type != VAR_2 && !((VAR_7->pwm_enable >> 2 * VAR_8) & 2))) {
  VAR_6 = -VAR_0;
  goto leave;
 }
 if (VAR_7->pwm_enable & (1 << (2 * VAR_8))) {

  FUNC_8(VAR_7, FUNC_2(VAR_8), VAR_9);
  VAR_7->pwm[VAR_8] = VAR_9;
 } else {

  int VAR_10, VAR_11;
  VAR_11 = FUNC_5(VAR_7,
          FUNC_0(VAR_8));
  VAR_10 = FUNC_10(VAR_9 * FUNC_9(VAR_11) / 255);
  FUNC_7(VAR_7, FUNC_1(VAR_8), VAR_10);
  VAR_7->fan_target[VAR_8] = VAR_10;
  VAR_7->fan_full_speed[VAR_8] = VAR_11;
 }
leave:
 FUNC_12(&VAR_7->update_lock);

 return VAR_6;
}
