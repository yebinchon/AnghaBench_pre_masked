
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct f71882fg_data {scalar_t__ type; int valid; int temp_start; int* temp_type; int update_lock; void* last_updated; void** in; void* in_status; void** fan; void** pwm; void** fan_full_speed; void** fan_target; void* fan_status; int * temp; void* temp_diode_open; void* temp_status; void* last_limits; void*** pwm_auto_point_temp; void*** pwm_auto_point_pwm; void** pwm_auto_point_mapping; void** pwm_auto_point_hyst; void* pwm_enable; void* temp_beep; void* fan_beep; void** temp_hyst; void** temp_high; void** temp_ovt; void* in_beep; void* in1_max; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int,int) ;
 int FUNC_8 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct f71882fg_data* FUNC_12 (struct device*) ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 void* FUNC_13 (struct f71882fg_data*,int ) ;
 void* FUNC_14 (struct f71882fg_data*,int ) ;
 int FUNC_15 (struct f71882fg_data*,int) ;
 scalar_t__ VAR_15 ;
 void* VAR_16 ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 scalar_t__ FUNC_18 (void*,void*) ;

__attribute__((used)) static struct f71882fg_data *FUNC_19(struct device *VAR_17)
{
 struct f71882fg_data *VAR_18 = FUNC_12(VAR_17);
 int VAR_19, VAR_20 = 0, VAR_21;
 int VAR_22 = (VAR_18->type == VAR_14) ? 4 : 3;
 int VAR_23 = (VAR_18->type == VAR_12 || VAR_18->type == VAR_15) ? 3 : 9;

 FUNC_16(&VAR_18->update_lock);


 if ( FUNC_18(VAR_16, VAR_18->last_limits + 60 * VAR_11 ) ||
   !VAR_18->valid) {
  if (VAR_18->type == VAR_14) {
   VAR_18->in1_max =
    FUNC_14(VAR_18, VAR_2);
   VAR_18->in_beep =
    FUNC_14(VAR_18, VAR_3);
  }


  for (VAR_19 = VAR_18->temp_start; VAR_19 < 3 + VAR_18->temp_start; VAR_19++) {
   VAR_18->temp_ovt[VAR_19] = FUNC_14(VAR_18,
      FUNC_11(VAR_19));
   VAR_18->temp_high[VAR_19] = FUNC_14(VAR_18,
      FUNC_9(VAR_19));
  }

  if (VAR_18->type != VAR_15) {
   VAR_18->temp_hyst[0] = FUNC_14(VAR_18,
      FUNC_10(0));
   VAR_18->temp_hyst[1] = FUNC_14(VAR_18,
      FUNC_10(1));
  }

  if (VAR_18->type == VAR_13 || VAR_18->type == VAR_14) {
   VAR_18->fan_beep = FUNC_14(VAR_18,
      VAR_0);
   VAR_18->temp_beep = FUNC_14(VAR_18,
      VAR_7);

   VAR_20 = FUNC_14(VAR_18, VAR_10);
   VAR_18->temp_type[2] = (VAR_20 & 0x04) ? 2 : 4;
   VAR_18->temp_type[3] = (VAR_20 & 0x08) ? 2 : 4;
  }
  VAR_21 = FUNC_14(VAR_18, VAR_5);
  if ((VAR_21 & 0x03) == 0x01)
   VAR_18->temp_type[1] = 6 ;
  else if ((VAR_21 & 0x03) == 0x02)
   VAR_18->temp_type[1] = 5 ;
  else if (VAR_18->type == VAR_13 || VAR_18->type == VAR_14)
   VAR_18->temp_type[1] = (VAR_20 & 0x02) ? 2 : 4;
  else
   VAR_18->temp_type[1] = 2;

  VAR_18->pwm_enable = FUNC_14(VAR_18,
        VAR_6);
  VAR_18->pwm_auto_point_hyst[0] =
   FUNC_14(VAR_18, FUNC_2(0));
  VAR_18->pwm_auto_point_hyst[1] =
   FUNC_14(VAR_18, FUNC_2(1));

  for (VAR_19 = 0; VAR_19 < VAR_22; VAR_19++) {
   VAR_18->pwm_auto_point_mapping[VAR_19] =
       FUNC_14(VAR_18,
        FUNC_5(VAR_19));

   if (VAR_18->type != VAR_13) {
    int VAR_24;
    for (VAR_24 = 0; VAR_24 < 5; VAR_24++) {
     VAR_18->pwm_auto_point_pwm[VAR_19][VAR_24] =
      FUNC_14(VAR_18,
       FUNC_6
       (VAR_19, VAR_24));
    }
    for (VAR_24 = 0; VAR_24 < 4; VAR_24++) {
     VAR_18->pwm_auto_point_temp[VAR_19][VAR_24] =
      FUNC_14(VAR_18,
       FUNC_7
       (VAR_19, VAR_24));
    }
   } else {
    VAR_18->pwm_auto_point_pwm[VAR_19][1] =
     FUNC_14(VAR_18,
      FUNC_6
      (VAR_19, 1));
    VAR_18->pwm_auto_point_pwm[VAR_19][4] =
     FUNC_14(VAR_18,
      FUNC_6
      (VAR_19, 4));
    VAR_18->pwm_auto_point_temp[VAR_19][0] =
     FUNC_14(VAR_18,
      FUNC_7
      (VAR_19, 0));
    VAR_18->pwm_auto_point_temp[VAR_19][3] =
     FUNC_14(VAR_18,
      FUNC_7
      (VAR_19, 3));
   }
  }
  VAR_18->last_limits = VAR_16;
 }


 if (FUNC_18(VAR_16, VAR_18->last_updated + VAR_11) || !VAR_18->valid) {
  VAR_18->temp_status = FUNC_14(VAR_18,
      VAR_9);
  VAR_18->temp_diode_open = FUNC_14(VAR_18,
      VAR_8);
  for (VAR_19 = VAR_18->temp_start; VAR_19 < 3 + VAR_18->temp_start; VAR_19++)
   VAR_18->temp[VAR_19] = FUNC_15(VAR_18, VAR_19);

  VAR_18->fan_status = FUNC_14(VAR_18,
      VAR_1);
  for (VAR_19 = 0; VAR_19 < VAR_22; VAR_19++) {
   VAR_18->fan[VAR_19] = FUNC_13(VAR_18,
      FUNC_0(VAR_19));
   VAR_18->fan_target[VAR_19] =
       FUNC_13(VAR_18, FUNC_3(VAR_19));
   VAR_18->fan_full_speed[VAR_19] =
       FUNC_13(VAR_18,
         FUNC_1(VAR_19));
   VAR_18->pwm[VAR_19] =
       FUNC_14(VAR_18, FUNC_8(VAR_19));
  }


  if (VAR_18->type == VAR_15)
   VAR_18->fan[3] = FUNC_13(VAR_18,
      FUNC_0(3));
  if (VAR_18->type == VAR_14)
   VAR_18->in_status = FUNC_14(VAR_18,
      VAR_4);
  for (VAR_19 = 0; VAR_19 < VAR_23; VAR_19++)
   VAR_18->in[VAR_19] = FUNC_14(VAR_18,
      FUNC_4(VAR_19));

  VAR_18->last_updated = VAR_16;
  VAR_18->valid = 1;
 }

 FUNC_17(&VAR_18->update_lock);

 return VAR_18;
}
