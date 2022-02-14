
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* cores; } ;
typedef TYPE_1__ x86_die_t ;
struct TYPE_9__ {int pcore_num; struct TYPE_9__* next_in_die; } ;
typedef TYPE_2__ x86_core_t ;
typedef int uint32_t ;
struct TYPE_10__ {int cpu_phys_number; } ;
typedef TYPE_3__ cpu_data_t ;
struct TYPE_11__ {int nPThreadsPerCore; } ;


 TYPE_3__* FUNC_0 (int) ;
 TYPE_6__ VAR_0 ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static x86_core_t *
FUNC_2(int VAR_1)
{
    x86_core_t *VAR_2;
    x86_die_t *VAR_3;
    cpu_data_t *VAR_4;
    uint32_t VAR_5;

    VAR_4 = FUNC_0(VAR_1);

    VAR_5 = VAR_4->cpu_phys_number / VAR_0.nPThreadsPerCore;

    VAR_3 = FUNC_1(VAR_1);
    if (VAR_3 == ((void*)0))
 return(((void*)0));

    VAR_2 = VAR_3->cores;
    while (VAR_2 != ((void*)0)) {
 if (VAR_2->pcore_num == VAR_5)
     break;
 VAR_2 = VAR_2->next_in_die;
    }

    return(VAR_2);
}
