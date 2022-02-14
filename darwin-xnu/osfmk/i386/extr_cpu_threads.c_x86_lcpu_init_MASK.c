
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cpu_num; int lnum; int ** caches; int state; int pnum; int * package; int * die; int * core; int * next_in_pkg; int * next_in_die; int * next_in_core; TYPE_2__* cpu; struct TYPE_4__* lcpu; } ;
typedef TYPE_1__ x86_lcpu_t ;
struct TYPE_5__ {int cpu_phys_number; TYPE_1__ lcpu; } ;
typedef TYPE_2__ cpu_data_t ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* FUNC_0 (int) ;

__attribute__((used)) static void
FUNC_1(int VAR_2)
{
    cpu_data_t *VAR_3;
    x86_lcpu_t *VAR_4;
    int VAR_5;

    VAR_3 = FUNC_0(VAR_2);

    VAR_4 = &VAR_3->lcpu;
    VAR_4->lcpu = VAR_4;
    VAR_4->cpu = VAR_3;
    VAR_4->next_in_core = ((void*)0);
    VAR_4->next_in_die = ((void*)0);
    VAR_4->next_in_pkg = ((void*)0);
    VAR_4->core = ((void*)0);
    VAR_4->die = ((void*)0);
    VAR_4->package = ((void*)0);
    VAR_4->cpu_num = VAR_2;
    VAR_4->lnum = VAR_2;
    VAR_4->pnum = VAR_3->cpu_phys_number;
    VAR_4->state = VAR_0;
    for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5 += 1)
 VAR_4->caches[VAR_5] = ((void*)0);
}
