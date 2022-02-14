
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int state; } ;
struct TYPE_6__ {TYPE_2__ lcpu; } ;
typedef TYPE_1__ cpu_data_t ;
struct TYPE_8__ {int (* markCPURunning ) (TYPE_2__*) ;} ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 () ;
 TYPE_3__* VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;

void
FUNC_2(cpu_data_t *VAR_3)
{
    cpu_data_t *VAR_4 = FUNC_0();

    if (VAR_2
 && VAR_1 != ((void*)0)
 && VAR_1->markCPURunning != ((void*)0))
 (*VAR_1->markCPURunning)(&VAR_3->lcpu);
    else
 VAR_4->lcpu.state = VAR_0;
}
