
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct dvb_frontend_parameters {int dummy; } ;
struct TYPE_4__ {int bandwidth_hz; int isdbt_sb_mode; int inversion; int isdbt_partial_reception; TYPE_1__* layer; int guard_interval; int transmission_mode; } ;
struct dvb_frontend {TYPE_2__ dtv_property_cache; struct dib8000_state* demodulator_priv; } ;
struct dib8000_state {int dummy; } ;
struct TYPE_3__ {int segment_count; int interleaving; int modulation; int fec; } ;


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
 int FUNC_0 (struct dib8000_state*,int) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static int FUNC_2(struct dvb_frontend *VAR_15, struct dvb_frontend_parameters *VAR_16)
{
 struct dib8000_state *VAR_17 = VAR_15->demodulator_priv;
 u16 VAR_18, VAR_19 = 0;

 VAR_15->dtv_property_cache.bandwidth_hz = 6000000;

 VAR_15->dtv_property_cache.isdbt_sb_mode = FUNC_0(VAR_17, 508) & 0x1;

 VAR_19 = FUNC_0(VAR_17, 570);
 VAR_15->dtv_property_cache.inversion = (VAR_19 & 0x40) >> 6;
 switch ((VAR_19 & 0x30) >> 4) {
 case 1:
  VAR_15->dtv_property_cache.transmission_mode = VAR_13;
  break;
 case 3:
 default:
  VAR_15->dtv_property_cache.transmission_mode = VAR_14;
  break;
 }

 switch (VAR_19 & 0x3) {
 case 0:
  VAR_15->dtv_property_cache.guard_interval = VAR_7;
  FUNC_1("dib8000_get_frontend GI = 1/32 ");
  break;
 case 1:
  VAR_15->dtv_property_cache.guard_interval = VAR_6;
  FUNC_1("dib8000_get_frontend GI = 1/16 ");
  break;
 case 2:
  FUNC_1("dib8000_get_frontend GI = 1/8 ");
  VAR_15->dtv_property_cache.guard_interval = VAR_9;
  break;
 case 3:
  FUNC_1("dib8000_get_frontend GI = 1/4 ");
  VAR_15->dtv_property_cache.guard_interval = VAR_8;
  break;
 }

 VAR_19 = FUNC_0(VAR_17, 505);
 VAR_15->dtv_property_cache.isdbt_partial_reception = VAR_19 & 1;
 FUNC_1("dib8000_get_frontend : partial_reception = %d ", VAR_15->dtv_property_cache.isdbt_partial_reception);

 for (VAR_18 = 0; VAR_18 < 3; VAR_18++) {
  VAR_19 = FUNC_0(VAR_17, 493 + VAR_18);
  VAR_15->dtv_property_cache.layer[VAR_18].segment_count = VAR_19 & 0x0F;
  FUNC_1("dib8000_get_frontend : Layer %d segments = %d ", VAR_18, VAR_15->dtv_property_cache.layer[VAR_18].segment_count);

  VAR_19 = FUNC_0(VAR_17, 499 + VAR_18);
  VAR_15->dtv_property_cache.layer[VAR_18].interleaving = VAR_19 & 0x3;
  FUNC_1("dib8000_get_frontend : Layer %d time_intlv = %d ", VAR_18, VAR_15->dtv_property_cache.layer[VAR_18].interleaving);

  VAR_19 = FUNC_0(VAR_17, 481 + VAR_18);
  switch (VAR_19 & 0x7) {
  case 1:
   VAR_15->dtv_property_cache.layer[VAR_18].fec = VAR_1;
   FUNC_1("dib8000_get_frontend : Layer %d Code Rate = 1/2 ", VAR_18);
   break;
  case 2:
   VAR_15->dtv_property_cache.layer[VAR_18].fec = VAR_2;
   FUNC_1("dib8000_get_frontend : Layer %d Code Rate = 2/3 ", VAR_18);
   break;
  case 3:
   VAR_15->dtv_property_cache.layer[VAR_18].fec = VAR_3;
   FUNC_1("dib8000_get_frontend : Layer %d Code Rate = 3/4 ", VAR_18);
   break;
  case 5:
   VAR_15->dtv_property_cache.layer[VAR_18].fec = VAR_4;
   FUNC_1("dib8000_get_frontend : Layer %d Code Rate = 5/6 ", VAR_18);
   break;
  default:
   VAR_15->dtv_property_cache.layer[VAR_18].fec = VAR_5;
   FUNC_1("dib8000_get_frontend : Layer %d Code Rate = 7/8 ", VAR_18);
   break;
  }

  VAR_19 = FUNC_0(VAR_17, 487 + VAR_18);
  switch (VAR_19 & 0x3) {
  case 0:
   FUNC_1("dib8000_get_frontend : Layer %d DQPSK ", VAR_18);
   VAR_15->dtv_property_cache.layer[VAR_18].modulation = VAR_0;
   break;
  case 1:
   VAR_15->dtv_property_cache.layer[VAR_18].modulation = VAR_12;
   FUNC_1("dib8000_get_frontend : Layer %d QPSK ", VAR_18);
   break;
  case 2:
   VAR_15->dtv_property_cache.layer[VAR_18].modulation = VAR_10;
   FUNC_1("dib8000_get_frontend : Layer %d QAM16 ", VAR_18);
   break;
  case 3:
  default:
   FUNC_1("dib8000_get_frontend : Layer %d QAM64 ", VAR_18);
   VAR_15->dtv_property_cache.layer[VAR_18].modulation = VAR_11;
   break;
  }
 }
 return 0;
}
