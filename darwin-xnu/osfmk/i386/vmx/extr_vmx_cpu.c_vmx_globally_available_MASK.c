
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vmx_present; } ;
struct TYPE_5__ {TYPE_1__ specs; } ;
typedef TYPE_2__ vmx_cpu_t ;
typedef int boolean_t ;
struct TYPE_6__ {TYPE_2__ cpu_vmx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 TYPE_3__* FUNC_1 (unsigned int) ;
 unsigned int FUNC_2 () ;

__attribute__((used)) static boolean_t
FUNC_3(void)
{
 unsigned int VAR_2;
 unsigned int VAR_3 = FUNC_2();
 boolean_t VAR_4 = VAR_1;

 for (VAR_2=0; VAR_2<VAR_3; VAR_2++) {
  vmx_cpu_t *VAR_5 = &FUNC_1(VAR_2)->cpu_vmx;

  if (!VAR_5->specs.vmx_present)
   VAR_4 = VAR_0;
 }
 FUNC_0("VMX available: %d\n", VAR_4);
 return VAR_4;
}
