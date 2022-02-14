
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tda8083_state {int dummy; } ;
struct TYPE_5__ {int symbol_rate; int fec_inner; } ;
struct TYPE_6__ {TYPE_1__ qpsk; } ;
struct dvb_frontend_parameters {TYPE_2__ u; int inversion; } ;
struct TYPE_7__ {int (* set_params ) (struct dvb_frontend*,struct dvb_frontend_parameters*) ;} ;
struct TYPE_8__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int ) ;TYPE_3__ tuner_ops; } ;
struct dvb_frontend {TYPE_4__ ops; struct tda8083_state* demodulator_priv; } ;


 int FUNC_0 (struct dvb_frontend*,struct dvb_frontend_parameters*) ;
 int FUNC_1 (struct dvb_frontend*,int ) ;
 int FUNC_2 (struct tda8083_state*,int ) ;
 int FUNC_3 (struct tda8083_state*,int ) ;
 int FUNC_4 (struct tda8083_state*,int ) ;
 int FUNC_5 (struct tda8083_state*,int,int) ;

__attribute__((used)) static int FUNC_6(struct dvb_frontend* VAR_0, struct dvb_frontend_parameters *VAR_1)
{
 struct tda8083_state* VAR_2 = VAR_0->demodulator_priv;

 if (VAR_0->ops.tuner_ops.set_params) {
  VAR_0->ops.tuner_ops.set_params(VAR_0, VAR_1);
  if (VAR_0->ops.i2c_gate_ctrl) VAR_0->ops.i2c_gate_ctrl(VAR_0, 0);
 }

 FUNC_3 (VAR_2, VAR_1->inversion);
 FUNC_2 (VAR_2, VAR_1->u.qpsk.fec_inner);
 FUNC_4 (VAR_2, VAR_1->u.qpsk.symbol_rate);

 FUNC_5 (VAR_2, 0x00, 0x3c);
 FUNC_5 (VAR_2, 0x00, 0x04);

 return 0;
}
