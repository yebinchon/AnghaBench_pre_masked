
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


struct TYPE_16__ {int buried_ct; } ;
struct TYPE_13__ {int bury_ct; int state; } ;
struct TYPE_15__ {int walresv; TYPE_3__ r; int * reserver; TYPE_2__* tube; } ;
struct TYPE_14__ {int wal; } ;
struct TYPE_11__ {int buried_ct; } ;
struct TYPE_12__ {TYPE_1__ stat; int buried; } ;
typedef TYPE_4__ Server ;
typedef TYPE_5__ Job ;


 int VAR_0 ;
 TYPE_8__ VAR_1 ;
 int FUNC_0 (int *,TYPE_5__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_5__*) ;

__attribute__((used)) static int
FUNC_4(Server *VAR_2, Job *VAR_3, char VAR_4)
{
    if (VAR_4) {
        int VAR_5 = FUNC_2(&VAR_2->wal);
        if (!VAR_5)
            return 0;
        VAR_3->walresv += VAR_5;
    }

    FUNC_0(&VAR_3->tube->buried, VAR_3);
    VAR_1.buried_ct++;
    VAR_3->tube->stat.buried_ct++;
    VAR_3->r.state = VAR_0;
    VAR_3->reserver = ((void*)0);
    VAR_3->r.bury_ct++;

    if (VAR_4) {
        if (!FUNC_3(&VAR_2->wal, VAR_3)) {
            return 0;
        }
        FUNC_1(&VAR_2->wal);
    }

    return 1;
}
