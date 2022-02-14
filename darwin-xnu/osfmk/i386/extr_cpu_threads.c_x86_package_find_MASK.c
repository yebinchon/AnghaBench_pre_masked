
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ppkg_num; struct TYPE_7__* next; } ;
typedef TYPE_1__ x86_pkg_t ;
typedef int uint32_t ;
struct TYPE_8__ {int cpu_phys_number; } ;
typedef TYPE_2__ cpu_data_t ;
struct TYPE_9__ {int nPThreadsPerPackage; } ;


 TYPE_2__* FUNC_0 (int) ;
 TYPE_5__ VAR_0 ;
 TYPE_1__* VAR_1 ;

__attribute__((used)) static x86_pkg_t *
FUNC_1(int VAR_2)
{
    x86_pkg_t *VAR_3;
    cpu_data_t *VAR_4;
    uint32_t VAR_5;

    VAR_4 = FUNC_0(VAR_2);

    VAR_5 = VAR_4->cpu_phys_number / VAR_0.nPThreadsPerPackage;

    VAR_3 = VAR_1;
    while (VAR_3 != ((void*)0)) {
 if (VAR_3->ppkg_num == VAR_5)
     break;
 VAR_3 = VAR_3->next;
    }

    return(VAR_3);
}
