
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {int reserved_ct; } ;
struct TYPE_15__ {int next; } ;
struct TYPE_14__ {int * soonest_job; int srv; TYPE_6__ reserved_jobs; } ;
struct TYPE_13__ {TYPE_2__* tube; } ;
struct TYPE_11__ {int reserved_ct; } ;
struct TYPE_12__ {TYPE_1__ stat; } ;
typedef TYPE_3__ Job ;
typedef TYPE_4__ Conn ;


 int FUNC_0 (int ,TYPE_3__*,int ) ;
 int FUNC_1 (int ,TYPE_3__*,int ,int ) ;
 TYPE_7__ VAR_0 ;
 int FUNC_2 (TYPE_6__*) ;
 TYPE_3__* FUNC_3 (int ) ;

void
FUNC_4(Conn *VAR_1)
{
    while (!FUNC_2(&VAR_1->reserved_jobs)) {
        Job *VAR_2 = FUNC_3(VAR_1->reserved_jobs.next);
        int VAR_3 = FUNC_1(VAR_1->srv, VAR_2, 0, 0);
        if (VAR_3 < 1)
            FUNC_0(VAR_1->srv, VAR_2, 0);
        VAR_0.reserved_ct--;
        VAR_2->tube->stat.reserved_ct--;
        VAR_1->soonest_job = ((void*)0);
    }
}
