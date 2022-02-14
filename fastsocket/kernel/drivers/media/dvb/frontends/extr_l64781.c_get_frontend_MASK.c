
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct l64781_state {int dummy; } ;
struct TYPE_3__ {int hierarchy_information; int constellation; void* code_rate_LP; void* code_rate_HP; int transmission_mode; int guard_interval; } ;
struct TYPE_4__ {TYPE_1__ ofdm; } ;
struct dvb_frontend_parameters {int frequency; int inversion; TYPE_2__ u; } ;
struct dvb_frontend {struct l64781_state* demodulator_priv; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
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
 int FUNC_0 (struct l64781_state*,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend* VAR_20, struct dvb_frontend_parameters* VAR_21)
{
 struct l64781_state* VAR_22 = VAR_20->demodulator_priv;
 int VAR_23;


 VAR_23 = FUNC_0(VAR_22, 0x04);
 switch(VAR_23 & 3) {
 case 0:
  VAR_21->u.ofdm.guard_interval = VAR_6;
  break;
 case 1:
  VAR_21->u.ofdm.guard_interval = VAR_5;
  break;
 case 2:
  VAR_21->u.ofdm.guard_interval = VAR_8;
  break;
 case 3:
  VAR_21->u.ofdm.guard_interval = VAR_7;
  break;
 }
 switch((VAR_23 >> 2) & 3) {
 case 0:
  VAR_21->u.ofdm.transmission_mode = VAR_18;
  break;
 case 1:
  VAR_21->u.ofdm.transmission_mode = VAR_19;
  break;
 default:
  FUNC_1("Unexpected value for transmission_mode\n");
 }



 VAR_23 = FUNC_0(VAR_22, 0x05);
 switch(VAR_23 & 7) {
 case 0:
  VAR_21->u.ofdm.code_rate_HP = VAR_0;
  break;
 case 1:
  VAR_21->u.ofdm.code_rate_HP = VAR_1;
  break;
 case 2:
  VAR_21->u.ofdm.code_rate_HP = VAR_2;
  break;
 case 3:
  VAR_21->u.ofdm.code_rate_HP = VAR_3;
  break;
 case 4:
  VAR_21->u.ofdm.code_rate_HP = VAR_4;
  break;
 default:
  FUNC_1("Unexpected value for code_rate_HP\n");
 }
 switch((VAR_23 >> 3) & 7) {
 case 0:
  VAR_21->u.ofdm.code_rate_LP = VAR_0;
  break;
 case 1:
  VAR_21->u.ofdm.code_rate_LP = VAR_1;
  break;
 case 2:
  VAR_21->u.ofdm.code_rate_LP = VAR_2;
  break;
 case 3:
  VAR_21->u.ofdm.code_rate_LP = VAR_3;
  break;
 case 4:
  VAR_21->u.ofdm.code_rate_LP = VAR_4;
  break;
 default:
  FUNC_1("Unexpected value for code_rate_LP\n");
 }


 VAR_23 = FUNC_0(VAR_22, 0x06);
 switch(VAR_23 & 3) {
 case 0:
  VAR_21->u.ofdm.constellation = VAR_17;
  break;
 case 1:
  VAR_21->u.ofdm.constellation = VAR_15;
  break;
 case 2:
  VAR_21->u.ofdm.constellation = VAR_16;
  break;
 default:
  FUNC_1("Unexpected value for constellation\n");
 }
 switch((VAR_23 >> 2) & 7) {
 case 0:
  VAR_21->u.ofdm.hierarchy_information = VAR_12;
  break;
 case 1:
  VAR_21->u.ofdm.hierarchy_information = VAR_9;
  break;
 case 2:
  VAR_21->u.ofdm.hierarchy_information = VAR_10;
  break;
 case 3:
  VAR_21->u.ofdm.hierarchy_information = VAR_11;
  break;
 default:
  FUNC_1("Unexpected value for hierarchy\n");
 }


 VAR_23 = FUNC_0 (VAR_22, 0x1d);
 VAR_21->inversion = (VAR_23 & 0x80) ? VAR_14 : VAR_13;

 VAR_23 = (int) (FUNC_0 (VAR_22, 0x08) |
       (FUNC_0 (VAR_22, 0x09) << 8) |
       (FUNC_0 (VAR_22, 0x0a) << 16));
 VAR_21->frequency += VAR_23;

 return 0;
}
