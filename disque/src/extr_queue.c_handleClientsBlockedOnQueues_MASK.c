
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int clients; } ;
typedef TYPE_2__ queue ;
struct TYPE_15__ {TYPE_4__* value; } ;
typedef TYPE_3__ listNode ;
typedef int job ;
typedef int dictIterator ;
typedef int dictEntry ;
struct TYPE_13__ {int flags; } ;
struct TYPE_16__ {TYPE_1__ bpop; } ;
typedef TYPE_4__ client ;
struct TYPE_17__ {int ready_queues; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int *,int ) ;
 int FUNC_1 (TYPE_4__*,int) ;
 int FUNC_2 (int ,int *) ;
 int * FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;
 TYPE_3__* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 TYPE_2__* FUNC_10 (int ) ;
 int FUNC_11 (TYPE_2__*,int ) ;
 int * FUNC_12 (TYPE_2__*,unsigned long*) ;
 TYPE_6__ VAR_1 ;
 int FUNC_13 (TYPE_4__*) ;

void FUNC_14(void) {
    dictEntry *VAR_2;
    dictIterator *VAR_3;


    if (FUNC_7(VAR_1.ready_queues) == 0) return;

    VAR_3 = FUNC_3(VAR_1.ready_queues);
    while((VAR_2 = FUNC_5(VAR_3)) != ((void*)0)) {
        queue *VAR_4 = FUNC_10(FUNC_4(VAR_2));
        if (!VAR_4 || !VAR_4->clients) continue;
        int VAR_5 = FUNC_9(VAR_4->clients);
        while(VAR_5--) {
            unsigned long VAR_6;
            listNode *VAR_7 = FUNC_8(VAR_4->clients);
            client *VAR_8 = VAR_7->value;
            job *VAR_9 = FUNC_12(VAR_4,&VAR_6);

            if (!VAR_9) break;
            if (VAR_6 == 0) FUNC_11(VAR_4,VAR_0);
            FUNC_1(VAR_8,1);
            FUNC_0(VAR_8,VAR_9,VAR_8->bpop.flags);
            FUNC_13(VAR_8);
        }
    }
    FUNC_6(VAR_3);
    FUNC_2(VAR_1.ready_queues,((void*)0));
}
