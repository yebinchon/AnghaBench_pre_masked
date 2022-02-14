
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dvb_ofdm_parameters {int bandwidth; int transmission_mode; int guard_interval; int constellation; int hierarchy_information; int code_rate_HP; int code_rate_LP; } ;
struct TYPE_4__ {struct dvb_ofdm_parameters ofdm; } ;
struct dvb_frontend_parameters {int inversion; TYPE_1__ u; } ;
struct TYPE_5__ {int (* set_params ) (struct dvb_frontend*,struct dvb_frontend_parameters*) ;} ;
struct TYPE_6__ {int (* i2c_gate_ctrl ) (struct dvb_frontend*,int ) ;TYPE_2__ tuner_ops; } ;
struct dvb_frontend {TYPE_3__ ops; struct dib3000_state* demodulator_priv; } ;
struct dib3000_state {int dummy; } ;
typedef int fe_code_rate_t ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ,int ) ;
 int*** VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 scalar_t__ FUNC_2 (struct dvb_frontend*,struct dvb_frontend_parameters*) ;
 int VAR_64 ;
 int VAR_65 ;
 int VAR_66 ;
 int * VAR_67 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct dvb_frontend*,struct dvb_frontend_parameters*) ;
 int FUNC_7 (struct dvb_frontend*,int ) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ,int ) ;

__attribute__((used)) static int FUNC_10(struct dvb_frontend* VAR_68,
      struct dvb_frontend_parameters *VAR_69, int VAR_70)
{
 struct dib3000_state* VAR_71 = VAR_68->demodulator_priv;
 struct dvb_ofdm_parameters *VAR_72 = &VAR_69->u.ofdm;
 fe_code_rate_t VAR_73 = 148;
 int VAR_74, VAR_75;

 if (VAR_70 && VAR_68->ops.tuner_ops.set_params) {
  VAR_68->ops.tuner_ops.set_params(VAR_68, VAR_69);
  if (VAR_68->ops.i2c_gate_ctrl) VAR_68->ops.i2c_gate_ctrl(VAR_68, 0);

  FUNC_0("bandwidth: ");
  switch (VAR_72->bandwidth) {
   case 156:
    FUNC_0("8 MHz\n");
    FUNC_9(VAR_66, VAR_67[2]);
    FUNC_9(VAR_65, VAR_63);
    break;
   case 157:
    FUNC_0("7 MHz\n");
    FUNC_9(VAR_66, VAR_67[1]);
    FUNC_9(VAR_65, VAR_62);
    break;
   case 158:
    FUNC_0("6 MHz\n");
    FUNC_9(VAR_66, VAR_67[0]);
    FUNC_9(VAR_65, VAR_61);
    break;
   case 155:
    return -VAR_57;
   default:
    FUNC_3("unknown bandwidth value.");
    return -VAR_56;
  }
 }
 FUNC_8(VAR_11, VAR_2);

 FUNC_0("transmission mode: ");
 switch (VAR_72->transmission_mode) {
  case 130:
   FUNC_0("2k\n");
   FUNC_8(VAR_8, VAR_54);
   break;
  case 129:
   FUNC_0("8k\n");
   FUNC_8(VAR_8, VAR_55);
   break;
  case 128:
   FUNC_0("auto\n");
   break;
  default:
   return -VAR_56;
 }

 FUNC_0("guard: ");
 switch (VAR_72->guard_interval) {
  case 146:
   FUNC_0("1_32\n");
   FUNC_8(VAR_9, VAR_47);
   break;
  case 147:
   FUNC_0("1_16\n");
   FUNC_8(VAR_9, VAR_46);
   break;
  case 144:
   FUNC_0("1_8\n");
   FUNC_8(VAR_9, VAR_49);
   break;
  case 145:
   FUNC_0("1_4\n");
   FUNC_8(VAR_9, VAR_48);
   break;
  case 143:
   FUNC_0("auto\n");
   break;
  default:
   return -VAR_56;
 }

 FUNC_0("inversion: ");
 switch (VAR_69->inversion) {
  case 136:
   FUNC_0("off\n");
   FUNC_8(VAR_7, VAR_39);
   break;
  case 137:
   FUNC_0("auto ");
   break;
  case 135:
   FUNC_0("on\n");
   FUNC_8(VAR_7, VAR_40);
   break;
  default:
   return -VAR_56;
 }

 FUNC_0("constellation: ");
 switch (VAR_72->constellation) {
  case 131:
   FUNC_0("qpsk\n");
   FUNC_8(VAR_16, VAR_38);
   break;
  case 134:
   FUNC_0("qam16\n");
   FUNC_8(VAR_16, VAR_36);
   break;
  case 133:
   FUNC_0("qam64\n");
   FUNC_8(VAR_16, VAR_37);
   break;
  case 132:
   break;
  default:
   return -VAR_56;
 }
 FUNC_0("hierarchy: ");
 switch (VAR_72->hierarchy_information) {
  case 138:
   FUNC_0("none ");

  case 142:
   FUNC_0("alpha=1\n");
   FUNC_8(VAR_21, VAR_33);
   break;
  case 141:
   FUNC_0("alpha=2\n");
   FUNC_8(VAR_21, VAR_34);
   break;
  case 140:
   FUNC_0("alpha=4\n");
   FUNC_8(VAR_21, VAR_35);
   break;
  case 139:
   FUNC_0("alpha=auto\n");
   break;
  default:
   return -VAR_56;
 }

 FUNC_0("hierarchy: ");
 if (VAR_72->hierarchy_information == 138) {
  FUNC_0("none\n");
  FUNC_8(VAR_24, VAR_50);
  FUNC_8(VAR_23, VAR_52);
  VAR_73 = VAR_72->code_rate_HP;
 } else if (VAR_72->hierarchy_information != 139) {
  FUNC_0("on\n");
  FUNC_8(VAR_24, VAR_51);
  FUNC_8(VAR_23, VAR_53);
  VAR_73 = VAR_72->code_rate_LP;
 }
 FUNC_0("fec: ");
 switch (VAR_73) {
  case 154:
   FUNC_0("1_2\n");
   FUNC_8(VAR_22, VAR_41);
   break;
  case 153:
   FUNC_0("2_3\n");
   FUNC_8(VAR_22, VAR_42);
   break;
  case 152:
   FUNC_0("3_4\n");
   FUNC_8(VAR_22, VAR_43);
   break;
  case 151:
   FUNC_0("5_6\n");
   FUNC_8(VAR_22, VAR_44);
   break;
  case 150:
   FUNC_0("7_8\n");
   FUNC_8(VAR_22, VAR_45);
   break;
  case 148:
   FUNC_0("none ");
   break;
  case 149:
   FUNC_0("auto\n");
   break;
  default:
   return -VAR_56;
 }

 VAR_75 = VAR_58
  [VAR_72->transmission_mode == 128]
  [VAR_72->guard_interval == 143]
  [VAR_69->inversion == 137];

 FUNC_0("seq? %d\n", VAR_75);

 FUNC_8(VAR_18, VAR_75);

 FUNC_8(VAR_10, VAR_75 ? VAR_1 : VAR_0);

 if (VAR_72->transmission_mode == 130) {
  if (VAR_72->guard_interval == 144) {
   FUNC_8(VAR_19, VAR_29);
  } else {
   FUNC_8(VAR_19, VAR_30);
  }

  FUNC_8(VAR_20, VAR_31);
 } else {
  FUNC_8(VAR_20, VAR_32);
 }

 FUNC_8(VAR_13, VAR_3);
 FUNC_8(VAR_15, VAR_5);
 FUNC_8(VAR_14, VAR_4);

 FUNC_9(VAR_64, VAR_59);

 FUNC_8(VAR_10, VAR_0);

 FUNC_8(VAR_17, VAR_25 + VAR_27);
 FUNC_8(VAR_17, VAR_28);


 FUNC_4(70);

 FUNC_9(VAR_64, VAR_60);


 if (VAR_72->constellation == 132 ||
  VAR_72->hierarchy_information == 139 ||
  VAR_73 == 149 ||
  VAR_69->inversion == 137) {
  int VAR_76=0;

  FUNC_0("autosearch enabled.\n");

  FUNC_8(VAR_10, VAR_1);

  FUNC_8(VAR_17, VAR_26);
  FUNC_8(VAR_17, VAR_28);

  while ((VAR_74 =
    FUNC_1(
     FUNC_5(VAR_6),
     FUNC_5(VAR_12))) < 0 && VAR_76++ < 100)
   FUNC_4(1);

  FUNC_0("search_state after autosearch %d after %d checks\n",VAR_74,VAR_76);

  if (VAR_74 == 1) {
   struct dvb_frontend_parameters VAR_77;
   if (FUNC_2(VAR_68, &VAR_77) == 0) {
    FUNC_0("reading tuning data from frontend succeeded.\n");
    return FUNC_10(VAR_68, &VAR_77, 0);
   }
  }

 } else {
  FUNC_8(VAR_17, VAR_27);
  FUNC_8(VAR_17, VAR_28);
 }

 return 0;
}
