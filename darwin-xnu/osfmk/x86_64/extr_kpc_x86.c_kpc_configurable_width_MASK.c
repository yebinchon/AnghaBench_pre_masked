
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int width; } ;
struct TYPE_5__ {TYPE_1__ cpuid_arch_perf_leaf; } ;
typedef TYPE_2__ i386_cpu_info_t ;


 TYPE_2__* FUNC_0 () ;

__attribute__((used)) static uint8_t
FUNC_1(void)
{
 i386_cpu_info_t *VAR_0 = ((void*)0);

 VAR_0 = FUNC_0();

 return VAR_0->cpuid_arch_perf_leaf.width;
}
