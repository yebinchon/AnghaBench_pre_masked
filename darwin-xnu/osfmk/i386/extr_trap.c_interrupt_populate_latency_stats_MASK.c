
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef size_t uint32_t ;
struct TYPE_2__ {scalar_t__ cpu_max_observed_int_latency; int cpu_max_observed_int_latency_vector; } ;


 TYPE_1__** VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,unsigned int,char*,size_t,int,scalar_t__) ;

void FUNC_1(char *VAR_2, unsigned VAR_3) {
 uint32_t VAR_4, VAR_5 = ~0;
 uint64_t VAR_6 = 0;

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (VAR_6 < VAR_0[VAR_4]->cpu_max_observed_int_latency) {
   VAR_6 = VAR_0[VAR_4]->cpu_max_observed_int_latency;
   VAR_5 = VAR_4;
  }
 }

 if (VAR_5 < VAR_1)
  FUNC_0(VAR_2, VAR_3, "0x%x 0x%x 0x%llx", VAR_5, VAR_0[VAR_5]->cpu_max_observed_int_latency_vector, VAR_0[VAR_5]->cpu_max_observed_int_latency);
}
