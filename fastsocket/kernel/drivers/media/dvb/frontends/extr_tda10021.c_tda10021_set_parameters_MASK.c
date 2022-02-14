
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u8 ;
struct tda10021_state {int const pwm; } ;
struct TYPE_7__ {int modulation; int symbol_rate; } ;
struct TYPE_8__ {TYPE_3__ qam; } ;
struct dvb_frontend_parameters {int inversion; TYPE_4__ u; } ;
struct TYPE_5__ {int (* set_params ) (struct dvb_frontend*,struct dvb_frontend_parameters*) ;} ;
struct TYPE_6__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int ) ;TYPE_1__ tuner_ops; } ;
struct dvb_frontend {TYPE_2__ ops; struct tda10021_state* demodulator_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct tda10021_state*,int,int const) ;
 int FUNC_1 (struct dvb_frontend*,struct dvb_frontend_parameters*) ;
 int FUNC_2 (struct dvb_frontend*,int ) ;
 int FUNC_3 (struct tda10021_state*,int ) ;
 int FUNC_4 (struct tda10021_state*,int const,int ) ;

__attribute__((used)) static int FUNC_5 (struct dvb_frontend *VAR_3,
       struct dvb_frontend_parameters *VAR_4)
{
 struct tda10021_state* VAR_5 = VAR_3->demodulator_priv;



 static const u8 VAR_6 [] = { 0x14, 0x00, 0x04, 0x08, 0x0c, 0x10 };

 static const u8 VAR_7 [] = { 0x78, 0x8c, 0x8c, 0x6a, 0x78, 0x5c };

 static const u8 VAR_8 [] = { 0x78, 0x87, 0x64, 0x46, 0x36, 0x26 };

 static const u8 VAR_9 [] = { 0x8c, 0xa2, 0x74, 0x43, 0x34, 0x23 };

 static const u8 VAR_10 [] = { 0x96, 0x91, 0x96, 0x6a, 0x7e, 0x6b };

 int VAR_11 = VAR_4->u.qam.modulation;

 if (VAR_11 < 0 || VAR_11 > 5)
  return -VAR_0;

 if (VAR_4->inversion != VAR_2 && VAR_4->inversion != VAR_1)
  return -VAR_0;



 if (VAR_3->ops.tuner_ops.set_params) {
  VAR_3->ops.tuner_ops.set_params(VAR_3, VAR_4);
  if (VAR_3->ops.i2c_gate_ctrl) VAR_3->ops.i2c_gate_ctrl(VAR_3, 0);
 }

 FUNC_3 (VAR_5, VAR_4->u.qam.symbol_rate);
 FUNC_0 (VAR_5, 0x34, VAR_5->pwm);

 FUNC_0 (VAR_5, 0x01, VAR_7[VAR_11]);
 FUNC_0 (VAR_5, 0x05, VAR_8[VAR_11]);
 FUNC_0 (VAR_5, 0x08, VAR_9[VAR_11]);
 FUNC_0 (VAR_5, 0x09, VAR_10[VAR_11]);

 FUNC_4 (VAR_5, VAR_6[VAR_11], VAR_4->inversion);

 return 0;
}
