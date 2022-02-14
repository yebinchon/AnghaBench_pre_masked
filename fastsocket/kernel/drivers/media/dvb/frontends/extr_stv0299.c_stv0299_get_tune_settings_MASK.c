
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct stv0299_state {TYPE_1__* config; } ;
struct TYPE_6__ {int symbol_rate; } ;
struct TYPE_7__ {TYPE_2__ qpsk; } ;
struct TYPE_8__ {TYPE_3__ u; } ;
struct dvb_frontend_tune_settings {int step_size; int max_drift; TYPE_4__ parameters; int min_delay_ms; } ;
struct dvb_frontend {struct stv0299_state* demodulator_priv; } ;
struct TYPE_5__ {int min_delay_ms; } ;



__attribute__((used)) static int FUNC_0(struct dvb_frontend* VAR_0, struct dvb_frontend_tune_settings* VAR_1)
{
 struct stv0299_state* VAR_2 = VAR_0->demodulator_priv;

 VAR_1->min_delay_ms = VAR_2->config->min_delay_ms;
 if (VAR_1->parameters.u.qpsk.symbol_rate < 10000000) {
  VAR_1->step_size = VAR_1->parameters.u.qpsk.symbol_rate / 32000;
  VAR_1->max_drift = 5000;
 } else {
  VAR_1->step_size = VAR_1->parameters.u.qpsk.symbol_rate / 16000;
  VAR_1->max_drift = VAR_1->parameters.u.qpsk.symbol_rate / 2000;
 }
 return 0;
}
