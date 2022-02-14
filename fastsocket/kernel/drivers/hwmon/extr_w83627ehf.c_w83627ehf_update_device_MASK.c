
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83627ehf_data {int valid; int in_num; int* in; int* in_min; int* in_max; int has_fan; int* fan; int* fan_min; int* fan_div; int* pwm_mode; int* pwm_enable; int* pwm; int* fan_min_output; int* fan_stop_time; int* target_temp; int* tolerance; int temp1; int temp1_max; int temp1_max_hyst; int* temp; int* temp_max; int* temp_max_hyst; int alarms; int update_lock; scalar_t__ last_updated; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int* VAR_1 ;
 int* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int * VAR_17 ;
 int * VAR_18 ;
 int * VAR_19 ;
 int FUNC_3 (struct device*,char*,int,int ,int ) ;
 struct w83627ehf_data* FUNC_4 (struct device*) ;
 int FUNC_5 (int) ;
 scalar_t__ VAR_20 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (scalar_t__,scalar_t__) ;
 int FUNC_9 (struct w83627ehf_data*,int ) ;
 int FUNC_10 (struct w83627ehf_data*) ;
 int FUNC_11 (struct w83627ehf_data*,int) ;
 int FUNC_12 (struct w83627ehf_data*,int ,int) ;

__attribute__((used)) static struct w83627ehf_data *FUNC_13(struct device *VAR_21)
{
 struct w83627ehf_data *VAR_22 = FUNC_4(VAR_21);
 int VAR_23 = 0, VAR_24 = 0;
 int VAR_25;

 FUNC_6(&VAR_22->update_lock);

 if (FUNC_8(VAR_20, VAR_22->last_updated + VAR_0 + VAR_0/2)
  || !VAR_22->valid) {

  FUNC_10(VAR_22);


  for (VAR_25 = 0; VAR_25 < VAR_22->in_num; VAR_25++) {
   VAR_22->in[VAR_25] = FUNC_9(VAR_22,
          FUNC_0(VAR_25));
   VAR_22->in_min[VAR_25] = FUNC_9(VAR_22,
       FUNC_2(VAR_25));
   VAR_22->in_max[VAR_25] = FUNC_9(VAR_22,
       FUNC_1(VAR_25));
  }


  for (VAR_25 = 0; VAR_25 < 5; VAR_25++) {
   if (!(VAR_22->has_fan & (1 << VAR_25)))
    continue;

   VAR_22->fan[VAR_25] = FUNC_9(VAR_22,
           VAR_6[VAR_25]);
   VAR_22->fan_min[VAR_25] = FUNC_9(VAR_22,
        VAR_7[VAR_25]);




   if (VAR_22->fan[VAR_25] == 0xff
    && VAR_22->fan_div[VAR_25] < 0x07) {
     FUNC_3(VAR_21, "Increasing fan%d "
     "clock divider from %u to %u\n",
     VAR_25 + 1, FUNC_5(VAR_22->fan_div[VAR_25]),
     FUNC_5(VAR_22->fan_div[VAR_25] + 1));
    VAR_22->fan_div[VAR_25]++;
    FUNC_11(VAR_22, VAR_25);

    if (VAR_22->fan_min[VAR_25] >= 2
     && VAR_22->fan_min[VAR_25] != 255)
     FUNC_12(VAR_22,
      VAR_7[VAR_25],
      (VAR_22->fan_min[VAR_25] /= 2));
   }
  }

  for (VAR_25 = 0; VAR_25 < 4; VAR_25++) {

   if (VAR_25 != 1) {
    VAR_23 = FUNC_9(VAR_22,
      VAR_11[VAR_25]);
    VAR_24 = FUNC_9(VAR_22,
      VAR_19[VAR_25]);
   }
   VAR_22->pwm_mode[VAR_25] =
    ((VAR_23 >> VAR_2[VAR_25]) & 1)
    ? 0 : 1;
   VAR_22->pwm_enable[VAR_25] =
     ((VAR_23 >> VAR_1[VAR_25])
      & 3) + 1;
   VAR_22->pwm[VAR_25] = FUNC_9(VAR_22,
      VAR_10[VAR_25]);
   VAR_22->fan_min_output[VAR_25] = FUNC_9(VAR_22,
      VAR_8[VAR_25]);
   VAR_22->fan_stop_time[VAR_25] = FUNC_9(VAR_22,
      VAR_9[VAR_25]);
   VAR_22->target_temp[VAR_25] =
    FUNC_9(VAR_22,
     VAR_12[VAR_25]) &
     (VAR_22->pwm_mode[VAR_25] == 1 ? 0x7f : 0xff);
   VAR_22->tolerance[VAR_25] = (VAR_24 >> (VAR_25 == 1 ? 4 : 0))
         & 0x0f;
  }


  VAR_22->temp1 = FUNC_9(VAR_22,
         VAR_14);
  VAR_22->temp1_max = FUNC_9(VAR_22,
      VAR_16);
  VAR_22->temp1_max_hyst = FUNC_9(VAR_22,
           VAR_15);
  for (VAR_25 = 0; VAR_25 < 2; VAR_25++) {
   VAR_22->temp[VAR_25] = FUNC_9(VAR_22,
     VAR_13[VAR_25]);
   VAR_22->temp_max[VAR_25] = FUNC_9(VAR_22,
         VAR_18[VAR_25]);
   VAR_22->temp_max_hyst[VAR_25] = FUNC_9(VAR_22,
       VAR_17[VAR_25]);
  }

  VAR_22->alarms = FUNC_9(VAR_22,
     VAR_3) |
          (FUNC_9(VAR_22,
     VAR_4) << 8) |
          (FUNC_9(VAR_22,
     VAR_5) << 16);

  VAR_22->last_updated = VAR_20;
  VAR_22->valid = 1;
 }

 FUNC_7(&VAR_22->update_lock);
 return VAR_22;
}
