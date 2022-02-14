
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ int64 ;
struct TYPE_16__ {int urgent_ct; } ;
struct TYPE_11__ {scalar_t__ pri; int state; scalar_t__ deadline_at; } ;
struct TYPE_15__ {TYPE_3__* tube; TYPE_1__ r; int * reserver; } ;
struct TYPE_14__ {int wal; } ;
struct TYPE_12__ {int urgent_ct; } ;
struct TYPE_13__ {TYPE_2__ stat; int ready; int delay; } ;
typedef TYPE_4__ Server ;
typedef TYPE_5__ Job ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_8__ VAR_3 ;
 int FUNC_0 (int *,TYPE_5__*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_4 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_5__*) ;

__attribute__((used)) static int
FUNC_5(Server *VAR_5, Job *VAR_6, int64 VAR_7, char VAR_8)
{
    int VAR_9;

    VAR_6->reserver = ((void*)0);
    if (VAR_7) {
        VAR_6->r.deadline_at = FUNC_1() + VAR_7;
        VAR_9 = FUNC_0(&VAR_6->tube->delay, VAR_6);
        if (!VAR_9)
            return 0;
        VAR_6->r.state = VAR_0;
    } else {
        VAR_9 = FUNC_0(&VAR_6->tube->ready, VAR_6);
        if (!VAR_9)
            return 0;
        VAR_6->r.state = VAR_1;
        VAR_4++;
        if (VAR_6->r.pri < VAR_2) {
            VAR_3.urgent_ct++;
            VAR_6->tube->stat.urgent_ct++;
        }
    }

    if (VAR_8) {
        if (!FUNC_4(&VAR_5->wal, VAR_6)) {
            return 0;
        }
        FUNC_3(&VAR_5->wal);
    }



    FUNC_2();
    return 1;
}
