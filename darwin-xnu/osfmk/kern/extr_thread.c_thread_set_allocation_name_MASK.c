
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* thread_kernel_state_t ;
typedef scalar_t__ kern_allocation_name_t ;
struct TYPE_3__ {scalar_t__ allocation_name; } ;


 int FUNC_0 () ;
 TYPE_1__* FUNC_1 (int ) ;

kern_allocation_name_t FUNC_2(kern_allocation_name_t VAR_0)
{
 kern_allocation_name_t VAR_1;
 thread_kernel_state_t VAR_2 = FUNC_1(FUNC_0());
 VAR_1 = VAR_2->allocation_name;

 if (!VAR_0 || !VAR_2->allocation_name) VAR_2->allocation_name = VAR_0;
 return VAR_1;
}
