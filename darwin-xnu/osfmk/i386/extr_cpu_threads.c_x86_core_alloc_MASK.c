
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int pcore_num; int lcore_num; int flags; struct TYPE_8__* next_in_die; } ;
typedef TYPE_1__ x86_core_t ;
struct TYPE_9__ {int cpu_phys_number; } ;
typedef TYPE_2__ cpu_data_t ;
struct TYPE_10__ {int nPThreadsPerCore; int nPCoresPerPackage; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (void*,int) ;
 TYPE_2__* FUNC_1 (int) ;
 TYPE_1__* VAR_4 ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int *) ;
 TYPE_4__ VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static x86_core_t *
FUNC_6(int VAR_7)
{
    x86_core_t *VAR_8;
    cpu_data_t *VAR_9;

    VAR_9 = FUNC_1(VAR_7);

    FUNC_3(&VAR_6);
    if (VAR_4 != ((void*)0)) {
 VAR_8 = VAR_4;
 VAR_4 = VAR_8->next_in_die;
 VAR_8->next_in_die = ((void*)0);
 FUNC_5(&VAR_6);
    } else {
 FUNC_5(&VAR_6);
 VAR_8 = FUNC_2(sizeof(x86_core_t));
 if (VAR_8 == ((void*)0))
     FUNC_4("x86_core_alloc() kalloc of x86_core_t failed!\n");
    }

    FUNC_0((void *) VAR_8, sizeof(x86_core_t));

    VAR_8->pcore_num = VAR_9->cpu_phys_number / VAR_5.nPThreadsPerCore;
    VAR_8->lcore_num = VAR_8->pcore_num % VAR_5.nPCoresPerPackage;

    VAR_8->flags = VAR_2 | VAR_3
         | VAR_0 | VAR_1;

    return(VAR_8);
}
