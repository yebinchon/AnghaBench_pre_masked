
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* core; struct TYPE_5__* next_in_core; } ;
typedef TYPE_1__ x86_lcpu_t ;
struct TYPE_6__ {int num_lcpus; TYPE_1__* lcpus; } ;
typedef TYPE_2__ x86_core_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(x86_core_t *VAR_1, x86_lcpu_t *VAR_2)
{
    FUNC_0(VAR_1 != ((void*)0));
    FUNC_0(VAR_2 != ((void*)0));

    FUNC_1(&VAR_0);

    VAR_2->next_in_core = VAR_1->lcpus;
    VAR_2->core = VAR_1;
    VAR_1->lcpus = VAR_2;
    VAR_1->num_lcpus += 1;
    FUNC_2(&VAR_0);
}
