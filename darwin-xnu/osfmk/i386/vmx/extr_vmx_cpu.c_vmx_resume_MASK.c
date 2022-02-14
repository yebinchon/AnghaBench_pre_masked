
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vmx_on; } ;
struct TYPE_5__ {TYPE_1__ specs; } ;
typedef TYPE_2__ vmx_cpu_t ;
typedef scalar_t__ boolean_t ;
struct TYPE_6__ {TYPE_2__ cpu_vmx; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_3__* FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_1 ;

void
FUNC_4(boolean_t VAR_2)
{
 FUNC_0("vmx_resume\n");

 FUNC_2();

 if (VAR_1 == 0)
  return;







 if (VAR_2) {
  vmx_cpu_t *VAR_3 = &FUNC_1()->cpu_vmx;
  VAR_3->specs.vmx_on = VAR_0;
 }

 FUNC_3(((void*)0));
}
