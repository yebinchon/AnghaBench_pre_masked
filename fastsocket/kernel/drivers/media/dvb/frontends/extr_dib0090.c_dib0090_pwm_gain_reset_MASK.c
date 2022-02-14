
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dvb_frontend {struct dib0090_state* tuner_priv; } ;
struct dib0090_state {scalar_t__ current_band; scalar_t__* rf_ramp; TYPE_1__* config; } ;
struct TYPE_2__ {scalar_t__ use_pwm_agc; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct dib0090_state*,int ) ;
 int FUNC_1 (struct dib0090_state*,int ) ;
 int FUNC_2 (struct dib0090_state*,int,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void FUNC_3(struct dvb_frontend *VAR_9)
{
 struct dib0090_state *VAR_10 = VAR_9->tuner_priv;


 if (VAR_10->config->use_pwm_agc) {
  {
   FUNC_1(VAR_10, VAR_7);
   FUNC_0(VAR_10, VAR_4);
  }

  if (VAR_10->rf_ramp[0] != 0)
   FUNC_2(VAR_10, 0x32, (3 << 11));
  else
   FUNC_2(VAR_10, 0x32, (0 << 11));

  FUNC_2(VAR_10, 0x39, (1 << 10));
 }
}
