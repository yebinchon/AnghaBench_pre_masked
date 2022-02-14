
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ thread_count; scalar_t__ core_count; } ;
typedef TYPE_1__ i386_cpu_info_t ;
typedef int boolean_t ;


 TYPE_1__* FUNC_0 () ;

__attribute__((used)) static boolean_t
FUNC_1(void)
{
    i386_cpu_info_t *VAR_0;

    VAR_0 = FUNC_0();
    return(VAR_0->thread_count > VAR_0->core_count);
}
