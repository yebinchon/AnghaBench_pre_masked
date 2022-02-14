
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct dvb_ofdm_parameters {int transmission_mode; int guard_interval; void* hierarchy_information; void* code_rate_LP; void* code_rate_HP; int constellation; } ;
struct TYPE_2__ {struct dvb_ofdm_parameters ofdm; } ;
struct dvb_frontend_parameters {int inversion; TYPE_1__ u; } ;
struct dvb_frontend {struct dib3000_state* demodulator_priv; } ;
struct dib3000_state {int dummy; } ;
typedef void* fe_code_rate_t ;


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
 void* VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 void* VAR_22 ;
 void* VAR_23 ;
 void* VAR_24 ;
 void* VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct dvb_frontend* VAR_33,
      struct dvb_frontend_parameters *VAR_34)
{
 struct dib3000_state* VAR_35 = VAR_33->demodulator_priv;
 struct dvb_ofdm_parameters *VAR_36 = &VAR_34->u.ofdm;
 fe_code_rate_t *VAR_37;
 u16 VAR_38;
 int VAR_39,VAR_40;
 u32 VAR_41, VAR_42 = 0x800000;

 if (!FUNC_2(VAR_9))
  return 0;

 VAR_41 = ((FUNC_2(VAR_3) & 0xff) << 16) + FUNC_2(VAR_2);
 FUNC_0("DDS_VAL: %x %x %x",VAR_41, FUNC_2(VAR_3), FUNC_2(VAR_2));
 if (VAR_41 < VAR_42)
  VAR_39 = 0;
 else if (VAR_41 == VAR_42)
  VAR_39 = 1;
 else
  VAR_39 = 2;

 VAR_41 = ((FUNC_2(VAR_1) & 0xff) << 16) + FUNC_2(VAR_0);
 FUNC_0("DDS_FREQ: %x %x %x",VAR_41, FUNC_2(VAR_1), FUNC_2(VAR_0));
 if (VAR_41 < VAR_42)
  VAR_40 = 0;
 else if (VAR_41 == VAR_42)
  VAR_40 = 1;
 else
  VAR_40 = 2;

 VAR_34->inversion =
  ((VAR_40 == 2) && (VAR_39==1 || VAR_39==0)) ||
  ((VAR_40 == 0) && (VAR_39==1 || VAR_39==2)) ?
  VAR_27 : VAR_26;

 FUNC_0("inversion %d %d, %d\n", VAR_40, VAR_39, VAR_34->inversion);

 switch ((VAR_38 = FUNC_2(VAR_10))) {
  case 139:
   FUNC_0("QPSK ");
   VAR_36->constellation = VAR_30;
   break;
  case 141:
   FUNC_0("QAM16 ");
   VAR_36->constellation = VAR_28;
   break;
  case 140:
   FUNC_0("QAM64 ");
   VAR_36->constellation = VAR_29;
   break;
  default:
   FUNC_1("Unexpected constellation returned by TPS (%d)", VAR_38);
   break;
 }
 FUNC_0("TPS: %d\n", VAR_38);

 if (FUNC_2(VAR_8)) {
  FUNC_0("HRCH ON\n");
  VAR_37 = &VAR_36->code_rate_LP;
  VAR_36->code_rate_HP = VAR_17;
  switch ((VAR_38 = FUNC_2(VAR_11))) {
   case 145:
    FUNC_0("HIERARCHY_NONE ");
    VAR_36->hierarchy_information = VAR_25;
    break;
   case 144:
    FUNC_0("HIERARCHY_1 ");
    VAR_36->hierarchy_information = VAR_22;
    break;
   case 143:
    FUNC_0("HIERARCHY_2 ");
    VAR_36->hierarchy_information = VAR_23;
    break;
   case 142:
    FUNC_0("HIERARCHY_4 ");
    VAR_36->hierarchy_information = VAR_24;
    break;
   default:
    FUNC_1("Unexpected ALPHA value returned by TPS (%d)", VAR_38);
    break;
  }
  FUNC_0("TPS: %d\n", VAR_38);

  VAR_38 = FUNC_2(VAR_5);
 } else {
  FUNC_0("HRCH OFF\n");
  VAR_37 = &VAR_36->code_rate_HP;
  VAR_36->code_rate_LP = VAR_17;
  VAR_36->hierarchy_information = VAR_25;

  VAR_38 = FUNC_2(VAR_4);
 }

 switch (VAR_38) {
  case 138:
   FUNC_0("FEC_1_2 ");
   *VAR_37 = VAR_12;
   break;
  case 137:
   FUNC_0("FEC_2_3 ");
   *VAR_37 = VAR_13;
   break;
  case 136:
   FUNC_0("FEC_3_4 ");
   *VAR_37 = VAR_14;
   break;
  case 135:
   FUNC_0("FEC_5_6 ");
   *VAR_37 = VAR_15;
   break;
  case 134:
   FUNC_0("FEC_7_8 ");
   *VAR_37 = VAR_16;
   break;
  default:
   FUNC_1("Unexpected FEC returned by TPS (%d)", VAR_38);
   break;
 }
 FUNC_0("TPS: %d\n",VAR_38);

 switch ((VAR_38 = FUNC_2(VAR_7))) {
  case 132:
   FUNC_0("GUARD_INTERVAL_1_32 ");
   VAR_36->guard_interval = VAR_19;
   break;
  case 133:
   FUNC_0("GUARD_INTERVAL_1_16 ");
   VAR_36->guard_interval = VAR_18;
   break;
  case 130:
   FUNC_0("GUARD_INTERVAL_1_8 ");
   VAR_36->guard_interval = VAR_21;
   break;
  case 131:
   FUNC_0("GUARD_INTERVAL_1_4 ");
   VAR_36->guard_interval = VAR_20;
   break;
  default:
   FUNC_1("Unexpected Guard Time returned by TPS (%d)", VAR_38);
   break;
 }
 FUNC_0("TPS: %d\n", VAR_38);

 switch ((VAR_38 = FUNC_2(VAR_6))) {
  case 129:
   FUNC_0("TRANSMISSION_MODE_2K ");
   VAR_36->transmission_mode = VAR_31;
   break;
  case 128:
   FUNC_0("TRANSMISSION_MODE_8K ");
   VAR_36->transmission_mode = VAR_32;
   break;
  default:
   FUNC_1("unexpected transmission mode return by TPS (%d)", VAR_38);
   break;
 }
 FUNC_0("TPS: %d\n", VAR_38);

 return 0;
}
