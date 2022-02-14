
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef int uint32_t ;
struct pmap {int dummy; } ;
struct TYPE_4__ {scalar_t__* cpu_asid_high_bits; int cpu_number; scalar_t__ cpu_user_pmap_stamp; struct pmap* cpu_user_pmap; } ;
typedef TYPE_1__ pmap_cpu_data_t ;
struct TYPE_5__ {int cpu_idle_latency; int cpu_idle_pop; int cpu_reset_type; int cpu_reset_handler; int cpu_reset_assist; int cpu_regmap_paddr; int cpu_phys_id; int cpu_sleep_token_last; int cpu_CLWFlush_req; int cpu_CLWFlush_last; int cpu_CLWClean_req; int cpu_CLWClean_last; int cpu_CLW_active; int halt_status; TYPE_1__ cpu_pmap_cpu_data; int * cpu_xcall_p1; int * cpu_xcall_p0; int cpu_sleep_token; int * cpu_set_decrementer_func; int * cpu_get_decrementer_func; int * cpu_tbd_hardware_val; int * cpu_tbd_hardware_addr; int * cpu_get_fiq_handler; scalar_t__ failed_signal_count; scalar_t__ failed_signal; int * failed_xcall; int cpu_signal; scalar_t__ cpu_l3_size; scalar_t__ cpu_l3_id; scalar_t__ cpu_l2_size; scalar_t__ cpu_l2_id; scalar_t__ cpu_cluster_id; int cpu_cluster_type; scalar_t__ cpu_l2_access_penalty; void* cpu_idle_notify; scalar_t__ cpu_base_timebase_high; scalar_t__ cpu_base_timebase_low; int * cpu_user_debug; int * rtclock_datap; int rtcPop; void* cpu_cache_dispatch; int cpu_pending_ast; scalar_t__ cpu_int_state; scalar_t__ interrupts_enabled; scalar_t__ cpu_exc_vectors; scalar_t__ cpu_flags; } ;
typedef TYPE_2__ cpu_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void
FUNC_0(cpu_data_t *VAR_9)
{
 uint32_t VAR_10 = 0;

 VAR_9->cpu_flags = 0;



 VAR_9->interrupts_enabled = 0;
 VAR_9->cpu_int_state = 0;
 VAR_9->cpu_pending_ast = VAR_1;
 VAR_9->cpu_cache_dispatch = (void *) 0;
 VAR_9->rtcPop = VAR_4;
 VAR_9->rtclock_datap = &VAR_7;
 VAR_9->cpu_user_debug = ((void*)0);
 VAR_9->cpu_base_timebase_low = 0;
 VAR_9->cpu_base_timebase_high = 0;
 VAR_9->cpu_idle_notify = (void *) 0;
 VAR_9->cpu_idle_latency = 0x0ULL;
 VAR_9->cpu_idle_pop = 0x0ULL;
 VAR_9->cpu_reset_type = 0x0UL;
 VAR_9->cpu_reset_handler = 0x0UL;
 VAR_9->cpu_reset_assist = 0x0UL;
 VAR_9->cpu_regmap_paddr = 0x0ULL;
 VAR_9->cpu_phys_id = 0x0UL;
 VAR_9->cpu_l2_access_penalty = 0;
 VAR_9->cpu_cluster_type = VAR_2;
 VAR_9->cpu_cluster_id = 0;
 VAR_9->cpu_l2_id = 0;
 VAR_9->cpu_l2_size = 0;
 VAR_9->cpu_l3_id = 0;
 VAR_9->cpu_l3_size = 0;

 VAR_9->cpu_signal = VAR_8;







 VAR_9->cpu_get_fiq_handler = ((void*)0);
 VAR_9->cpu_tbd_hardware_addr = ((void*)0);
 VAR_9->cpu_tbd_hardware_val = ((void*)0);
 VAR_9->cpu_get_decrementer_func = ((void*)0);
 VAR_9->cpu_set_decrementer_func = ((void*)0);
 VAR_9->cpu_sleep_token = VAR_0;
 VAR_9->cpu_sleep_token_last = 0x00000000UL;
 VAR_9->cpu_xcall_p0 = ((void*)0);
 VAR_9->cpu_xcall_p1 = ((void*)0);
 pmap_cpu_data_t * VAR_11 = &VAR_9->cpu_pmap_cpu_data;

 VAR_11->cpu_user_pmap = (struct pmap *) ((void*)0);
 VAR_11->cpu_user_pmap_stamp = 0;
 VAR_11->cpu_number = VAR_6;

 for (VAR_10 = 0; VAR_10 < (sizeof(VAR_11->cpu_asid_high_bits) / sizeof(*VAR_11->cpu_asid_high_bits)); VAR_10++) {
  VAR_11->cpu_asid_high_bits[VAR_10] = 0;
 }
 VAR_9->halt_status = VAR_3;
}
