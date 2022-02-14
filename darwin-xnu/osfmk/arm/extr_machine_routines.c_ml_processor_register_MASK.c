
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct processor {int dummy; } ;
typedef scalar_t__ processor_t ;
struct TYPE_11__ {scalar_t__ phys_id; scalar_t__ log_id; scalar_t__* idle_tickle; scalar_t__ l2_access_penalty; int regmap_paddr; scalar_t__ platform_error_handler; int idle_timer_refcon; scalar_t__ idle_timer; int powergate_stub_addr; scalar_t__ powergate_latency; int platform_cache_dispatch; scalar_t__ processor_idle; int cpu_id; } ;
typedef TYPE_1__ ml_processor_info_t ;
typedef scalar_t__ kern_return_t ;
typedef int ipi_handler_t ;
typedef scalar_t__ idle_tickle_t ;
struct TYPE_12__ {void* cpu_console_buf; scalar_t__ cpu_phys_id; int cpu_number; scalar_t__ cpu_processor; scalar_t__ cpu_l2_access_penalty; int cpu_regmap_paddr; void* platform_error_handler; int idle_timer_refcon; void* idle_timer_notify; int cpu_reset_assist; int cpu_idle_latency; int cpu_cache_dispatch; void* cpu_idle_notify; int cpu_id; } ;
typedef TYPE_2__ cpu_data_t ;
typedef scalar_t__ boolean_t ;


 TYPE_2__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 void* FUNC_0 (scalar_t__) ;
 TYPE_2__* FUNC_1 (scalar_t__) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (int ) ;
 int VAR_9 ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (int ,int *) ;
 int FUNC_12 (char*,scalar_t__,scalar_t__) ;
 int FUNC_13 (struct processor*,int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (scalar_t__,int ) ;

kern_return_t
FUNC_16(
                      ml_processor_info_t * VAR_10,
                      processor_t * VAR_11,
                      ipi_handler_t * VAR_12)
{
 cpu_data_t *VAR_13;
 boolean_t VAR_14;

 if (VAR_10->phys_id >= VAR_4) {
  FUNC_12("phys_id %u is too large for MAX_CPUS (%u)", VAR_10->phys_id, VAR_4);
 }


 if ((VAR_10->phys_id >= VAR_6) ||
     (VAR_10->log_id > (uint32_t)FUNC_10()))
  return VAR_2;

 if (VAR_10->log_id != (uint32_t)FUNC_9()) {
  VAR_14 = VAR_1;
  VAR_13 = FUNC_1(VAR_1);
  FUNC_3(VAR_13);
 } else {
  VAR_13 = &VAR_0;
  VAR_14 = VAR_5;
 }

 VAR_13->cpu_id = VAR_10->cpu_id;

 VAR_13->cpu_console_buf = FUNC_0(VAR_14);
 if (VAR_13->cpu_console_buf == (void *)(((void*)0)))
  goto processor_register_error;

 if (!VAR_14) {
  if (FUNC_4(VAR_13) != VAR_3)
   goto processor_register_error;
 }

 VAR_13->cpu_idle_notify = (void *) VAR_10->processor_idle;
 VAR_13->cpu_cache_dispatch = VAR_10->platform_cache_dispatch;
 FUNC_11((uint64_t) VAR_10->powergate_latency, &VAR_13->cpu_idle_latency);
 VAR_13->cpu_reset_assist = FUNC_8(VAR_10->powergate_stub_addr);

 VAR_13->idle_timer_notify = (void *) VAR_10->idle_timer;
 VAR_13->idle_timer_refcon = VAR_10->idle_timer_refcon;

 VAR_13->platform_error_handler = (void *) VAR_10->platform_error_handler;
 VAR_13->cpu_regmap_paddr = VAR_10->regmap_paddr;
 VAR_13->cpu_phys_id = VAR_10->phys_id;
 VAR_13->cpu_l2_access_penalty = VAR_10->l2_access_penalty;

 if (!VAR_14) {
  FUNC_13((struct processor *)VAR_13->cpu_processor,
                 VAR_13->cpu_number, FUNC_14(VAR_9));

  if (VAR_13->cpu_l2_access_penalty) {






   FUNC_15(VAR_13->cpu_processor,
                         VAR_9);
  }
 }

 *VAR_11 = VAR_13->cpu_processor;
 *VAR_12 = VAR_8;
 if (VAR_10->idle_tickle != (idle_tickle_t *) ((void*)0))
  *VAR_10->idle_tickle = (idle_tickle_t) VAR_7;






 if (!VAR_14)
  FUNC_5(VAR_13->cpu_number);

 return VAR_3;

processor_register_error:



 if (!VAR_14)
  FUNC_2(VAR_13);
 return VAR_2;
}
