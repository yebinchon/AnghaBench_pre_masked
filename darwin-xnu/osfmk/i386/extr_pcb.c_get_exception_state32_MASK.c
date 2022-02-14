
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cr2; int err; int cpu; int trapno; } ;
typedef TYPE_1__ x86_saved_state32_t ;
struct TYPE_6__ {int faultvaddr; int err; int cpu; int trapno; } ;
typedef TYPE_2__ x86_exception_state32_t ;
typedef int thread_t ;


 TYPE_1__* FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(thread_t VAR_0, x86_exception_state32_t *VAR_1)
{
        x86_saved_state32_t *VAR_2;

        VAR_2 = FUNC_0(VAR_0);

 VAR_1->trapno = VAR_2->trapno;
 VAR_1->cpu = VAR_2->cpu;
 VAR_1->err = VAR_2->err;
 VAR_1->faultvaddr = VAR_2->cr2;
}
