
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef uintptr_t vm_offset_t ;
struct TYPE_4__ {uintptr_t kernel_stack; } ;
struct TYPE_3__ {uintptr_t intstack_top; } ;


 uintptr_t VAR_0 ;
 TYPE_2__* FUNC_0 () ;
 TYPE_1__* FUNC_1 () ;
 uintptr_t VAR_1 ;

vm_offset_t
FUNC_2(void)
{
 uintptr_t VAR_2 = (uintptr_t) &VAR_2;
 vm_offset_t VAR_3;





 VAR_3 = FUNC_1()->intstack_top;
 if ((VAR_2 < VAR_3) && (VAR_2 > VAR_3 - VAR_0)) {
  return (VAR_2 - (FUNC_1()->intstack_top - VAR_0));
 } else {
  return (VAR_2 - FUNC_0()->kernel_stack);
 }
}
