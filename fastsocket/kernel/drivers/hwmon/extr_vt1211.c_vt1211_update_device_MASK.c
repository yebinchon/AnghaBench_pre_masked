
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt1211_data {int valid; int vid; int* in; int* in_min; int* in_max; int* temp; int* temp_max; int* temp_hyst; int* fan; int* fan_min; int* pwm; int* fan_div; int fan_ctl; int* pwm_ctl; int pwm_clk; int** pwm_auto_pwm; int* pwm_auto_temp; int alarms; int update_lock; scalar_t__ last_updated; int uch_config; } ;
struct device {int dummy; } ;


 int FUNC_0 (int*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int) ;
 int VAR_3 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int,int) ;
 int FUNC_10 (int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct vt1211_data* FUNC_11 (struct device*) ;
 scalar_t__ VAR_7 ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 scalar_t__ FUNC_14 (scalar_t__,scalar_t__) ;
 int FUNC_15 (struct vt1211_data*,int ) ;

__attribute__((used)) static struct vt1211_data *FUNC_16(struct device *VAR_11)
{
 struct vt1211_data *VAR_12 = FUNC_11(VAR_11);
 int VAR_13, VAR_14;

 FUNC_12(&VAR_12->update_lock);


 if (FUNC_14(VAR_7, VAR_12->last_updated + VAR_0) || !VAR_12->valid) {

  VAR_12->vid = FUNC_15(VAR_12, VAR_6) & 0x1f;


  for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_12->in); VAR_13++) {
   if (FUNC_2(VAR_13, VAR_12->uch_config)) {
    VAR_12->in[VAR_13] = FUNC_15(VAR_12,
      FUNC_5(VAR_13));
    VAR_12->in_min[VAR_13] = FUNC_15(VAR_12,
      FUNC_7(VAR_13));
    VAR_12->in_max[VAR_13] = FUNC_15(VAR_12,
      FUNC_6(VAR_13));
   }
  }


  for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_12->temp); VAR_13++) {
   if (FUNC_1(VAR_13, VAR_12->uch_config)) {
    VAR_12->temp[VAR_13] = FUNC_15(VAR_12,
      VAR_8[VAR_13]);
    VAR_12->temp_max[VAR_13] = FUNC_15(VAR_12,
      VAR_10[VAR_13]);
    VAR_12->temp_hyst[VAR_13] = FUNC_15(VAR_12,
      VAR_9[VAR_13]);
   }
  }


  for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_12->fan); VAR_13++) {
   VAR_12->fan[VAR_13] = FUNC_15(VAR_12,
      FUNC_3(VAR_13));
   VAR_12->fan_min[VAR_13] = FUNC_15(VAR_12,
      FUNC_4(VAR_13));
   VAR_12->pwm[VAR_13] = FUNC_15(VAR_12,
      FUNC_8(VAR_13));
  }
  VAR_14 = FUNC_15(VAR_12, VAR_3);
  VAR_12->fan_div[0] = (VAR_14 >> 4) & 3;
  VAR_12->fan_div[1] = (VAR_14 >> 6) & 3;
  VAR_12->fan_ctl = VAR_14 & 0xf;

  VAR_14 = FUNC_15(VAR_12, VAR_5);
  VAR_12->pwm_ctl[0] = VAR_14 & 0xf;
  VAR_12->pwm_ctl[1] = (VAR_14 >> 4) & 0xf;

  VAR_12->pwm_clk = FUNC_15(VAR_12, VAR_4);


  VAR_12->pwm_auto_pwm[0][1] = FUNC_15(VAR_12,
      FUNC_9(0, 1));
  VAR_12->pwm_auto_pwm[0][2] = FUNC_15(VAR_12,
      FUNC_9(0, 2));
  VAR_12->pwm_auto_pwm[1][1] = FUNC_15(VAR_12,
      FUNC_9(1, 1));
  VAR_12->pwm_auto_pwm[1][2] = FUNC_15(VAR_12,
      FUNC_9(1, 2));
  for (VAR_13 = 0; VAR_13 < FUNC_0(VAR_12->pwm_auto_temp); VAR_13++) {
   VAR_12->pwm_auto_temp[VAR_13] = FUNC_15(VAR_12,
      FUNC_10(VAR_13));
  }


  VAR_12->alarms = (FUNC_15(VAR_12, VAR_2) << 8) |
    FUNC_15(VAR_12, VAR_1);

  VAR_12->last_updated = VAR_7;
  VAR_12->valid = 1;
 }

 FUNC_13(&VAR_12->update_lock);

 return VAR_12;
}
