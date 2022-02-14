
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {void* code_rate_LP; void* code_rate_HP; int hierarchy_information; int constellation; int guard_interval; int transmission_mode; int bandwidth; } ;
struct TYPE_4__ {TYPE_1__ ofdm; } ;
struct dvb_frontend_parameters {TYPE_2__ u; int inversion; } ;
struct dvb_frontend {struct dib3000mc_state* demodulator_priv; } ;
struct dib3000mc_state {int current_bandwidth; } ;


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
 int FUNC_0 (struct dib3000mc_state*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_16,
    struct dvb_frontend_parameters *VAR_17)
{
 struct dib3000mc_state *VAR_18 = VAR_16->demodulator_priv;
 u16 VAR_19 = FUNC_0(VAR_18,458);

 VAR_17->inversion = VAR_10;

 VAR_17->u.ofdm.bandwidth = VAR_18->current_bandwidth;

 switch ((VAR_19 >> 8) & 0x1) {
  case 0: VAR_17->u.ofdm.transmission_mode = VAR_14; break;
  case 1: VAR_17->u.ofdm.transmission_mode = VAR_15; break;
 }

 switch (VAR_19 & 0x3) {
  case 0: VAR_17->u.ofdm.guard_interval = VAR_6; break;
  case 1: VAR_17->u.ofdm.guard_interval = VAR_5; break;
  case 2: VAR_17->u.ofdm.guard_interval = VAR_8; break;
  case 3: VAR_17->u.ofdm.guard_interval = VAR_7; break;
 }

 switch ((VAR_19 >> 13) & 0x3) {
  case 0: VAR_17->u.ofdm.constellation = VAR_13; break;
  case 1: VAR_17->u.ofdm.constellation = VAR_11; break;
  case 2:
  default: VAR_17->u.ofdm.constellation = VAR_12; break;
 }




 VAR_17->u.ofdm.hierarchy_information = VAR_9;
 switch ((VAR_19 >> 5) & 0x7) {
  case 1: VAR_17->u.ofdm.code_rate_HP = VAR_0; break;
  case 2: VAR_17->u.ofdm.code_rate_HP = VAR_1; break;
  case 3: VAR_17->u.ofdm.code_rate_HP = VAR_2; break;
  case 5: VAR_17->u.ofdm.code_rate_HP = VAR_3; break;
  case 7:
  default: VAR_17->u.ofdm.code_rate_HP = VAR_4; break;

 }

 switch ((VAR_19 >> 2) & 0x7) {
  case 1: VAR_17->u.ofdm.code_rate_LP = VAR_0; break;
  case 2: VAR_17->u.ofdm.code_rate_LP = VAR_1; break;
  case 3: VAR_17->u.ofdm.code_rate_LP = VAR_2; break;
  case 5: VAR_17->u.ofdm.code_rate_LP = VAR_3; break;
  case 7:
  default: VAR_17->u.ofdm.code_rate_LP = VAR_4; break;
 }

 return 0;
}
