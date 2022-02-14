
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ transmission_mode; scalar_t__ guard_interval; scalar_t__ constellation; scalar_t__ code_rate_HP; } ;
struct TYPE_9__ {TYPE_3__ ofdm; } ;
struct dvb_frontend_parameters {TYPE_4__ u; } ;
struct TYPE_6__ {int (* set_params ) (struct dvb_frontend*,struct dvb_frontend_parameters*) ;} ;
struct TYPE_7__ {TYPE_1__ tuner_ops; } ;
struct dvb_frontend {TYPE_2__ ops; struct dib7000p_state* demodulator_priv; } ;
struct TYPE_10__ {int output_mode; } ;
struct dib7000p_state {TYPE_5__ cfg; scalar_t__ agc_state; int sfn_workaround_active; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct dvb_frontend*,struct dvb_frontend_parameters*) ;
 int FUNC_1 (struct dvb_frontend*) ;
 int FUNC_2 (struct dvb_frontend*,struct dvb_frontend_parameters*) ;
 int FUNC_3 (struct dvb_frontend*,struct dvb_frontend_parameters*) ;
 int FUNC_4 (struct dib7000p_state*,int ) ;
 int FUNC_5 (struct dvb_frontend*,struct dvb_frontend_parameters*) ;
 int FUNC_6 (char*,int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct dvb_frontend*,struct dvb_frontend_parameters*) ;

__attribute__((used)) static int FUNC_9(struct dvb_frontend* VAR_6,
    struct dvb_frontend_parameters *VAR_7)
{
 struct dib7000p_state *VAR_8 = VAR_6->demodulator_priv;
 int VAR_9, VAR_10;

 FUNC_4(VAR_8, VAR_2);


 VAR_8->sfn_workaround_active = VAR_5;

 if (VAR_6->ops.tuner_ops.set_params)
  VAR_6->ops.tuner_ops.set_params(VAR_6, VAR_7);


 VAR_8->agc_state = 0;
 do {
  VAR_9 = FUNC_0(VAR_6, VAR_7);
  if (VAR_9 != -1)
   FUNC_7(VAR_9);
 } while (VAR_9 != -1);

 if (VAR_7->u.ofdm.transmission_mode == VAR_4 ||
  VAR_7->u.ofdm.guard_interval == VAR_1 ||
  VAR_7->u.ofdm.constellation == VAR_3 ||
  VAR_7->u.ofdm.code_rate_HP == VAR_0) {
  int VAR_11 = 800, VAR_12;

  FUNC_2(VAR_6, VAR_7);
  do {
   FUNC_7(1);
   VAR_12 = FUNC_1(VAR_6);
  } while (VAR_12 == 0 && VAR_11--);

  FUNC_6("autosearch returns: %d",VAR_12);
  if (VAR_12 == 0 || VAR_12 == 1)
   return 0;

  FUNC_3(VAR_6, VAR_7);
 }

 VAR_10 = FUNC_5(VAR_6, VAR_7);


 FUNC_4(VAR_8, VAR_8->cfg.output_mode);
    return VAR_10;
}
