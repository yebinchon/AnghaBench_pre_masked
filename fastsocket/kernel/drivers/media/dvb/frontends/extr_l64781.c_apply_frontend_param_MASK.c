
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct l64781_state {int dummy; } ;
struct dvb_ofdm_parameters {size_t bandwidth; scalar_t__ code_rate_HP; int hierarchy_information; scalar_t__ code_rate_LP; size_t constellation; int transmission_mode; size_t guard_interval; } ;
struct TYPE_4__ {struct dvb_ofdm_parameters ofdm; } ;
struct dvb_frontend_parameters {scalar_t__ inversion; TYPE_1__ u; } ;
struct TYPE_5__ {int (* set_params ) (struct dvb_frontend*,struct dvb_frontend_parameters*) ;} ;
struct TYPE_6__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int ) ;TYPE_2__ tuner_ops; } ;
struct dvb_frontend {TYPE_3__ ops; struct l64781_state* demodulator_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct l64781_state*) ;
 int FUNC_1 (struct l64781_state*,int) ;
 int FUNC_2 (struct l64781_state*,int,int) ;
 int FUNC_3 (struct l64781_state*) ;
 int FUNC_4 (struct dvb_frontend*,struct dvb_frontend_parameters*) ;
 int FUNC_5 (struct dvb_frontend*,int ) ;

__attribute__((used)) static int FUNC_6 (struct dvb_frontend* VAR_18, struct dvb_frontend_parameters *VAR_19)
{
 struct l64781_state* VAR_20 = VAR_18->demodulator_priv;

 static const u8 VAR_21[] = { 7, 0, 1, 2, 9, 3, 10, 4 };

 static const u8 VAR_22 [] = { 2, 4, 0, 6 };
 static const u8 VAR_23 [] = { 8, 7, 6 };
 static const u8 VAR_24 [] = { 1, 2, 4, 8 };

 static const u32 VAR_25 = 8000;
 struct dvb_ofdm_parameters *VAR_26 = &VAR_19->u.ofdm;
 u32 VAR_27;


 u32 VAR_28;
 u32 VAR_29;
 u8 VAR_30;
 u8 VAR_31;
 u8 VAR_32;
 int VAR_33 = VAR_26->bandwidth - VAR_0;

 if (VAR_18->ops.tuner_ops.set_params) {
  VAR_18->ops.tuner_ops.set_params(VAR_18, VAR_19);
  if (VAR_18->ops.i2c_gate_ctrl) VAR_18->ops.i2c_gate_ctrl(VAR_18, 0);
 }

 if (VAR_19->inversion != VAR_12 &&
     VAR_19->inversion != VAR_11)
  return -VAR_1;

 if (VAR_33 < 0 || VAR_33 > 2)
  return -VAR_1;

 if (VAR_26->code_rate_HP != VAR_2 && VAR_26->code_rate_HP != VAR_3 &&
     VAR_26->code_rate_HP != VAR_4 && VAR_26->code_rate_HP != VAR_5 &&
     VAR_26->code_rate_HP != VAR_6)
  return -VAR_1;

 if (VAR_26->hierarchy_information != VAR_10 &&
     (VAR_26->code_rate_LP != VAR_2 && VAR_26->code_rate_LP != VAR_3 &&
      VAR_26->code_rate_LP != VAR_4 && VAR_26->code_rate_LP != VAR_5 &&
      VAR_26->code_rate_LP != VAR_6))
  return -VAR_1;

 if (VAR_26->constellation != VAR_15 && VAR_26->constellation != VAR_13 &&
     VAR_26->constellation != VAR_14)
  return -VAR_1;

 if (VAR_26->transmission_mode != VAR_16 &&
     VAR_26->transmission_mode != VAR_17)
  return -VAR_1;

 if (VAR_26->guard_interval < VAR_7 ||
     VAR_26->guard_interval > VAR_8)
  return -VAR_1;

 if (VAR_26->hierarchy_information < VAR_10 ||
     VAR_26->hierarchy_information > VAR_9)
  return -VAR_1;

 VAR_27 = 0x4000-(VAR_25<<16)/VAR_23[VAR_26->bandwidth]/1000000;


 VAR_28 = (((8UL<<25) + (8UL<<19) / 25*VAR_25 / (15625/25)) /
   VAR_23[VAR_26->bandwidth] & 0xFFFFFF);



 VAR_29 = 378 * (1 << 10);
 VAR_29 *= 16;
 VAR_29 *= VAR_23[VAR_26->bandwidth];
 VAR_29 *= VAR_22[VAR_26->constellation];
 VAR_29 /= VAR_26->code_rate_HP + 1;
 VAR_29 /= (VAR_24[VAR_26->guard_interval] + 32);
 VAR_29 *= 1000;
 VAR_29 /= 1000 + VAR_25/1000;
 VAR_29 *= VAR_26->code_rate_HP;

 VAR_30 = (VAR_26->transmission_mode << 2) | VAR_26->guard_interval;
 VAR_31 = VAR_21[VAR_26->code_rate_HP];

 if (VAR_26->hierarchy_information != VAR_10)
  VAR_31 |= (VAR_26->code_rate_LP - VAR_2) << 3;

 VAR_32 = (VAR_26->hierarchy_information << 2) | VAR_26->constellation;

 FUNC_2 (VAR_20, 0x04, VAR_30);
 FUNC_2 (VAR_20, 0x05, VAR_31);
 FUNC_2 (VAR_20, 0x06, VAR_32);

 FUNC_3 (VAR_20);


 FUNC_2 (VAR_20, 0x15,
    VAR_26->transmission_mode == VAR_16 ? 1 : 3);
 FUNC_2 (VAR_20, 0x16, VAR_28 & 0xff);
 FUNC_2 (VAR_20, 0x17, (VAR_28 >> 8) & 0xff);
 FUNC_2 (VAR_20, 0x18, (VAR_28 >> 16) & 0xff);

 FUNC_2 (VAR_20, 0x1b, VAR_29 & 0xff);
 FUNC_2 (VAR_20, 0x1c, (VAR_29 >> 8) & 0xff);
 FUNC_2 (VAR_20, 0x1d, ((VAR_29 >> 16) & 0x7f) |
  (VAR_19->inversion == VAR_12 ? 0x80 : 0x00));

 FUNC_2 (VAR_20, 0x22, VAR_27 & 0xff);
 FUNC_2 (VAR_20, 0x23, (VAR_27 >> 8) & 0x3f);

 FUNC_1 (VAR_20, 0x00);
 FUNC_1 (VAR_20, 0x01);

 FUNC_0 (VAR_20);

 return 0;
}
