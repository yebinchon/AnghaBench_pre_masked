
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef TYPE_1__* thread_t ;
struct TYPE_4__ {scalar_t__ kernel_stack; int sched_pri; int priority; } ;


 int VAR_0 ;
 int FUNC_0 (int ,uintptr_t,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;

vm_offset_t
FUNC_3(thread_t VAR_2)
{
 vm_offset_t VAR_3;

 FUNC_0(FUNC_1(VAR_0, VAR_1),
       (uintptr_t)FUNC_2(VAR_2), VAR_2->priority,
       VAR_2->sched_pri, 0,
       0);

 VAR_3 = VAR_2->kernel_stack;
 VAR_2->kernel_stack = 0;

 return (VAR_3);
}
