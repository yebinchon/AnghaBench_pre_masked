
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_3__ {scalar_t__ rtcPop; scalar_t__ cpu_idle_latency; scalar_t__ cpu_idle_pop; } ;
typedef TYPE_1__ cpu_data_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 TYPE_1__* FUNC_1 () ;
 scalar_t__ FUNC_2 () ;
 int FUNC_3 (int ) ;

boolean_t
FUNC_4(void)
{
 int VAR_2;
 uint64_t VAR_3;
 uint64_t VAR_4;
 cpu_data_t * VAR_5;

 VAR_5 = FUNC_1();
 VAR_4 = FUNC_2();

 if (((VAR_5->rtcPop < VAR_4) ||
     (VAR_5->rtcPop - VAR_4) < VAR_5->cpu_idle_latency))
  return VAR_0;

 VAR_3 = VAR_5->rtcPop - VAR_5->cpu_idle_latency;

 VAR_2 = FUNC_0(VAR_3, VAR_4);
 VAR_5->cpu_idle_pop = VAR_2 + VAR_4;
 FUNC_3((uint32_t) VAR_2);

 return VAR_1;
}
