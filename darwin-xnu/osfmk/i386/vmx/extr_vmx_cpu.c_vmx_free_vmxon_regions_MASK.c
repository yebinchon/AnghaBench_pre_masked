
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * vmxon_region; } ;
typedef TYPE_1__ vmx_cpu_t ;
struct TYPE_4__ {TYPE_1__ cpu_vmx; } ;


 TYPE_2__* FUNC_0 (unsigned int) ;
 unsigned int VAR_0 ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(void)
{
 unsigned int VAR_1;

 for (VAR_1=0; VAR_1<VAR_0; VAR_1++) {
  vmx_cpu_t *VAR_2 = &FUNC_0(VAR_1)->cpu_vmx;

  FUNC_1(VAR_2->vmxon_region);
  VAR_2->vmxon_region = ((void*)0);
 }
}
