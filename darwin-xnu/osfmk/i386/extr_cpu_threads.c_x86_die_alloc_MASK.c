
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int pdie_num; int flags; int ldie_num; struct TYPE_8__* next_in_pkg; } ;
typedef TYPE_1__ x86_die_t ;
struct TYPE_9__ {int cpu_phys_number; } ;
typedef TYPE_2__ cpu_data_t ;
struct TYPE_10__ {int nPThreadsPerDie; } ;


 int VAR_0 ;
 int FUNC_0 (long*,int) ;
 int FUNC_1 (void*,int) ;
 TYPE_2__* FUNC_2 (int) ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int *) ;
 TYPE_4__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static x86_die_t *
FUNC_7(int VAR_5)
{
    x86_die_t *VAR_6;
    cpu_data_t *VAR_7;

    VAR_7 = FUNC_2(VAR_5);

    FUNC_4(&VAR_4);
    if (VAR_1 != ((void*)0)) {
 VAR_6 = VAR_1;
 VAR_1 = VAR_6->next_in_pkg;
 VAR_6->next_in_pkg = ((void*)0);
 FUNC_6(&VAR_4);
    } else {
 FUNC_6(&VAR_4);
 VAR_6 = FUNC_3(sizeof(x86_die_t));
 if (VAR_6 == ((void*)0))
     FUNC_5("x86_die_alloc() kalloc of x86_die_t failed!\n");
    }

    FUNC_1((void *) VAR_6, sizeof(x86_die_t));

    VAR_6->pdie_num = VAR_7->cpu_phys_number / VAR_3.nPThreadsPerDie;

    VAR_6->ldie_num = VAR_2;
    FUNC_0((long *) &VAR_2, 1);

    VAR_6->flags = VAR_0;
    return(VAR_6);
}
