
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int isdbt_partial_reception; int isdbt_sb_mode; int isdbt_sb_subchannel; int isdbt_sb_segment_idx; int isdbt_sb_segment_count; int isdbt_layer_enabled; TYPE_1__* layer; void* code_rate_LP; void* code_rate_HP; void* symbol_rate; int hierarchy; int guard_interval; int bandwidth_hz; int transmission_mode; void* fec_inner; int inversion; int delivery_system; int state; } ;
struct dvb_frontend {TYPE_2__ dtv_property_cache; } ;
struct dtv_frontend_properties {int dummy; } ;
struct TYPE_3__ {int interleaving; int segment_count; void* modulation; void* fec; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;

__attribute__((used)) static int FUNC_1(struct dvb_frontend *VAR_9)
{
 int VAR_10;

 FUNC_0(&(VAR_9->dtv_property_cache), 0,
   sizeof(struct dtv_frontend_properties));

 VAR_9->dtv_property_cache.state = VAR_1;
 VAR_9->dtv_property_cache.delivery_system = VAR_7;
 VAR_9->dtv_property_cache.inversion = VAR_5;
 VAR_9->dtv_property_cache.fec_inner = VAR_2;
 VAR_9->dtv_property_cache.transmission_mode = VAR_8;
 VAR_9->dtv_property_cache.bandwidth_hz = VAR_0;
 VAR_9->dtv_property_cache.guard_interval = VAR_3;
 VAR_9->dtv_property_cache.hierarchy = VAR_4;
 VAR_9->dtv_property_cache.symbol_rate = VAR_6;
 VAR_9->dtv_property_cache.code_rate_HP = VAR_2;
 VAR_9->dtv_property_cache.code_rate_LP = VAR_2;

 VAR_9->dtv_property_cache.isdbt_partial_reception = -1;
 VAR_9->dtv_property_cache.isdbt_sb_mode = -1;
 VAR_9->dtv_property_cache.isdbt_sb_subchannel = -1;
 VAR_9->dtv_property_cache.isdbt_sb_segment_idx = -1;
 VAR_9->dtv_property_cache.isdbt_sb_segment_count = -1;
 VAR_9->dtv_property_cache.isdbt_layer_enabled = 0x7;
 for (VAR_10 = 0; VAR_10 < 3; VAR_10++) {
  VAR_9->dtv_property_cache.layer[VAR_10].fec = VAR_2;
  VAR_9->dtv_property_cache.layer[VAR_10].modulation = VAR_6;
  VAR_9->dtv_property_cache.layer[VAR_10].interleaving = -1;
  VAR_9->dtv_property_cache.layer[VAR_10].segment_count = -1;
 }

 return 0;
}
