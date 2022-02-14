
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int int64 ;
struct TYPE_13__ {int reserved_ct; int urgent_ct; } ;
struct TYPE_9__ {scalar_t__ pri; } ;
struct TYPE_12__ {TYPE_3__* tube; TYPE_1__ r; int heap_index; } ;
struct TYPE_10__ {int urgent_ct; } ;
struct TYPE_11__ {int waiting_conns; TYPE_2__ stat; int ready; } ;
typedef TYPE_4__ Job ;
typedef int Conn ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,TYPE_4__*) ;
 TYPE_7__ VAR_2 ;
 int FUNC_1 (int *,int ) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 () ;
 TYPE_4__* FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_4__*,int ) ;
 int FUNC_7 (char*) ;

__attribute__((used)) static void
FUNC_8()
{
    Job *VAR_4 = ((void*)0);
    int64 VAR_5 = FUNC_3();

    while ((VAR_4 = FUNC_4(VAR_5))) {
        FUNC_1(&VAR_4->tube->ready, VAR_4->heap_index);
        VAR_3--;
        if (VAR_4->r.pri < VAR_1) {
            VAR_2.urgent_ct--;
            VAR_4->tube->stat.urgent_ct--;
        }

        Conn *VAR_6 = FUNC_2(&VAR_4->tube->waiting_conns);
        if (VAR_6 == ((void*)0)) {
            FUNC_7("waiting_conns is empty");
            continue;
        }
        VAR_2.reserved_ct++;

        FUNC_5(VAR_6);
        FUNC_0(VAR_6, VAR_4);
        FUNC_6(VAR_6, VAR_4, VAR_0);
    }
}
