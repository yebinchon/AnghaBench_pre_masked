
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cpu_decrementer; int cpu_timebase; scalar_t__ cpu_base_timebase; void* cpu_tbd_hardware_val; void* cpu_tbd_hardware_addr; int cpu_set_decrementer_func; int cpu_get_decrementer_func; int * cpu_get_fiq_handler; } ;
typedef TYPE_1__ cpu_data_t ;
typedef int boolean_t ;
struct TYPE_6__ {int tbd_set_decrementer; int tbd_get_decrementer; int * tbd_fiq_handler; } ;


 TYPE_1__ VAR_0 ;
 TYPE_1__* FUNC_0 () ;
 scalar_t__ FUNC_1 () ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;

void
FUNC_2(boolean_t VAR_6)
{
 cpu_data_t *VAR_7 = FUNC_0();

 if (VAR_7->cpu_get_fiq_handler == ((void*)0)) {
  VAR_7->cpu_get_fiq_handler = VAR_3.tbd_fiq_handler;
  VAR_7->cpu_get_decrementer_func = VAR_3.tbd_get_decrementer;
  VAR_7->cpu_set_decrementer_func = VAR_3.tbd_set_decrementer;
  VAR_7->cpu_tbd_hardware_addr = (void *)VAR_2;
  VAR_7->cpu_tbd_hardware_val = (void *)VAR_4;
 }

 if (!VAR_6 && (VAR_7 == &VAR_0)) {
  VAR_1 = VAR_5 - FUNC_1();
 }

 VAR_7->cpu_decrementer = 0x7FFFFFFFUL;
 VAR_7->cpu_timebase = 0x0UL;
 VAR_7->cpu_base_timebase = VAR_1;
}
