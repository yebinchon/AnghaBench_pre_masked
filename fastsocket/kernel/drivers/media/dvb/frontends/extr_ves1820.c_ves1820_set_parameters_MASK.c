
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u8 ;
struct ves1820_state {int pwm; TYPE_5__* config; } ;
struct TYPE_8__ {int modulation; int symbol_rate; } ;
struct TYPE_9__ {TYPE_3__ qam; } ;
struct dvb_frontend_parameters {int inversion; TYPE_4__ u; } ;
struct TYPE_6__ {int (* set_params ) (struct dvb_frontend*,struct dvb_frontend_parameters*) ;} ;
struct TYPE_7__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int ) ;TYPE_1__ tuner_ops; } ;
struct dvb_frontend {TYPE_2__ ops; struct ves1820_state* demodulator_priv; } ;
struct TYPE_10__ {scalar_t__ selagc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct dvb_frontend*,struct dvb_frontend_parameters*) ;
 int FUNC_1 (struct dvb_frontend*,int ) ;
 int* VAR_2 ;
 int FUNC_2 (struct ves1820_state*,int ) ;
 int FUNC_3 (struct ves1820_state*,int const,int ) ;
 int FUNC_4 (struct ves1820_state*,int,int const) ;

__attribute__((used)) static int FUNC_5(struct dvb_frontend* VAR_3, struct dvb_frontend_parameters *VAR_4)
{
 struct ves1820_state* VAR_5 = VAR_3->demodulator_priv;
 static const u8 VAR_6[] = { 0x00, 0x04, 0x08, 0x0c, 0x10 };
 static const u8 VAR_7[] = { 140, 140, 106, 100, 92 };
 static const u8 VAR_8[] = { 135, 100, 70, 54, 38 };
 static const u8 VAR_9[] = { 162, 116, 67, 52, 35 };
 static const u8 VAR_10[] = { 145, 150, 106, 126, 107 };
 int VAR_11 = VAR_4->u.qam.modulation - VAR_1;

 if (VAR_11 < 0 || VAR_11 > 4)
  return -VAR_0;

 if (VAR_3->ops.tuner_ops.set_params) {
  VAR_3->ops.tuner_ops.set_params(VAR_3, VAR_4);
  if (VAR_3->ops.i2c_gate_ctrl) VAR_3->ops.i2c_gate_ctrl(VAR_3, 0);
 }

 FUNC_2(VAR_5, VAR_4->u.qam.symbol_rate);
 FUNC_4(VAR_5, 0x34, VAR_5->pwm);

 FUNC_4(VAR_5, 0x01, VAR_7[VAR_11]);
 FUNC_4(VAR_5, 0x05, VAR_8[VAR_11]);
 FUNC_4(VAR_5, 0x08, VAR_9[VAR_11]);
 FUNC_4(VAR_5, 0x09, VAR_10[VAR_11]);

 FUNC_3(VAR_5, VAR_6[VAR_11], VAR_4->inversion);
 FUNC_4(VAR_5, 2, VAR_2[2] | (VAR_5->config->selagc ? 0x08 : 0));
 return 0;
}
