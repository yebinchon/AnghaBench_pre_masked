
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct f75375_data {int valid; int update_lock; void* last_updated; void** in; void** fan; void** temp; void* last_limits; void* fan_timer; void** in_min; void** in_max; void** pwm; void** fan_exp; void** fan_min; void** fan_full; void** temp_max_hyst; void** temp_high; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_0 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int VAR_1 ;
 void* FUNC_11 (struct i2c_client*,int ) ;
 void* FUNC_12 (struct i2c_client*,int ) ;
 struct f75375_data* FUNC_13 (struct i2c_client*) ;
 void* VAR_2 ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (void*,void*) ;
 struct i2c_client* FUNC_17 (struct device*) ;

__attribute__((used)) static struct f75375_data *FUNC_18(struct device *VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_17(VAR_3);
 struct f75375_data *VAR_5 = FUNC_13(VAR_4);
 int VAR_6;

 FUNC_14(&VAR_5->update_lock);


 if (FUNC_16(VAR_2, VAR_5->last_limits + 60 * VAR_1)
  || !VAR_5->valid) {
  for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {
   VAR_5->temp_high[VAR_6] =
    FUNC_12(VAR_4, FUNC_6(VAR_6));
   VAR_5->temp_max_hyst[VAR_6] =
    FUNC_12(VAR_4, FUNC_7(VAR_6));
   VAR_5->fan_full[VAR_6] =
    FUNC_11(VAR_4, FUNC_2(VAR_6));
   VAR_5->fan_min[VAR_6] =
    FUNC_11(VAR_4, FUNC_3(VAR_6));
   VAR_5->fan_exp[VAR_6] =
    FUNC_11(VAR_4, FUNC_1(VAR_6));
   VAR_5->pwm[VAR_6] = FUNC_12(VAR_4,
    FUNC_4(VAR_6));

  }
  for (VAR_6 = 0; VAR_6 < 4; VAR_6++) {
   VAR_5->in_max[VAR_6] =
    FUNC_12(VAR_4, FUNC_9(VAR_6));
   VAR_5->in_min[VAR_6] =
    FUNC_12(VAR_4, FUNC_10(VAR_6));
  }
  VAR_5->fan_timer = FUNC_12(VAR_4, VAR_0);
  VAR_5->last_limits = VAR_2;
 }


 if (FUNC_16(VAR_2, VAR_5->last_updated + 2 * VAR_1)
  || !VAR_5->valid) {
  for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {
   VAR_5->temp[VAR_6] =
    FUNC_12(VAR_4, FUNC_5(VAR_6));
   VAR_5->fan[VAR_6] =
    FUNC_11(VAR_4, FUNC_0(VAR_6));
  }
  for (VAR_6 = 0; VAR_6 < 4; VAR_6++)
   VAR_5->in[VAR_6] =
    FUNC_12(VAR_4, FUNC_8(VAR_6));

  VAR_5->last_updated = VAR_2;
  VAR_5->valid = 1;
 }

 FUNC_15(&VAR_5->update_lock);
 return VAR_5;
}
