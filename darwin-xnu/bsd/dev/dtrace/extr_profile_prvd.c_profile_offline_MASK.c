
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* profc_probe; } ;
typedef TYPE_1__ profile_probe_percpu_t ;
typedef int dtrace_cpu_t ;


 int FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, dtrace_cpu_t *VAR_1, void *VAR_2)
{
 profile_probe_percpu_t *VAR_3 = VAR_2;

 FUNC_0(VAR_3->profc_probe == VAR_0);
#pragma unused(pcpu,arg,cpu)
}
