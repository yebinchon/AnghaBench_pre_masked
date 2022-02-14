
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct tda10023_state {int dummy; } ;
struct TYPE_7__ {int modulation; int symbol_rate; } ;
struct TYPE_8__ {TYPE_3__ qam; } ;
struct dvb_frontend_parameters {TYPE_4__ u; } ;
struct TYPE_5__ {int (* set_params ) (struct dvb_frontend*,struct dvb_frontend_parameters*) ;} ;
struct TYPE_6__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int ) ;TYPE_1__ tuner_ops; } ;
struct dvb_frontend {TYPE_2__ ops; struct tda10023_state* demodulator_priv; } ;


 int VAR_0 ;
 int FUNC_0 (struct dvb_frontend*,struct dvb_frontend_parameters*) ;
 int FUNC_1 (struct dvb_frontend*,int ) ;
 int FUNC_2 (struct tda10023_state*,int ) ;
 int FUNC_3 (struct tda10023_state*,int) ;
 int FUNC_4 (struct tda10023_state*,int,int,int) ;
 int FUNC_5 (struct tda10023_state*,int,int) ;

__attribute__((used)) static int FUNC_6 (struct dvb_frontend *VAR_1,
       struct dvb_frontend_parameters *VAR_2)
{
 struct tda10023_state* VAR_3 = VAR_1->demodulator_priv;

 static int VAR_4[6][6] = {

  { (5<<2), 0x78, 0x8c, 0x96, 0x78, 0x4c },
  { (0<<2), 0x87, 0xa2, 0x91, 0x8c, 0x57 },
  { (1<<2), 0x64, 0x74, 0x96, 0x8c, 0x57 },
  { (2<<2), 0x46, 0x43, 0x6a, 0x6a, 0x44 },
  { (3<<2), 0x36, 0x34, 0x7e, 0x78, 0x4c },
  { (4<<2), 0x26, 0x23, 0x6c, 0x5c, 0x3c },
 };

 int VAR_5 = VAR_2->u.qam.modulation;

 if (VAR_5 < 0 || VAR_5 > 5)
  return -VAR_0;

 if (VAR_1->ops.tuner_ops.set_params) {
  VAR_1->ops.tuner_ops.set_params(VAR_1, VAR_2);
  if (VAR_1->ops.i2c_gate_ctrl) VAR_1->ops.i2c_gate_ctrl(VAR_1, 0);
 }

 FUNC_2 (VAR_3, VAR_2->u.qam.symbol_rate);
 FUNC_5 (VAR_3, 0x05, VAR_4[VAR_5][1]);
 FUNC_5 (VAR_3, 0x08, VAR_4[VAR_5][2]);
 FUNC_5 (VAR_3, 0x09, VAR_4[VAR_5][3]);
 FUNC_5 (VAR_3, 0xb4, VAR_4[VAR_5][4]);
 FUNC_5 (VAR_3, 0xb6, VAR_4[VAR_5][5]);



 FUNC_4 (VAR_3, 0x04, 0x40, 0x40);
 FUNC_3 (VAR_3, VAR_4[VAR_5][0]);

 return 0;
}
