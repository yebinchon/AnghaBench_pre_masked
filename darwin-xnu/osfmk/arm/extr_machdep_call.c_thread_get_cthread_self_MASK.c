
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef uintptr_t vm_address_t ;
typedef uintptr_t kern_return_t ;
struct TYPE_3__ {uintptr_t cthread_self; } ;
struct TYPE_4__ {TYPE_1__ machine; } ;


 uintptr_t VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 () ;
 uintptr_t FUNC_2 () ;

vm_address_t
FUNC_3(void)
{
 uintptr_t VAR_1;

 VAR_1 = FUNC_2();





 VAR_1 &= VAR_0;
 FUNC_0( VAR_1 == FUNC_1()->machine.cthread_self);
 return VAR_1;

}
