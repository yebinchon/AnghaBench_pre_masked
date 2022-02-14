
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct cpu_data {uintptr_t cpu_debug_interface_map; TYPE_1__* cpu_user_debug; } ;
typedef int boolean_t ;
struct TYPE_6__ {scalar_t__* wcr; scalar_t__* wvr; scalar_t__* bcr; scalar_t__* bvr; } ;
typedef TYPE_1__ arm_debug_state_t ;
struct TYPE_7__ {scalar_t__ coprocessor_core_debug; scalar_t__ memory_mapped_core_debug; } ;
typedef TYPE_2__ arm_debug_info_t ;


 scalar_t__ volatile VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (TYPE_1__*) ;
 struct cpu_data* FUNC_2 () ;
 int FUNC_3 (int ) ;

void FUNC_4(arm_debug_state_t *VAR_10)
{




 struct cpu_data *VAR_11;
 arm_debug_info_t *VAR_12 = FUNC_0();
 boolean_t VAR_13;

 VAR_13 = FUNC_3(VAR_9);
 VAR_11 = FUNC_2();


 VAR_11->cpu_user_debug = VAR_10;

 if (VAR_12->memory_mapped_core_debug) {
  int VAR_14;
  uintptr_t VAR_15 = VAR_11->cpu_debug_interface_map;


  *(volatile uint32_t *)(VAR_15 + VAR_5) = VAR_1;


  *(volatile uint32_t *)(VAR_15 + VAR_6);


  *(volatile uint32_t *)(VAR_15 + VAR_4) |= VAR_0;


  for (VAR_14 = 0; VAR_14 < 16; VAR_14++) {
   ((volatile uint32_t *)(VAR_15 + VAR_2))[VAR_14] = 0;
   ((volatile uint32_t *)(VAR_15 + VAR_7))[VAR_14] = 0;
  }


  if (VAR_10 == ((void*)0)) {
   *(volatile uint32_t *)(VAR_15 + VAR_4) &= ~VAR_0;
  } else {
   for (VAR_14 = 0; VAR_14 < 16; VAR_14++) {
    ((volatile uint32_t *)(VAR_15 + VAR_3))[VAR_14] = VAR_10->bvr[VAR_14];
    ((volatile uint32_t *)(VAR_15 + VAR_2))[VAR_14] = VAR_10->bcr[VAR_14];
    ((volatile uint32_t *)(VAR_15 + VAR_8))[VAR_14] = VAR_10->wvr[VAR_14];
    ((volatile uint32_t *)(VAR_15 + VAR_7))[VAR_14] = VAR_10->wcr[VAR_14];
   }
  }


  *(volatile uint32_t *)(VAR_15 + VAR_5) = 0;

    } else if (VAR_12->coprocessor_core_debug) {
  FUNC_1(VAR_10);
 }

 (void) FUNC_3(VAR_13);

 return;
}
