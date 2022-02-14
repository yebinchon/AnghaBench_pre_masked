
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
struct TYPE_4__ {scalar_t__ cpu_int_stack_top; } ;
struct TYPE_3__ {scalar_t__ kernel_stack; } ;


 scalar_t__ VAR_0 ;
 TYPE_2__* FUNC_0 () ;
 TYPE_1__* FUNC_1 () ;
 uintptr_t VAR_1 ;
 scalar_t__ FUNC_2 () ;

vm_offset_t FUNC_3(void)
{
 uintptr_t VAR_2 = (uintptr_t) &VAR_2;

 if (FUNC_2() != 0) {
     return (VAR_2 - (FUNC_0()->cpu_int_stack_top - VAR_0));
 } else {
     return (VAR_2 - FUNC_1()->kernel_stack);
 }
}
