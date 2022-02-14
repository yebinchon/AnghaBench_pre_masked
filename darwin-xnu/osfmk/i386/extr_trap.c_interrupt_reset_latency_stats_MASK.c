
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_2__ {scalar_t__ cpu_max_observed_int_latency_vector; scalar_t__ cpu_max_observed_int_latency; } ;


 TYPE_1__** VAR_0 ;
 size_t VAR_1 ;

void FUNC_0(void) {
 uint32_t VAR_2;
 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++) {
  VAR_0[VAR_2]->cpu_max_observed_int_latency =
      VAR_0[VAR_2]->cpu_max_observed_int_latency_vector = 0;
 }
}
