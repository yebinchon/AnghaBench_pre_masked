
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct or51211_state {scalar_t__ current_frequency; } ;
struct dvb_frontend_parameters {scalar_t__ frequency; } ;
struct TYPE_3__ {int (* set_params ) (struct dvb_frontend*,struct dvb_frontend_parameters*) ;} ;
struct TYPE_4__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int ) ;TYPE_1__ tuner_ops; } ;
struct dvb_frontend {TYPE_2__ ops; struct or51211_state* demodulator_priv; } ;


 int FUNC_0 (struct dvb_frontend*,int ) ;
 int FUNC_1 (struct dvb_frontend*,struct dvb_frontend_parameters*) ;
 int FUNC_2 (struct dvb_frontend*,int ) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend* VAR_0,
      struct dvb_frontend_parameters *VAR_1)
{
 struct or51211_state* VAR_2 = VAR_0->demodulator_priv;


 if (VAR_2->current_frequency != VAR_1->frequency) {
  if (VAR_0->ops.tuner_ops.set_params) {
   VAR_0->ops.tuner_ops.set_params(VAR_0, VAR_1);
   if (VAR_0->ops.i2c_gate_ctrl) VAR_0->ops.i2c_gate_ctrl(VAR_0, 0);
  }


  FUNC_0(VAR_0,0);


  VAR_2->current_frequency = VAR_1->frequency;
 }
 return 0;
}
