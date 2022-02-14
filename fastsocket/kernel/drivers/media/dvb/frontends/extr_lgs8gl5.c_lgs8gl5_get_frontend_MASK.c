
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct lgs8gl5_state {int dummy; } ;
struct dvb_ofdm_parameters {int bandwidth; int hierarchy_information; int constellation; int transmission_mode; int guard_interval; int code_rate_LP; int code_rate_HP; } ;
struct TYPE_2__ {struct dvb_ofdm_parameters ofdm; } ;
struct dvb_frontend_parameters {int inversion; TYPE_1__ u; } ;
struct dvb_frontend {struct lgs8gl5_state* demodulator_priv; } ;


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
 int FUNC_0 (struct lgs8gl5_state*,int ) ;

__attribute__((used)) static int
FUNC_1(struct dvb_frontend *VAR_11,
  struct dvb_frontend_parameters *VAR_12)
{
 struct lgs8gl5_state *VAR_13 = VAR_11->demodulator_priv;
 u8 VAR_14 = FUNC_0(VAR_13, VAR_8);
 struct dvb_ofdm_parameters *VAR_15 = &VAR_12->u.ofdm;

 VAR_12->inversion = (VAR_14 & VAR_9) ? VAR_6 : VAR_5;

 VAR_15->code_rate_HP = VAR_1;
 VAR_15->code_rate_LP = VAR_2;
 VAR_15->guard_interval = VAR_3;
 VAR_15->transmission_mode = VAR_10;
 VAR_15->constellation = VAR_7;
 VAR_15->hierarchy_information = VAR_4;
 VAR_15->bandwidth = VAR_0;

 return 0;
}
