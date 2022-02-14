
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u16 ;
struct sp8870_state {int dummy; } ;
struct TYPE_7__ {scalar_t__ bandwidth; scalar_t__ transmission_mode; } ;
struct TYPE_8__ {TYPE_3__ ofdm; } ;
struct dvb_frontend_parameters {TYPE_4__ u; } ;
struct TYPE_5__ {int (* set_params ) (struct dvb_frontend*,struct dvb_frontend_parameters*) ;} ;
struct TYPE_6__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int ) ;TYPE_1__ tuner_ops; } ;
struct dvb_frontend {TYPE_2__ ops; struct sp8870_state* demodulator_priv; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct dvb_frontend_parameters*,int*) ;
 int FUNC_1 (struct sp8870_state*) ;
 int FUNC_2 (struct sp8870_state*) ;
 int FUNC_3 (struct sp8870_state*,int) ;
 int FUNC_4 (struct sp8870_state*,int,int) ;
 int FUNC_5 (struct dvb_frontend*,struct dvb_frontend_parameters*) ;
 int FUNC_6 (struct dvb_frontend*,int ) ;

__attribute__((used)) static int FUNC_7 (struct dvb_frontend* VAR_3,
        struct dvb_frontend_parameters *VAR_4)
{
 struct sp8870_state* VAR_5 = VAR_3->demodulator_priv;
 int VAR_6;
 u16 VAR_7;

 if ((VAR_6 = FUNC_0(VAR_4, &VAR_7)))
  return VAR_6;


 FUNC_2(VAR_5);


 if (VAR_3->ops.tuner_ops.set_params) {
  VAR_3->ops.tuner_ops.set_params(VAR_3, VAR_4);
  if (VAR_3->ops.i2c_gate_ctrl) VAR_3->ops.i2c_gate_ctrl(VAR_3, 0);
 }


 FUNC_4(VAR_5, 0x0319, 0x000A);


 FUNC_4(VAR_5, 0x031A, 0x0AAB);


 FUNC_4(VAR_5, 0x0309, 0x0400);


 FUNC_4(VAR_5, 0x030A, 0x0000);


 if (VAR_4->u.ofdm.bandwidth == VAR_0)
  FUNC_4(VAR_5, 0x0311, 0x0002);
 else if (VAR_4->u.ofdm.bandwidth == VAR_1)
  FUNC_4(VAR_5, 0x0311, 0x0001);
 else
  FUNC_4(VAR_5, 0x0311, 0x0000);


 if (VAR_4->u.ofdm.transmission_mode == VAR_2)
  FUNC_4(VAR_5, 0x0338, 0x0000);
 else
  FUNC_4(VAR_5, 0x0338, 0x0001);

 FUNC_4(VAR_5, 0xc05, VAR_7);


 FUNC_3(VAR_5, 0x200);


 FUNC_1(VAR_5);

 return 0;
}
