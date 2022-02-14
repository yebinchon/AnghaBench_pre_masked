
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* dies; } ;
typedef TYPE_1__ x86_pkg_t ;
struct TYPE_9__ {int pdie_num; struct TYPE_9__* next_in_pkg; } ;
typedef TYPE_2__ x86_die_t ;
typedef int uint32_t ;
struct TYPE_10__ {int cpu_phys_number; } ;
typedef TYPE_3__ cpu_data_t ;
struct TYPE_11__ {int nPThreadsPerDie; } ;


 TYPE_3__* FUNC_0 (int) ;
 TYPE_6__ VAR_0 ;
 TYPE_1__* FUNC_1 (int) ;

__attribute__((used)) static x86_die_t *
FUNC_2(int VAR_1)
{
    x86_die_t *VAR_2;
    x86_pkg_t *VAR_3;
    cpu_data_t *VAR_4;
    uint32_t VAR_5;

    VAR_4 = FUNC_0(VAR_1);

    VAR_5 = VAR_4->cpu_phys_number / VAR_0.nPThreadsPerDie;

    VAR_3 = FUNC_1(VAR_1);
    if (VAR_3 == ((void*)0))
 return(((void*)0));

    VAR_2 = VAR_3->dies;
    while (VAR_2 != ((void*)0)) {
 if (VAR_2->pdie_num == VAR_5)
     break;
 VAR_2 = VAR_2->next_in_pkg;
    }

    return(VAR_2);
}
