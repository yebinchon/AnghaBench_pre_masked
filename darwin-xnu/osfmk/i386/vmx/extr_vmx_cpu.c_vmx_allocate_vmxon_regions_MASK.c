
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vmcs_id; } ;
struct TYPE_5__ {TYPE_1__ specs; int * vmxon_region; } ;
typedef TYPE_2__ vmx_cpu_t ;
typedef int uint32_t ;
struct TYPE_6__ {TYPE_2__ cpu_vmx; } ;


 TYPE_3__* FUNC_0 (unsigned int) ;
 int FUNC_1 (char*) ;
 unsigned int VAR_0 ;
 int * FUNC_2 () ;

__attribute__((used)) static void
FUNC_3(void)
{
 unsigned int VAR_1;

 for (VAR_1=0; VAR_1<VAR_0; VAR_1++) {
  vmx_cpu_t *VAR_2 = &FUNC_0(VAR_1)->cpu_vmx;


  VAR_2->vmxon_region = FUNC_2();
  if (((void*)0) == VAR_2->vmxon_region)
   FUNC_1("vmx_allocate_vmxon_regions: unable to allocate VMXON region");
  *(uint32_t*)(VAR_2->vmxon_region) = VAR_2->specs.vmcs_id;
 }
}
