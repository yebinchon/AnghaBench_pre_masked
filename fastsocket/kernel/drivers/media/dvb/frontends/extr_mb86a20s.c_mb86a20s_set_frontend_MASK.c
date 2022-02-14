
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mb86a20s_state {scalar_t__ need_init; } ;
struct dvb_frontend_parameters {int dummy; } ;
struct TYPE_3__ {int (* set_params ) (struct dvb_frontend*,struct dvb_frontend_parameters*) ;} ;
struct TYPE_4__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int) ;TYPE_1__ tuner_ops; } ;
struct dvb_frontend {TYPE_2__ ops; struct mb86a20s_state* demodulator_priv; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct dvb_frontend*) ;
 int VAR_0 ;
 int FUNC_2 (struct mb86a20s_state*,int ) ;
 int FUNC_3 (struct dvb_frontend*,int) ;
 int FUNC_4 (struct dvb_frontend*,struct dvb_frontend_parameters*) ;
 int FUNC_5 (struct dvb_frontend*,int) ;
 int FUNC_6 (struct dvb_frontend*,int) ;

__attribute__((used)) static int FUNC_7(struct dvb_frontend *VAR_1,
 struct dvb_frontend_parameters *VAR_2)
{
 struct mb86a20s_state *VAR_3 = VAR_1->demodulator_priv;
 int VAR_4;

 FUNC_0("\n");

 if (VAR_1->ops.i2c_gate_ctrl)
  VAR_1->ops.i2c_gate_ctrl(VAR_1, 1);
 FUNC_0("Calling tuner set parameters\n");
 VAR_1->ops.tuner_ops.set_params(VAR_1, VAR_2);
 if (VAR_3->need_init)
  FUNC_1(VAR_1);

 if (VAR_1->ops.i2c_gate_ctrl)
  VAR_1->ops.i2c_gate_ctrl(VAR_1, 0);
 VAR_4 = FUNC_2(VAR_3, VAR_0);
 if (VAR_1->ops.i2c_gate_ctrl)
  VAR_1->ops.i2c_gate_ctrl(VAR_1, 1);

 return VAR_4;
}
