
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ active_lcpus; } ;
typedef TYPE_2__ x86_core_t ;
struct TYPE_6__ {TYPE_2__* core; } ;
struct TYPE_8__ {TYPE_1__ lcpu; } ;
typedef TYPE_3__ cpu_data_t ;
struct TYPE_9__ {int logical_cpu; int physical_cpu; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 () ;
 TYPE_4__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;

__attribute__((noreturn))
void
FUNC_5(void)
{
    x86_core_t *VAR_4;
    cpu_data_t *VAR_5 = FUNC_0();

    FUNC_2(&VAR_3);
    VAR_2.logical_cpu -= 1;
    VAR_4 = VAR_5->lcpu.core;
    VAR_4->active_lcpus -= 1;
    if (VAR_4->active_lcpus == 0)
 VAR_2.physical_cpu -= 1;
    FUNC_4(&VAR_3);





    FUNC_1(VAR_0);
    while (1) {
 FUNC_3(VAR_1);
    }

}
