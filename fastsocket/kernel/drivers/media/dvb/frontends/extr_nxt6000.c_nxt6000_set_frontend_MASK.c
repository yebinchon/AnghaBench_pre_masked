
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct nxt6000_state {int dummy; } ;
struct TYPE_7__ {int transmission_mode; int guard_interval; int bandwidth; } ;
struct TYPE_8__ {TYPE_3__ ofdm; } ;
struct dvb_frontend_parameters {int inversion; TYPE_4__ u; } ;
struct TYPE_5__ {int (* set_params ) (struct dvb_frontend*,struct dvb_frontend_parameters*) ;} ;
struct TYPE_6__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int ) ;TYPE_1__ tuner_ops; } ;
struct dvb_frontend {TYPE_2__ ops; struct nxt6000_state* demodulator_priv; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct nxt6000_state*,int ) ;
 int FUNC_2 (struct nxt6000_state*,int ) ;
 int FUNC_3 (struct nxt6000_state*,int ) ;
 int FUNC_4 (struct nxt6000_state*,int ) ;
 int FUNC_5 (struct dvb_frontend*,struct dvb_frontend_parameters*) ;
 int FUNC_6 (struct dvb_frontend*,int ) ;

__attribute__((used)) static int FUNC_7(struct dvb_frontend* VAR_0, struct dvb_frontend_parameters *VAR_1)
{
 struct nxt6000_state* VAR_2 = VAR_0->demodulator_priv;
 int VAR_3;

 if (VAR_0->ops.tuner_ops.set_params) {
  VAR_0->ops.tuner_ops.set_params(VAR_0, VAR_1);
  if (VAR_0->ops.i2c_gate_ctrl) VAR_0->ops.i2c_gate_ctrl(VAR_0, 0);
 }

 if ((VAR_3 = FUNC_1(VAR_2, VAR_1->u.ofdm.bandwidth)) < 0)
  return VAR_3;
 if ((VAR_3 = FUNC_2(VAR_2, VAR_1->u.ofdm.guard_interval)) < 0)
  return VAR_3;
 if ((VAR_3 = FUNC_4(VAR_2, VAR_1->u.ofdm.transmission_mode)) < 0)
  return VAR_3;
 if ((VAR_3 = FUNC_3(VAR_2, VAR_1->inversion)) < 0)
  return VAR_3;

 FUNC_0(500);
 return 0;
}
