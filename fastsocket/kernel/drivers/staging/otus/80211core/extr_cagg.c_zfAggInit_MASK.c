
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int zdev_t ;
typedef size_t u16_t ;
struct baw_enabler {int dummy; } ;
struct agg_tid_rx {int dummy; } ;
struct aggQueue {int dummy; } ;
struct TYPE_14__ {int (* init ) (int *) ;} ;
struct TYPE_13__ {int (* init ) (int *) ;} ;
struct TYPE_12__ {int aggInitiated; int reorder; TYPE_4__** tid_rx; TYPE_2__** aggQPool; scalar_t__ aggState; TYPE_1__* aggSta; scalar_t__ addbaCount; scalar_t__ addbaComplete; } ;
struct TYPE_11__ {size_t aid; scalar_t__ addBaExchangeStatusCode; TYPE_3__* frame; scalar_t__ sq_behind_count; scalar_t__ sq_exceed_count; scalar_t__ baw_tail; scalar_t__ baw_head; scalar_t__ seq_start; } ;
struct TYPE_10__ {scalar_t__ buf; } ;
struct TYPE_9__ {scalar_t__ deleteFlag; scalar_t__ clearFlag; scalar_t__ aggReady; scalar_t__ aggQEnabled; scalar_t__ aggTail; scalar_t__ aggHead; } ;
struct TYPE_8__ {int ** tid_tx; scalar_t__* count; scalar_t__* aggFlag; } ;


 TYPE_7__* VAR_0 ;
 TYPE_6__ VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_5__* VAR_9 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int *,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void FUNC_10(zdev_t* VAR_10)
{
    u16_t VAR_11,VAR_12;

    FUNC_8(VAR_10);

    FUNC_6();




    FUNC_7(VAR_10);
    VAR_9->aggInitiated = 0;
    VAR_9->addbaComplete = 0;
    VAR_9->addbaCount = 0;
    VAR_9->reorder = 1;
    for (VAR_11=0; VAR_11<VAR_5; VAR_11++)
    {
        for (VAR_12=0; VAR_12<VAR_2; VAR_12++)
        {

            VAR_9->aggSta[VAR_11].aggFlag[VAR_12] = VAR_9->aggSta[VAR_11].count[VAR_12] = 0;
            VAR_9->aggSta[VAR_11].tid_tx[VAR_12] = ((void*)0);
            VAR_9->aggSta[VAR_11].tid_tx[VAR_12+1] = ((void*)0);

        }
    }




    VAR_9->aggState = 0;
    for (VAR_11=0; VAR_11<VAR_4; VAR_11++)
    {



        VAR_9->aggQPool[VAR_11] = FUNC_5(VAR_10, sizeof(struct aggQueue));
        if(!VAR_9->aggQPool[VAR_11])
        {
            FUNC_9(VAR_10);
            return;
        }
        VAR_9->aggQPool[VAR_11]->aggHead = VAR_9->aggQPool[VAR_11]->aggTail =
        VAR_9->aggQPool[VAR_11]->aggQEnabled = VAR_9->aggQPool[VAR_11]->aggReady =
        VAR_9->aggQPool[VAR_11]->clearFlag = VAR_9->aggQPool[VAR_11]->deleteFlag = 0;





        VAR_9->tid_rx[VAR_11] = FUNC_5(VAR_10, sizeof(struct agg_tid_rx));
        if (!VAR_9->tid_rx[VAR_11])
        {
            FUNC_9(VAR_10);
            return;
        }
        VAR_9->tid_rx[VAR_11]->aid = VAR_5;
        VAR_9->tid_rx[VAR_11]->seq_start = VAR_9->tid_rx[VAR_11]->baw_head = VAR_9->tid_rx[VAR_11]->baw_tail = 0;

        VAR_9->tid_rx[VAR_11]->sq_exceed_count = VAR_9->tid_rx[VAR_11]->sq_behind_count = 0;
        for (VAR_12=0; VAR_12<=VAR_3; VAR_12++)
            VAR_9->tid_rx[VAR_11]->frame[VAR_12].buf = 0;
        VAR_9->tid_rx[VAR_11]->addBaExchangeStatusCode = 0;

    }
    FUNC_9(VAR_10);
    FUNC_3(VAR_10);
    VAR_1.init = FUNC_2;
    VAR_1.init(VAR_10);
    VAR_9->aggInitiated = 1;
    VAR_6 = 0;
    VAR_7 = 0;
    VAR_8 = 0;
}
