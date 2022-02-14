
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_15__ {int pending_timeout; int reserved_jobs; } ;
struct TYPE_13__ {int state; scalar_t__ ttr; scalar_t__ deadline_at; int reserve_ct; } ;
struct TYPE_14__ {TYPE_5__* reserver; TYPE_3__ r; TYPE_2__* tube; } ;
struct TYPE_11__ {int reserved_ct; } ;
struct TYPE_12__ {TYPE_1__ stat; } ;
typedef TYPE_4__ Job ;
typedef TYPE_5__ Conn ;


 int VAR_0 ;
 int FUNC_0 (TYPE_5__*,TYPE_4__*) ;
 int FUNC_1 (int *,TYPE_4__*) ;
 scalar_t__ FUNC_2 () ;

void
FUNC_3(Conn *VAR_1, Job *VAR_2) {
    VAR_2->tube->stat.reserved_ct++;
    VAR_2->r.reserve_ct++;

    VAR_2->r.deadline_at = FUNC_2() + VAR_2->r.ttr;
    VAR_2->r.state = VAR_0;
    FUNC_1(&VAR_1->reserved_jobs, VAR_2);
    VAR_2->reserver = VAR_1;
    VAR_1->pending_timeout = -1;
    FUNC_0(VAR_1, VAR_2);
}
