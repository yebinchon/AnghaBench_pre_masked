
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int symbol_rate; int fec_inner; } ;
struct TYPE_7__ {TYPE_1__ qpsk; } ;
struct dvb_frontend_parameters {TYPE_2__ u; int inversion; int frequency; } ;
struct TYPE_8__ {int (* set_params ) (struct dvb_frontend*,struct dvb_frontend_parameters*) ;} ;
struct TYPE_9__ {TYPE_3__ tuner_ops; } ;
struct dvb_frontend {TYPE_4__ ops; struct cx24123_state* demodulator_priv; } ;
struct cx24123_state {TYPE_5__* config; int currentsymbolrate; int currentfreq; } ;
struct TYPE_10__ {int (* agc_callback ) (struct dvb_frontend*) ;int dont_use_pll; int (* set_ts_params ) (struct dvb_frontend*,int ) ;} ;


 int FUNC_0 (struct dvb_frontend*,struct dvb_frontend_parameters*) ;
 int FUNC_1 (struct cx24123_state*,int) ;
 int FUNC_2 (struct cx24123_state*,int ) ;
 int FUNC_3 (struct cx24123_state*,int ) ;
 int FUNC_4 (struct cx24123_state*,int ) ;
 int FUNC_5 (struct cx24123_state*,int,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct dvb_frontend*,int ) ;
 int FUNC_9 (struct dvb_frontend*,struct dvb_frontend_parameters*) ;
 int FUNC_10 (struct dvb_frontend*) ;

__attribute__((used)) static int FUNC_11(struct dvb_frontend *VAR_0,
 struct dvb_frontend_parameters *VAR_1)
{
 struct cx24123_state *VAR_2 = VAR_0->demodulator_priv;

 FUNC_6("\n");

 if (VAR_2->config->set_ts_params)
  VAR_2->config->set_ts_params(VAR_0, 0);

 VAR_2->currentfreq = VAR_1->frequency;
 VAR_2->currentsymbolrate = VAR_1->u.qpsk.symbol_rate;

 FUNC_3(VAR_2, VAR_1->inversion);
 FUNC_2(VAR_2, VAR_1->u.qpsk.fec_inner);
 FUNC_4(VAR_2, VAR_1->u.qpsk.symbol_rate);

 if (!VAR_2->config->dont_use_pll)
  FUNC_0(VAR_0, VAR_1);
 else if (VAR_0->ops.tuner_ops.set_params)
  VAR_0->ops.tuner_ops.set_params(VAR_0, VAR_1);
 else
  FUNC_7("it seems I don't have a tuner...");


 FUNC_5(VAR_2, 0x03, (FUNC_1(VAR_2, 0x03) | 0x07));
 FUNC_5(VAR_2, 0x00, 0x10);
 FUNC_5(VAR_2, 0x00, 0);

 if (VAR_2->config->agc_callback)
  VAR_2->config->agc_callback(VAR_0);

 return 0;
}
