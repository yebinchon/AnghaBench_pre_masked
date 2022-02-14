
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int waiting_ct; } ;
struct TYPE_11__ {int waiting_conns; TYPE_2__ stat; } ;
typedef TYPE_3__ Tube ;
struct TYPE_13__ {int waiting_ct; } ;
struct TYPE_9__ {size_t len; TYPE_3__** items; } ;
struct TYPE_12__ {TYPE_1__ watch; int type; } ;
typedef TYPE_4__ Conn ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 TYPE_7__ VAR_1 ;
 int FUNC_1 (int *,TYPE_4__*) ;

void
FUNC_2(Conn *VAR_2)
{
    if (!FUNC_0(VAR_2))
        return;

    VAR_2->type &= ~VAR_0;
    VAR_1.waiting_ct--;
    size_t VAR_3;
    for (VAR_3 = 0; VAR_3 < VAR_2->watch.len; VAR_3++) {
        Tube *VAR_4 = VAR_2->watch.items[VAR_3];
        VAR_4->stat.waiting_ct--;
        FUNC_1(&VAR_4->waiting_conns, VAR_2);
    }
}
