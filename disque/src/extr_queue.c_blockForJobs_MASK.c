
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
typedef int robj ;
struct TYPE_10__ {int * clients; } ;
typedef TYPE_2__ queue ;
typedef int mstime_t ;
struct TYPE_9__ {int queues; int flags; int timeout; } ;
struct TYPE_11__ {TYPE_1__ bpop; } ;
typedef TYPE_3__ client ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 TYPE_2__* FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,TYPE_3__*) ;
 int * FUNC_5 () ;
 TYPE_2__* FUNC_6 (int *) ;

void FUNC_7(client *VAR_2, robj **VAR_3, int VAR_4, mstime_t VAR_5, uint64_t VAR_6) {
    int VAR_7;

    VAR_2->bpop.timeout = VAR_5;
    VAR_2->bpop.flags = VAR_6;
    for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
        queue *VAR_8 = FUNC_6(VAR_3[VAR_7]);
        if (!VAR_8) VAR_8 = FUNC_1(VAR_3[VAR_7]);


        if (FUNC_2(VAR_2->bpop.queues,VAR_3[VAR_7],((void*)0)) != VAR_1) continue;
        FUNC_3(VAR_3[VAR_7]);


        if (VAR_8->clients == ((void*)0)) VAR_8->clients = FUNC_5();
        FUNC_4(VAR_8->clients,VAR_2);
    }
    FUNC_0(VAR_2,VAR_0);
}
