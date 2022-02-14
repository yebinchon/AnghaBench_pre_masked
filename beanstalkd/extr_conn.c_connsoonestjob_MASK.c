
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* next; } ;
struct TYPE_8__ {TYPE_1__* soonest_job; TYPE_1__ reserved_jobs; } ;
typedef TYPE_1__ Job ;
typedef TYPE_2__ Conn ;


 int FUNC_0 (TYPE_2__*,TYPE_1__*) ;

Job *
FUNC_1(Conn *VAR_0)
{

    if (VAR_0->soonest_job != ((void*)0))
        return VAR_0->soonest_job;

    Job *VAR_1 = ((void*)0);
    for (VAR_1 = VAR_0->reserved_jobs.next; VAR_1 != &VAR_0->reserved_jobs; VAR_1 = VAR_1->next) {
        FUNC_0(VAR_0, VAR_1);
    }
    return VAR_0->soonest_job;
}
