
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int delay; int kick_ct; } ;
struct TYPE_14__ {int walresv; TYPE_2__ r; int heap_index; TYPE_1__* tube; } ;
struct TYPE_13__ {int wal; } ;
struct TYPE_11__ {int delay; } ;
typedef TYPE_3__ Server ;
typedef TYPE_4__ Job ;


 int FUNC_0 (TYPE_3__*,TYPE_4__*,int ) ;
 int FUNC_1 (TYPE_3__*,TYPE_4__*,int ,int) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(Server *VAR_0, Job *VAR_1)
{
    int VAR_2;
    int VAR_3;

    VAR_3 = FUNC_3(&VAR_0->wal);
    if (!VAR_3)
        return 0;
    VAR_1->walresv += VAR_3;

    FUNC_2(&VAR_1->tube->delay, VAR_1->heap_index);

    VAR_1->r.kick_ct++;
    VAR_2 = FUNC_1(VAR_0, VAR_1, 0, 1);
    if (VAR_2 == 1)
        return 1;


    VAR_2 = FUNC_1(VAR_0, VAR_1, VAR_1->r.delay, 0);
    if (VAR_2 == 1)
        return 0;


    FUNC_0(VAR_0, VAR_1, 0);
    return 0;
}
