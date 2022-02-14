
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_3__ {scalar_t__ cpu_idle_latency; } ;
typedef TYPE_1__ cpu_data_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 () ;

boolean_t
FUNC_1(uint64_t VAR_2)
{
 cpu_data_t *VAR_3 = FUNC_0();

 if (VAR_3->cpu_idle_latency) {
  return (VAR_2 < VAR_3->cpu_idle_latency) ? VAR_1 : VAR_0;
 } else {




  return VAR_0;
 }
}
