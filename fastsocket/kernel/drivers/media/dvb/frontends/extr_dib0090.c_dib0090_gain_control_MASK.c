
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef scalar_t__ u16 ;
struct dvb_frontend {scalar_t__ id; struct dib0090_state* tuner_priv; } ;
struct dib0090_state {int tune_state; scalar_t__ current_band; int rf_gain_limit; int* rf_ramp; int current_gain; int* bb_ramp; scalar_t__ wbd_target; int rf_lt_def; scalar_t__ agc_freeze; TYPE_4__* fe; scalar_t__ agc_step; TYPE_1__* config; int current_rf; } ;
typedef int s32 ;
typedef scalar_t__ s16 ;
typedef enum frontend_tune_state { ____Placeholder_frontend_tune_state } frontend_tune_state ;
struct TYPE_7__ {scalar_t__ delivery_system; scalar_t__ modulation; TYPE_2__* layer; } ;
struct TYPE_8__ {TYPE_3__ dtv_property_cache; } ;
struct TYPE_6__ {scalar_t__ segment_count; scalar_t__ modulation; } ;
struct TYPE_5__ {int (* get_adc_power ) (struct dvb_frontend*) ;} ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (struct dib0090_state*,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_2 (struct dib0090_state*,int) ;
 int FUNC_3 (struct dib0090_state*,int ) ;
 int FUNC_4 (struct dib0090_state*,int ) ;
 int FUNC_5 (struct dib0090_state*,int ) ;
 scalar_t__ FUNC_6 (struct dib0090_state*,scalar_t__) ;
 int FUNC_7 (struct dib0090_state*,int,int) ;
 int FUNC_8 (char*,int,int,int,int,int,int,int,int,int) ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_9 (struct dvb_frontend*) ;

int FUNC_10(struct dvb_frontend *VAR_20)
{
 struct dib0090_state *VAR_21 = VAR_20->tuner_priv;
 enum frontend_tune_state *VAR_22 = &VAR_21->tune_state;
 int VAR_23 = 10;

 u16 VAR_24 = 0;
 u8 VAR_25 = 1;
 s16 VAR_26 = 0, VAR_27 = 0;

 if (*VAR_22 == VAR_4) {
  VAR_21->agc_freeze = 0;
  FUNC_7(VAR_21, 0x04, 0x0);
  {
   FUNC_4(VAR_21, VAR_18);
   FUNC_3(VAR_21, VAR_15);
  }

  FUNC_7(VAR_21, 0x32, 0);
  FUNC_7(VAR_21, 0x39, 0);

  FUNC_5(VAR_21, VAR_21->current_rf);

  VAR_21->rf_gain_limit = VAR_21->rf_ramp[0] << VAR_14;
  VAR_21->current_gain = ((VAR_21->rf_ramp[0] + VAR_21->bb_ramp[0]) / 2) << VAR_8;

  *VAR_22 = VAR_5;
 } else if (!VAR_21->agc_freeze) {
  s16 VAR_28;

  int VAR_29;
  VAR_24 = FUNC_2(VAR_21, 0x1d);


  VAR_28 = FUNC_6(VAR_21, VAR_24);
  VAR_26 = VAR_21->wbd_target - VAR_28;

  if (*VAR_22 == VAR_5) {
   if (VAR_26 < 0 && VAR_21->rf_gain_limit > 0) {
   } else {
    VAR_21->agc_step = 0;
    *VAR_22 = VAR_6;
   }
  } else {

   VAR_29 = VAR_21->config->get_adc_power(VAR_20);
   VAR_29 = (VAR_29 * ((s32) 355774) + (((s32) 1) << 20)) >> 21;

   VAR_27 = (s16) (((s32) VAR_0) - VAR_29);
   if (*VAR_22 == VAR_6) {
    if (FUNC_0(VAR_27) < 50 || VAR_21->agc_step++ > 5) {







     {
      FUNC_7(VAR_21, 0x02, (1 << 15) | (3 << 11) | (6 << 6) | (32));
      FUNC_7(VAR_21, 0x04, 0x01);
     }

     *VAR_22 = VAR_7;
    }
   } else {

    VAR_23 = 100;
    VAR_25 = 0;
   }
  }






 }


 if (!VAR_21->agc_freeze)
  FUNC_1(VAR_21, VAR_27, VAR_26, VAR_25);
 return VAR_23;
}
