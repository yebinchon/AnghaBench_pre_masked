
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {int modulation; } ;
struct TYPE_12__ {int hierarchy_information; int guard_interval; int transmission_mode; int constellation; int code_rate_LP; int code_rate_HP; int bandwidth; } ;
struct TYPE_11__ {int modulation; int fec_inner; int symbol_rate; } ;
struct TYPE_10__ {int fec_inner; int symbol_rate; } ;
struct TYPE_14__ {TYPE_6__ vsb; TYPE_5__ ofdm; TYPE_4__ qam; TYPE_3__ qpsk; } ;
struct dvb_frontend_parameters {TYPE_7__ u; int inversion; int frequency; } ;
struct TYPE_8__ {int type; } ;
struct TYPE_9__ {TYPE_1__ info; } ;
struct dtv_frontend_properties {int bandwidth_hz; int delivery_system; int modulation; int hierarchy; int guard_interval; int transmission_mode; int code_rate_LP; int code_rate_HP; int fec_inner; int symbol_rate; int rolloff; int inversion; int frequency; } ;
struct dvb_frontend {TYPE_2__ ops; struct dtv_frontend_properties dtv_property_cache; } ;


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

__attribute__((used)) static void FUNC_0(struct dvb_frontend *VAR_12,
        struct dvb_frontend_parameters *VAR_13)
{
 struct dtv_frontend_properties *VAR_14 = &VAR_12->dtv_property_cache;

 VAR_14->frequency = VAR_13->frequency;
 VAR_14->inversion = VAR_13->inversion;

 switch (VAR_12->ops.info.type) {
 case 128:
  VAR_14->modulation = VAR_3;
  VAR_14->rolloff = VAR_4;
  VAR_14->symbol_rate = VAR_13->u.qpsk.symbol_rate;
  VAR_14->fec_inner = VAR_13->u.qpsk.fec_inner;
  VAR_14->delivery_system = VAR_8;
  break;
 case 129:
  VAR_14->symbol_rate = VAR_13->u.qam.symbol_rate;
  VAR_14->fec_inner = VAR_13->u.qam.fec_inner;
  VAR_14->modulation = VAR_13->u.qam.modulation;
  VAR_14->delivery_system = VAR_6;
  break;
 case 130:
  if (VAR_13->u.ofdm.bandwidth == VAR_0)
   VAR_14->bandwidth_hz = 6000000;
  else if (VAR_13->u.ofdm.bandwidth == VAR_1)
   VAR_14->bandwidth_hz = 7000000;
  else if (VAR_13->u.ofdm.bandwidth == VAR_2)
   VAR_14->bandwidth_hz = 8000000;
  else

   VAR_14->bandwidth_hz = 0;
  VAR_14->code_rate_HP = VAR_13->u.ofdm.code_rate_HP;
  VAR_14->code_rate_LP = VAR_13->u.ofdm.code_rate_LP;
  VAR_14->modulation = VAR_13->u.ofdm.constellation;
  VAR_14->transmission_mode = VAR_13->u.ofdm.transmission_mode;
  VAR_14->guard_interval = VAR_13->u.ofdm.guard_interval;
  VAR_14->hierarchy = VAR_13->u.ofdm.hierarchy_information;
  VAR_14->delivery_system = VAR_9;
  break;
 case 131:
  VAR_14->modulation = VAR_13->u.vsb.modulation;
  if ((VAR_14->modulation == VAR_11) || (VAR_14->modulation == VAR_10))
   VAR_14->delivery_system = VAR_5;
  else
   VAR_14->delivery_system = VAR_7;
  break;
 }
}
