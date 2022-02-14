
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int bandwidth; int hierarchy_information; int guard_interval; int transmission_mode; void* code_rate_LP; void* code_rate_HP; int constellation; } ;
struct TYPE_4__ {int fec_inner; int symbol_rate; } ;
struct TYPE_6__ {TYPE_2__ ofdm; TYPE_1__ qpsk; } ;
struct dvb_frontend_parameters {TYPE_3__ u; int inversion; int frequency; } ;
struct dvb_frontend_private {struct dvb_frontend_parameters parameters; } ;
struct dtv_frontend_properties {int modulation; scalar_t__ delivery_system; int bandwidth_hz; int inversion; int frequency; int fec_inner; int symbol_rate; } ;
struct dvb_frontend {struct dvb_frontend_private* frontend_priv; struct dtv_frontend_properties dtv_property_cache; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

 int VAR_7 ;

 scalar_t__ VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_0(struct dvb_frontend *VAR_10)
{
 struct dtv_frontend_properties *VAR_11 = &VAR_10->dtv_property_cache;
 struct dvb_frontend_private *VAR_12 = VAR_10->frontend_priv;
 struct dvb_frontend_parameters *VAR_13 = &VAR_12->parameters;

 VAR_13->frequency = VAR_11->frequency;
 VAR_13->inversion = VAR_11->inversion;

 switch(VAR_11->modulation) {
 case 129:
 case 131:
 case 130:
 case 128:
  VAR_13->u.qpsk.symbol_rate = VAR_11->symbol_rate;
  VAR_13->u.qpsk.fec_inner = VAR_11->fec_inner;
  break;
 default:
  break;
 }

 if(VAR_11->delivery_system == VAR_8) {

  VAR_13->frequency = VAR_11->frequency;
  VAR_13->inversion = VAR_11->inversion;
  VAR_13->u.ofdm.constellation = VAR_7;
  VAR_13->u.ofdm.code_rate_HP = VAR_4;
  VAR_13->u.ofdm.code_rate_LP = VAR_4;
  VAR_13->u.ofdm.transmission_mode = VAR_9;
  VAR_13->u.ofdm.guard_interval = VAR_5;
  VAR_13->u.ofdm.hierarchy_information = VAR_6;
  if (VAR_11->bandwidth_hz == 8000000)
   VAR_13->u.ofdm.bandwidth = VAR_2;
  else if (VAR_11->bandwidth_hz == 7000000)
   VAR_13->u.ofdm.bandwidth = VAR_1;
  else if (VAR_11->bandwidth_hz == 6000000)
   VAR_13->u.ofdm.bandwidth = VAR_0;
  else
   VAR_13->u.ofdm.bandwidth = VAR_3;
 }
}
