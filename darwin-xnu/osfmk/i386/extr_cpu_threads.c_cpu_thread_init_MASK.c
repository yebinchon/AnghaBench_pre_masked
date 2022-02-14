
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ active_lcpus; } ;
typedef TYPE_2__ x86_core_t ;
struct TYPE_8__ {TYPE_2__* core; } ;
struct TYPE_10__ {TYPE_1__ lcpu; } ;
typedef TYPE_3__ cpu_data_t ;
struct TYPE_11__ {int logical_cpu; int physical_cpu; } ;


 TYPE_2__* FUNC_0 (int) ;
 TYPE_3__* FUNC_1 () ;
 int FUNC_2 () ;
 TYPE_5__ VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 () ;
 int VAR_2 ;

void
FUNC_8(void)
{
    int VAR_3 = FUNC_2();
    cpu_data_t *VAR_4 = FUNC_1();
    x86_core_t *VAR_5;
    static int VAR_6 = 0;





    if (VAR_3 == VAR_1 && !VAR_6) {
 FUNC_5(&VAR_2, 0);




 VAR_4->lcpu.core = FUNC_0(VAR_3);

 VAR_6 = 1;
    }




    VAR_5 = VAR_4->lcpu.core;
    FUNC_3(&VAR_2);
    VAR_0.logical_cpu += 1;
    if (VAR_5->active_lcpus == 0)
 VAR_0.physical_cpu += 1;
    VAR_5->active_lcpus += 1;
    FUNC_6(&VAR_2);

    FUNC_4(VAR_4);
    FUNC_7();
}
