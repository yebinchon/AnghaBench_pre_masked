
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int bandwidth; int transmission_mode; int guard_interval; void* code_rate_LP; void* code_rate_HP; int hierarchy_information; int constellation; } ;
struct TYPE_4__ {TYPE_1__ ofdm; } ;
struct dvb_frontend_parameters {TYPE_2__ u; } ;
struct dvb_frontend {struct af9005_fe_state* demodulator_priv; } ;
struct af9005_fe_state {int d; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
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
 int FUNC_0 (int ,int ,int ,int ,int*) ;
 int FUNC_1 (char*,...) ;
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

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_45,
      struct dvb_frontend_parameters *VAR_46)
{
 struct af9005_fe_state *VAR_47 = VAR_45->demodulator_priv;
 int VAR_48;
 u8 VAR_49;


 VAR_48 =
     FUNC_0(VAR_47->d, VAR_39,
          VAR_26, VAR_25,
          &VAR_49);
 if (VAR_48)
  return VAR_48;
 FUNC_1("===== fe_get_frontend ==============\n");
 FUNC_1("CONSTELLATION ");
 switch (VAR_49) {
 case 0:
  VAR_46->u.ofdm.constellation = VAR_18;
  FUNC_1("QPSK\n");
  break;
 case 1:
  VAR_46->u.ofdm.constellation = VAR_16;
  FUNC_1("QAM_16\n");
  break;
 case 2:
  VAR_46->u.ofdm.constellation = VAR_17;
  FUNC_1("QAM_64\n");
  break;
 }


 VAR_48 =
     FUNC_0(VAR_47->d, VAR_41,
          VAR_30, VAR_29,
          &VAR_49);
 if (VAR_48)
  return VAR_48;
 FUNC_1("HIERARCHY ");
 switch (VAR_49) {
 case 0:
  VAR_46->u.ofdm.hierarchy_information = VAR_15;
  FUNC_1("NONE\n");
  break;
 case 1:
  VAR_46->u.ofdm.hierarchy_information = VAR_12;
  FUNC_1("1\n");
  break;
 case 2:
  VAR_46->u.ofdm.hierarchy_information = VAR_13;
  FUNC_1("2\n");
  break;
 case 3:
  VAR_46->u.ofdm.hierarchy_information = VAR_14;
  FUNC_1("4\n");
  break;
 }


 VAR_48 =
     FUNC_0(VAR_47->d, VAR_38,
          VAR_24, VAR_23, &VAR_49);
 if (VAR_48)
  return VAR_48;

 FUNC_1("PRIORITY %s\n", VAR_49 ? "high" : "low");


 VAR_48 =
     FUNC_0(VAR_47->d, VAR_42,
          VAR_32, VAR_31,
          &VAR_49);
 if (VAR_48)
  return VAR_48;
 FUNC_1("CODERATE HP ");
 switch (VAR_49) {
 case 0:
  VAR_46->u.ofdm.code_rate_HP = VAR_3;
  FUNC_1("FEC_1_2\n");
  break;
 case 1:
  VAR_46->u.ofdm.code_rate_HP = VAR_4;
  FUNC_1("FEC_2_3\n");
  break;
 case 2:
  VAR_46->u.ofdm.code_rate_HP = VAR_5;
  FUNC_1("FEC_3_4\n");
  break;
 case 3:
  VAR_46->u.ofdm.code_rate_HP = VAR_6;
  FUNC_1("FEC_5_6\n");
  break;
 case 4:
  VAR_46->u.ofdm.code_rate_HP = VAR_7;
  FUNC_1("FEC_7_8\n");
  break;
 }


 VAR_48 =
     FUNC_0(VAR_47->d, VAR_43,
          VAR_34, VAR_33,
          &VAR_49);
 if (VAR_48)
  return VAR_48;
 FUNC_1("CODERATE LP ");
 switch (VAR_49) {
 case 0:
  VAR_46->u.ofdm.code_rate_LP = VAR_3;
  FUNC_1("FEC_1_2\n");
  break;
 case 1:
  VAR_46->u.ofdm.code_rate_LP = VAR_4;
  FUNC_1("FEC_2_3\n");
  break;
 case 2:
  VAR_46->u.ofdm.code_rate_LP = VAR_5;
  FUNC_1("FEC_3_4\n");
  break;
 case 3:
  VAR_46->u.ofdm.code_rate_LP = VAR_6;
  FUNC_1("FEC_5_6\n");
  break;
 case 4:
  VAR_46->u.ofdm.code_rate_LP = VAR_7;
  FUNC_1("FEC_7_8\n");
  break;
 }


 VAR_48 =
     FUNC_0(VAR_47->d, VAR_40,
          VAR_28, VAR_27, &VAR_49);
 if (VAR_48)
  return VAR_48;
 FUNC_1("GUARD INTERVAL ");
 switch (VAR_49) {
 case 0:
  VAR_46->u.ofdm.guard_interval = VAR_9;
  FUNC_1("1_32\n");
  break;
 case 1:
  VAR_46->u.ofdm.guard_interval = VAR_8;
  FUNC_1("1_16\n");
  break;
 case 2:
  VAR_46->u.ofdm.guard_interval = VAR_11;
  FUNC_1("1_8\n");
  break;
 case 3:
  VAR_46->u.ofdm.guard_interval = VAR_10;
  FUNC_1("1_4\n");
  break;
 }


 VAR_48 =
     FUNC_0(VAR_47->d, VAR_44,
          VAR_36, VAR_35,
          &VAR_49);
 if (VAR_48)
  return VAR_48;
 FUNC_1("TRANSMISSION MODE ");
 switch (VAR_49) {
 case 0:
  VAR_46->u.ofdm.transmission_mode = VAR_19;
  FUNC_1("2K\n");
  break;
 case 1:
  VAR_46->u.ofdm.transmission_mode = VAR_20;
  FUNC_1("8K\n");
  break;
 }


 VAR_48 =
     FUNC_0(VAR_47->d, VAR_37, VAR_22,
          VAR_21, &VAR_49);
 FUNC_1("BANDWIDTH ");
 switch (VAR_49) {
 case 0:
  VAR_46->u.ofdm.bandwidth = VAR_0;
  FUNC_1("6\n");
  break;
 case 1:
  VAR_46->u.ofdm.bandwidth = VAR_1;
  FUNC_1("7\n");
  break;
 case 2:
  VAR_46->u.ofdm.bandwidth = VAR_2;
  FUNC_1("8\n");
  break;
 }
 return 0;
}
