
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int i386_intr_func_t ;
struct TYPE_4__ {int version; } ;
struct TYPE_5__ {TYPE_1__ cpuid_arch_perf_leaf; } ;
typedef TYPE_2__ i386_cpu_info_t ;


 TYPE_2__* FUNC_0 () ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

void
FUNC_2(void)
{
 i386_cpu_info_t *VAR_2 = FUNC_0();
 if (VAR_2->cpuid_arch_perf_leaf.version >= 2) {
  FUNC_1((i386_intr_func_t)VAR_1);
  VAR_0 = 1;
 }
}
