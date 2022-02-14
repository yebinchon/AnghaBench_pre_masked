
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct x86_pmu_capability {unsigned int events_mask; int events_mask_len; int bit_width_fixed; int bit_width_gp; int num_counters_fixed; int num_counters_gp; int version; } ;
struct TYPE_2__ {int events_mask_len; scalar_t__ events_maskl; int cntval_bits; int num_counters_fixed; int num_counters; int version; } ;


 TYPE_1__ VAR_0 ;

void FUNC_0(struct x86_pmu_capability *VAR_1)
{
 VAR_1->version = VAR_0.version;
 VAR_1->num_counters_gp = VAR_0.num_counters;
 VAR_1->num_counters_fixed = VAR_0.num_counters_fixed;
 VAR_1->bit_width_gp = VAR_1->bit_width_fixed = VAR_0.cntval_bits;
 VAR_1->events_mask = (unsigned int)VAR_0.events_maskl;
 VAR_1->events_mask_len = VAR_0.events_mask_len;
}
