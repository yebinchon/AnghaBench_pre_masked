
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct sp887x_state {int dummy; } ;
struct TYPE_7__ {scalar_t__ bandwidth; scalar_t__ transmission_mode; } ;
struct TYPE_8__ {TYPE_3__ ofdm; } ;
struct dvb_frontend_parameters {unsigned int frequency; TYPE_4__ u; } ;
struct TYPE_5__ {int (* get_frequency ) (struct dvb_frontend*,unsigned int*) ;int (* set_params ) (struct dvb_frontend*,struct dvb_frontend_parameters*) ;} ;
struct TYPE_6__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int ) ;TYPE_1__ tuner_ops; } ;
struct dvb_frontend {TYPE_2__ ops; struct sp887x_state* demodulator_priv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct dvb_frontend_parameters*,int*) ;
 int FUNC_1 (struct sp887x_state*,struct dvb_frontend_parameters*,unsigned int) ;
 int FUNC_2 (struct sp887x_state*) ;
 int FUNC_3 (struct sp887x_state*) ;
 int FUNC_4 (struct sp887x_state*,int) ;
 int FUNC_5 (struct sp887x_state*,int,int) ;
 int FUNC_6 (struct dvb_frontend*,struct dvb_frontend_parameters*) ;
 int FUNC_7 (struct dvb_frontend*,int ) ;
 int FUNC_8 (struct dvb_frontend*,unsigned int*) ;
 int FUNC_9 (struct dvb_frontend*,int ) ;

__attribute__((used)) static int FUNC_10 (struct dvb_frontend* VAR_5,
          struct dvb_frontend_parameters *VAR_6)
{
 struct sp887x_state* VAR_7 = VAR_5->demodulator_priv;
 unsigned VAR_8;
 int VAR_9;
 u16 VAR_10, VAR_11;

 if (VAR_6->u.ofdm.bandwidth != VAR_2 &&
     VAR_6->u.ofdm.bandwidth != VAR_1 &&
     VAR_6->u.ofdm.bandwidth != VAR_0)
  return -VAR_3;

 if ((VAR_9 = FUNC_0(VAR_6, &VAR_11)))
  return VAR_9;

 FUNC_3(VAR_7);


 if (VAR_5->ops.tuner_ops.set_params) {
  VAR_5->ops.tuner_ops.set_params(VAR_5, VAR_6);
  if (VAR_5->ops.i2c_gate_ctrl) VAR_5->ops.i2c_gate_ctrl(VAR_5, 0);
 }
 if (VAR_5->ops.tuner_ops.get_frequency) {
  VAR_5->ops.tuner_ops.get_frequency(VAR_5, &VAR_8);
  if (VAR_5->ops.i2c_gate_ctrl) VAR_5->ops.i2c_gate_ctrl(VAR_5, 0);
 } else {
  VAR_8 = VAR_6->frequency;
 }


 FUNC_4(VAR_7, 0x200);

 FUNC_1(VAR_7, VAR_6, VAR_8);


 if (VAR_6->u.ofdm.bandwidth == VAR_0)
  VAR_10 = 2;
 else if (VAR_6->u.ofdm.bandwidth == VAR_1)
  VAR_10 = 1;
 else
  VAR_10 = 0;

 FUNC_5(VAR_7, 0x311, VAR_10);


 if (VAR_6->u.ofdm.transmission_mode == VAR_4)
  FUNC_5(VAR_7, 0x338, 0x000);
 else
  FUNC_5(VAR_7, 0x338, 0x001);

 FUNC_5(VAR_7, 0xc05, VAR_11);

 if (VAR_6->u.ofdm.bandwidth == VAR_0)
  VAR_10 = 2 << 3;
 else if (VAR_6->u.ofdm.bandwidth == VAR_1)
  VAR_10 = 3 << 3;
 else
  VAR_10 = 0 << 3;




 FUNC_5(VAR_7, 0xf14, 0x160 | VAR_10);
 FUNC_5(VAR_7, 0xf15, 0x000);

 FUNC_2(VAR_7);
 return 0;
}
