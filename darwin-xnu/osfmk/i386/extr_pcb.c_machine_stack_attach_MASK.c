
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int vm_offset_t ;
typedef TYPE_1__* thread_t ;
struct x86_kernel_state {unsigned long k_rip; unsigned long k_rbx; unsigned long k_rsp; unsigned long k_eip; unsigned long k_ebx; unsigned long k_esp; } ;
struct TYPE_5__ {int kernel_stack; int sched_pri; int priority; } ;


 int VAR_0 ;
 int FUNC_0 (int ,uintptr_t,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_1 ;
 struct x86_kernel_state* FUNC_2 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

void
FUNC_6(
 thread_t VAR_4,
 vm_offset_t VAR_5)
{
 struct x86_kernel_state *VAR_6;

 FUNC_0(FUNC_1(VAR_0, VAR_1),
       (uintptr_t)FUNC_5(VAR_4), VAR_4->priority,
       VAR_4->sched_pri, 0, 0);

 FUNC_3(VAR_5);
 VAR_4->kernel_stack = VAR_5;
 FUNC_4(VAR_4);

 VAR_6 = FUNC_2(VAR_5);

 VAR_6->k_rip = (unsigned long) VAR_2;
 VAR_6->k_rbx = (unsigned long) VAR_3;
 VAR_6->k_rsp = (unsigned long) FUNC_2(VAR_5);






 return;
}
