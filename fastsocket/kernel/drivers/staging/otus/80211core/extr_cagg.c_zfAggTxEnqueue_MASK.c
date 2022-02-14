
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
typedef void* u32_t ;
typedef int u16_t ;
struct TYPE_13__ {int (* insert ) (int *,int ,int ,TYPE_2__*,int *) ;int (* exist ) (int *,int ,int ,TYPE_2__*,int *) ;} ;
struct TYPE_12__ {int (* zfcbSendCompleteIndication ) (int *,int *) ;} ;
struct TYPE_11__ {int size; size_t aggHead; size_t complete; int ac; int aggTail; void* lastArrival; TYPE_1__* aggvtxq; } ;
struct TYPE_10__ {scalar_t__ baw_retransmit; void* arrivalTime; int * buf; } ;
typedef TYPE_2__* TID_TX ;


 TYPE_9__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,int ,TYPE_2__*,int *) ;
 int FUNC_1 (int *,int ,int ,TYPE_2__*,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ,int ,TYPE_2__*,int *) ;
 int FUNC_4 (int *,int ,int ,TYPE_2__*,int *) ;
 TYPE_4__* VAR_6 ;
 void* FUNC_5 () ;
 void* FUNC_6 (int *,size_t,int ) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

u16_t FUNC_12(zdev_t* VAR_7, zbuf_t* VAR_8, u16_t VAR_9, TID_TX VAR_10)
{

    u32_t VAR_11;

    FUNC_10(VAR_7);

    FUNC_8();

    FUNC_9(VAR_7);

    VAR_10->size = FUNC_6(VAR_7, VAR_10->aggHead, VAR_10->aggTail);

    if (VAR_10->size < (VAR_1 - 2))
    {
        u8_t VAR_12 = 0;

        VAR_10->aggvtxq[VAR_10->aggHead].buf = VAR_8;
        VAR_11 = FUNC_5();
        VAR_10->aggvtxq[VAR_10->aggHead].arrivalTime = VAR_11;
        VAR_10->aggvtxq[VAR_10->aggHead].baw_retransmit = 0;

        VAR_10->aggHead = ((VAR_10->aggHead + 1) & VAR_2);
        VAR_10->lastArrival = VAR_11;
        VAR_10->size++;
        VAR_10->size = FUNC_6(VAR_7, VAR_10->aggHead, VAR_10->aggTail);
        if (VAR_8 && (VAR_10->size < (VAR_1 - 10))) {
            VAR_10->complete = VAR_10->aggHead;
            VAR_12 = 1;
        }
        FUNC_11(VAR_7);

        if (!VAR_0.exist(VAR_7, 0, VAR_10->ac, VAR_10, ((void*)0))) {
            VAR_0.insert(VAR_7, 0, VAR_10->ac, VAR_10, ((void*)0));
        }

        FUNC_7(VAR_4, "tid_tx->size=", VAR_10->size);


        if (VAR_8 && VAR_12 && VAR_6->zfcbSendCompleteIndication) {

            VAR_6->zfcbSendCompleteIndication(VAR_7, VAR_8);
        }




        return VAR_5;
    }
    else
    {
        FUNC_7(VAR_4, "can't enqueue, tid_tx->size=", VAR_10->size);
    }

    FUNC_11(VAR_7);

    if (!VAR_0.exist(VAR_7, 0, VAR_10->ac, VAR_10, ((void*)0))) {
            VAR_0.insert(VAR_7, 0, VAR_10->ac, VAR_10, ((void*)0));
    }

    return VAR_3;
}
