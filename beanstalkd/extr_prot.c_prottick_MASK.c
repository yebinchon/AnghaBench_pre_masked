
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef scalar_t__ int64 ;
struct TYPE_19__ {scalar_t__ unpause_at; scalar_t__ pause; } ;
typedef TYPE_3__ Tube ;
struct TYPE_23__ {size_t len; TYPE_3__** items; } ;
struct TYPE_22__ {scalar_t__ tickat; scalar_t__ in_conns; } ;
struct TYPE_17__ {scalar_t__ deadline_at; } ;
struct TYPE_21__ {int heap_index; TYPE_2__* tube; TYPE_1__ r; } ;
struct TYPE_16__ {TYPE_6__** data; scalar_t__ len; } ;
struct TYPE_20__ {TYPE_10__ conns; } ;
struct TYPE_18__ {TYPE_10__ delay; } ;
typedef TYPE_4__ Server ;
typedef TYPE_5__ Job ;
typedef TYPE_6__ Conn ;


 int FUNC_0 (TYPE_4__*,TYPE_5__*,int ) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (TYPE_4__*,TYPE_5__*,int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_10__*,int ) ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 () ;
 TYPE_5__* FUNC_8 () ;
 TYPE_7__ VAR_0 ;

int64
FUNC_9(Server *VAR_1)
{
    Job *VAR_2;
    int64 VAR_3;
    Tube *VAR_4;
    int64 VAR_5 = 0x34630B8A000LL;
    int64 VAR_6;

    VAR_3 = FUNC_6();



    while ((VAR_2 = FUNC_8())) {
        VAR_6 = VAR_2->r.deadline_at - VAR_3;
        if (VAR_6 > 0) {
            VAR_5 = FUNC_5(VAR_5, VAR_6);
            break;
        }
        FUNC_4(&VAR_2->tube->delay, VAR_2->heap_index);
        int VAR_7 = FUNC_2(VAR_1, VAR_2, 0, 0);
        if (VAR_7 < 1)
            FUNC_0(VAR_1, VAR_2, 0);
    }



    size_t VAR_8;
    for (VAR_8 = 0; VAR_8 < VAR_0.len; VAR_8++) {
        VAR_4 = VAR_0.items[VAR_8];
        VAR_6 = VAR_4->unpause_at - VAR_3;
        if (VAR_4->pause && VAR_6 <= 0) {
            VAR_4->pause = 0;
            FUNC_7();
        }
        else if (VAR_6 > 0) {
            VAR_5 = FUNC_5(VAR_5, VAR_6);
        }
    }



    while (VAR_1->conns.len) {
        Conn *VAR_9 = VAR_1->conns.data[0];
        VAR_6 = VAR_9->tickat - VAR_3;
        if (VAR_6 > 0) {
            VAR_5 = FUNC_5(VAR_5, VAR_6);
            break;
        }
        FUNC_4(&VAR_1->conns, 0);
        VAR_9->in_conns = 0;
        FUNC_1(VAR_9);
    }

    FUNC_3();

    return VAR_5;
}
