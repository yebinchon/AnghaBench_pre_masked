
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct mt352_state {int dummy; } ;
struct dvb_ofdm_parameters {int code_rate_HP; int code_rate_LP; int bandwidth; int hierarchy_information; int guard_interval; int transmission_mode; int constellation; } ;
struct TYPE_2__ {struct dvb_ofdm_parameters ofdm; } ;
struct dvb_frontend_parameters {int frequency; int inversion; TYPE_1__ u; } ;
struct dvb_frontend {struct mt352_state* demodulator_priv; } ;


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
 int FUNC_0 (struct mt352_state*,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend* VAR_29,
    struct dvb_frontend_parameters *VAR_30)
{
 struct mt352_state* VAR_31 = VAR_29->demodulator_priv;
 u16 VAR_32;
 u16 VAR_33;
 u8 VAR_34;
 struct dvb_ofdm_parameters *VAR_35 = &VAR_30->u.ofdm;
 static const u8 VAR_36[8] =
 {
  133,
  132,
  131,
  130,
  129,
  128,
  128,
  128
 };

 if ( (FUNC_0(VAR_31,0x00) & 0xC0) != 0xC0 )
  return -VAR_5;




 VAR_32 = (FUNC_0(VAR_31, VAR_25) << 8) | FUNC_0(VAR_31, VAR_24);
 VAR_33 = (FUNC_0(VAR_31, VAR_4) << 8) | FUNC_0(VAR_31, VAR_3);
 VAR_34 = FUNC_0(VAR_31, VAR_28);

 VAR_35->code_rate_HP = VAR_36[(VAR_32 >> 7) & 7];
 VAR_35->code_rate_LP = VAR_36[(VAR_32 >> 4) & 7];

 switch ( (VAR_32 >> 13) & 3)
 {
  case 0:
   VAR_35->constellation = VAR_22;
   break;
  case 1:
   VAR_35->constellation = VAR_19;
   break;
  case 2:
   VAR_35->constellation = VAR_20;
   break;
  default:
   VAR_35->constellation = VAR_21;
   break;
 }

 VAR_35->transmission_mode = (VAR_32 & 0x01) ? VAR_27 : VAR_26;

 switch ( (VAR_32 >> 2) & 3)
 {
  case 0:
   VAR_35->guard_interval = VAR_7;
   break;
  case 1:
   VAR_35->guard_interval = VAR_6;
   break;
  case 2:
   VAR_35->guard_interval = VAR_9;
   break;
  case 3:
   VAR_35->guard_interval = VAR_8;
   break;
  default:
   VAR_35->guard_interval = VAR_10;
   break;
 }

 switch ( (VAR_32 >> 10) & 7)
 {
  case 0:
   VAR_35->hierarchy_information = VAR_15;
   break;
  case 1:
   VAR_35->hierarchy_information = VAR_11;
   break;
  case 2:
   VAR_35->hierarchy_information = VAR_12;
   break;
  case 3:
   VAR_35->hierarchy_information = VAR_13;
   break;
  default:
   VAR_35->hierarchy_information = VAR_14;
   break;
 }

 VAR_30->frequency = ( 500 * (VAR_33 - VAR_16) ) / 3 * 1000;

 if (VAR_34 == 0x72)
  VAR_35->bandwidth = VAR_2;
 else if (VAR_34 == 0x64)
  VAR_35->bandwidth = VAR_1;
 else
  VAR_35->bandwidth = VAR_0;


 if (FUNC_0(VAR_31, VAR_23) & 0x02)
  VAR_30->inversion = VAR_17;
 else
  VAR_30->inversion = VAR_18;

 return 0;
}
