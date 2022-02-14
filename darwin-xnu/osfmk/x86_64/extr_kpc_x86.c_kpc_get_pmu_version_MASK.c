
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int version; } ;
struct TYPE_5__ {TYPE_1__ cpuid_arch_perf_leaf; } ;
typedef TYPE_2__ i386_cpu_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_0 () ;

int
FUNC_1(void)
{
 i386_cpu_info_t *VAR_3 = FUNC_0();

 uint8_t VAR_4 = VAR_3->cpuid_arch_perf_leaf.version;

 if (VAR_4 == 3) {
  return VAR_2;
 } else if (VAR_4 == 2) {
  return VAR_1;
 }

 return VAR_0;
}
