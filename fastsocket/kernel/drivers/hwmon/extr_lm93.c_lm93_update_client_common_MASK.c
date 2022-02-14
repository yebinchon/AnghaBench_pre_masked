
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lm93_data {int block1; void* sf_tach_to_pwm; void* sfc2; void* sfc1; void* pwm_ramp_ctl; void** auto_pwm_min_hyst; void** boost_hyst; void** boost; void* prochot_interval; void* prochot_override; void* gpi; void** vccp_limits; void** prochot_max; void** vid; void* config; TYPE_1__* temp_lim; } ;
struct i2c_client {int dummy; } ;
struct TYPE_2__ {void* max; void* min; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 void* FUNC_6 (struct i2c_client*,int ) ;
 int FUNC_7 (struct i2c_client*,scalar_t__,int ) ;

__attribute__((used)) static void FUNC_8(struct lm93_data *VAR_13,
          struct i2c_client *VAR_14)
{
 int VAR_15;
 u8 *VAR_16;


 for (VAR_15 = 0; VAR_15 < 4; VAR_15++) {
  VAR_13->temp_lim[VAR_15].min =
   FUNC_6(VAR_14, FUNC_3(VAR_15));
  VAR_13->temp_lim[VAR_15].max =
   FUNC_6(VAR_14, FUNC_2(VAR_15));
 }


 VAR_13->config = FUNC_6(VAR_14, VAR_2);


 for (VAR_15 = 0; VAR_15 < 2; VAR_15++)
  VAR_13->vid[VAR_15] = FUNC_6(VAR_14, FUNC_5(VAR_15));


 for (VAR_15 = 0; VAR_15 < 2; VAR_15++)
  VAR_13->prochot_max[VAR_15] = FUNC_6(VAR_14,
    FUNC_1(VAR_15));


 for (VAR_15 = 0; VAR_15 < 2; VAR_15++)
  VAR_13->vccp_limits[VAR_15] = FUNC_6(VAR_14,
    FUNC_4(VAR_15));


 VAR_13->gpi = FUNC_6(VAR_14, VAR_3);


 VAR_13->prochot_override = FUNC_6(VAR_14,
   VAR_6);


 VAR_13->prochot_interval = FUNC_6(VAR_14,
   VAR_5);


 for (VAR_15 = 0; VAR_15 < 4; VAR_15++)
  VAR_13->boost[VAR_15] = FUNC_6(VAR_14, FUNC_0(VAR_15));


 VAR_13->boost_hyst[0] = FUNC_6(VAR_14, VAR_0);
 VAR_13->boost_hyst[1] = FUNC_6(VAR_14, VAR_1);


 VAR_13->auto_pwm_min_hyst[0] =
   FUNC_6(VAR_14, VAR_7);
 VAR_13->auto_pwm_min_hyst[1] =
   FUNC_6(VAR_14, VAR_8);


 VAR_13->pwm_ramp_ctl = FUNC_6(VAR_14, VAR_9);


 VAR_13->sfc1 = FUNC_6(VAR_14, VAR_10);
 VAR_13->sfc2 = FUNC_6(VAR_14, VAR_11);
 VAR_13->sf_tach_to_pwm = FUNC_6(VAR_14,
   VAR_12);


 for (VAR_15 = 0, VAR_16 = (u8 *)(&VAR_13->block1); VAR_15 < 8; VAR_15++)
  FUNC_7(VAR_14, VAR_4 + VAR_15, *(VAR_16 + VAR_15));
}
