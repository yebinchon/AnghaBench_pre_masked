
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int event_t ;
typedef int boolean_t ;
struct TYPE_2__ {unsigned int max_cpus; unsigned int physical_cpu_max; unsigned int logical_cpu_max; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void
FUNC_2(unsigned int VAR_5)
{
 boolean_t VAR_6;

 VAR_6 = FUNC_0(VAR_0);
 if (VAR_4 != VAR_1) {
  VAR_3.max_cpus = VAR_5;
  VAR_3.physical_cpu_max = VAR_5;
  VAR_3.logical_cpu_max = VAR_5;
  if (VAR_4 == VAR_2)
   FUNC_1((event_t) & VAR_4);
  VAR_4 = VAR_1;
 }
 (void) FUNC_0(VAR_6);
}
