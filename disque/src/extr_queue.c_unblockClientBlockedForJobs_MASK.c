
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int robj ;
struct TYPE_9__ {int * clients; } ;
typedef TYPE_2__ queue ;
typedef int dictIterator ;
typedef int dictEntry ;
struct TYPE_8__ {int queues; } ;
struct TYPE_10__ {TYPE_1__ bpop; } ;
typedef TYPE_3__ client ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 (int ) ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,TYPE_3__*) ;
 TYPE_2__* FUNC_10 (int *) ;
 int FUNC_11 (int ) ;

void FUNC_12(client *VAR_1) {
    dictEntry *VAR_2;
    dictIterator *VAR_3;

    VAR_3 = FUNC_2(VAR_1->bpop.queues);
    while((VAR_2 = FUNC_4(VAR_3)) != ((void*)0)) {
        robj *VAR_4 = FUNC_3(VAR_2);
        queue *VAR_5 = FUNC_10(VAR_4);
        FUNC_11(VAR_5 != ((void*)0));

        FUNC_6(VAR_5->clients,FUNC_9(VAR_5->clients,VAR_1));
        if (FUNC_7(VAR_5->clients) == 0) {
            FUNC_8(VAR_5->clients);
            VAR_5->clients = ((void*)0);
            FUNC_0(VAR_5,VAR_0);
        }
    }
    FUNC_5(VAR_3);
    FUNC_1(VAR_1->bpop.queues,((void*)0));
}
