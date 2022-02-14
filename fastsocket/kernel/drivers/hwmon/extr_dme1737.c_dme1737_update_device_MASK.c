
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct dme1737_data {int valid; scalar_t__ type; int vid; int* in; int* in_min; int* in_max; int* temp; int* temp_min; int* temp_max; int* temp_offset; int* fan; int has_fan; int* fan_min; int* fan_opt; int* fan_max; int* pwm; int has_pwm; int* pwm_freq; int* pwm_config; int* pwm_min; int* pwm_rr; int* zone_low; int* zone_abs; int* zone_hyst; int alarms; int update_lock; void* last_update; int client; void* last_vbat; } ;
struct device {int dummy; } ;


 int FUNC_0 (int*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 size_t* VAR_4 ;
 int* VAR_5 ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;
 scalar_t__ FUNC_8 (int) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (int) ;
 scalar_t__ FUNC_11 (int) ;
 scalar_t__ FUNC_12 (int) ;
 scalar_t__ FUNC_13 (int) ;
 scalar_t__ FUNC_14 (int) ;
 size_t* VAR_6 ;
 int* VAR_7 ;
 scalar_t__ FUNC_15 (int) ;
 scalar_t__ FUNC_16 (int) ;
 scalar_t__ FUNC_17 (int) ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_18 (int) ;
 scalar_t__ FUNC_19 (int) ;
 scalar_t__ FUNC_20 (int) ;
 int VAR_9 ;
 struct dme1737_data* FUNC_21 (struct device*) ;
 scalar_t__ VAR_10 ;
 int FUNC_22 (struct dme1737_data*,scalar_t__) ;
 int FUNC_23 (struct dme1737_data*,scalar_t__,int) ;
 void* VAR_11 ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_26 (void*,void*) ;

__attribute__((used)) static struct dme1737_data *FUNC_27(struct device *VAR_13)
{
 struct dme1737_data *VAR_14 = FUNC_21(VAR_13);
 int VAR_15;
 u8 VAR_16[5];

 FUNC_24(&VAR_14->update_lock);


 if (FUNC_26(VAR_11, VAR_14->last_vbat + 600 * VAR_9) || !VAR_14->valid) {
  FUNC_23(VAR_14, VAR_3, FUNC_22(VAR_14,
      VAR_3) | 0x10);
  VAR_14->last_vbat = VAR_11;
 }


 if (FUNC_26(VAR_11, VAR_14->last_update + VAR_9) || !VAR_14->valid) {
  if (VAR_14->type == VAR_10) {
   VAR_14->vid = FUNC_22(VAR_14, VAR_8) &
    0x3f;
  }


  for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_14->in); VAR_15++) {



   VAR_14->in[VAR_15] = FUNC_22(VAR_14,
     FUNC_5(VAR_15)) << 8;
   VAR_14->in_min[VAR_15] = FUNC_22(VAR_14,
     FUNC_7(VAR_15));
   VAR_14->in_max[VAR_15] = FUNC_22(VAR_14,
     FUNC_6(VAR_15));
  }


  for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_14->temp); VAR_15++) {





   VAR_14->temp[VAR_15] = FUNC_22(VAR_14,
     FUNC_14(VAR_15)) << 8;
   VAR_14->temp_min[VAR_15] = FUNC_22(VAR_14,
     FUNC_16(VAR_15));
   VAR_14->temp_max[VAR_15] = FUNC_22(VAR_14,
     FUNC_15(VAR_15));
   if (VAR_14->type != VAR_12) {
    VAR_14->temp_offset[VAR_15] = FUNC_22(VAR_14,
      FUNC_17(VAR_15));
   }
  }





  for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_16); VAR_15++) {
   VAR_16[VAR_15] = FUNC_22(VAR_14,
     FUNC_8(VAR_15));
  }
  for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_14->in); VAR_15++) {
   VAR_14->in[VAR_15] |= (VAR_16[VAR_4[VAR_15]] <<
     VAR_5[VAR_15]) & 0xf0;
  }
  for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_14->temp); VAR_15++) {
   VAR_14->temp[VAR_15] |= (VAR_16[VAR_6[VAR_15]] <<
     VAR_7[VAR_15]) & 0xf0;
  }


  for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_14->fan); VAR_15++) {


   if (!(VAR_14->has_fan & (1 << VAR_15))) {
    continue;
   }
   VAR_14->fan[VAR_15] = FUNC_22(VAR_14,
     FUNC_1(VAR_15));
   VAR_14->fan[VAR_15] |= FUNC_22(VAR_14,
     FUNC_1(VAR_15) + 1) << 8;
   VAR_14->fan_min[VAR_15] = FUNC_22(VAR_14,
     FUNC_3(VAR_15));
   VAR_14->fan_min[VAR_15] |= FUNC_22(VAR_14,
     FUNC_3(VAR_15) + 1) << 8;
   VAR_14->fan_opt[VAR_15] = FUNC_22(VAR_14,
     FUNC_4(VAR_15));

   if (VAR_15 > 3) {
    VAR_14->fan_max[VAR_15 - 4] = FUNC_22(VAR_14,
     FUNC_2(VAR_15));
   }
  }


  for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_14->pwm); VAR_15++) {


   if (!(VAR_14->has_pwm & (1 << VAR_15))) {
    continue;
   }
   VAR_14->pwm[VAR_15] = FUNC_22(VAR_14,
     FUNC_9(VAR_15));
   VAR_14->pwm_freq[VAR_15] = FUNC_22(VAR_14,
     FUNC_11(VAR_15));

   if (VAR_15 < 3) {
    VAR_14->pwm_config[VAR_15] = FUNC_22(VAR_14,
      FUNC_10(VAR_15));
    VAR_14->pwm_min[VAR_15] = FUNC_22(VAR_14,
      FUNC_12(VAR_15));
   }
  }
  for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_14->pwm_rr); VAR_15++) {
   VAR_14->pwm_rr[VAR_15] = FUNC_22(VAR_14,
      FUNC_13(VAR_15));
  }


  for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_14->zone_low); VAR_15++) {
   VAR_14->zone_low[VAR_15] = FUNC_22(VAR_14,
     FUNC_20(VAR_15));
   VAR_14->zone_abs[VAR_15] = FUNC_22(VAR_14,
     FUNC_18(VAR_15));
  }
  if (VAR_14->type != VAR_12) {
   for (VAR_15 = 0; VAR_15 < FUNC_0(VAR_14->zone_hyst); VAR_15++) {
    VAR_14->zone_hyst[VAR_15] = FUNC_22(VAR_14,
      FUNC_19(VAR_15));
   }
  }


  VAR_14->alarms = FUNC_22(VAR_14,
      VAR_0);


  if (VAR_14->alarms & 0x80) {
   VAR_14->alarms |= FUNC_22(VAR_14,
      VAR_1) << 8;
   VAR_14->alarms |= FUNC_22(VAR_14,
      VAR_2) << 16;
  }




  if (!VAR_14->client) {
   if (VAR_14->alarms & 0xff0000) {
    FUNC_23(VAR_14, VAR_2,
           0xff);
   }
   if (VAR_14->alarms & 0xff00) {
    FUNC_23(VAR_14, VAR_1,
           0xff);
   }
   if (VAR_14->alarms & 0xff) {
    FUNC_23(VAR_14, VAR_0,
           0xff);
   }
  }

  VAR_14->last_update = VAR_11;
  VAR_14->valid = 1;
 }

 FUNC_25(&VAR_14->update_lock);

 return VAR_14;
}
