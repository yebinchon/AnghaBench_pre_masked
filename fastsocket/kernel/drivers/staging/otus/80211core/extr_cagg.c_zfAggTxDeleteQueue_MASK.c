
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef size_t u16_t ;
struct aggSta {scalar_t__* aggFlag; int ** tid_tx; scalar_t__* count; } ;
struct aggQueue {size_t aggQSTA; size_t ac; size_t tid; scalar_t__ size; scalar_t__ deleteFlag; scalar_t__ clearFlag; scalar_t__ aggReady; scalar_t__ aggTail; scalar_t__ aggHead; scalar_t__ aggQEnabled; } ;
struct TYPE_2__ {struct aggSta* aggSta; struct aggQueue** aggQPool; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (int ,char*,size_t) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

u16_t FUNC_5(zdev_t* VAR_3, u16_t VAR_4)
{
    u16_t VAR_5, VAR_6;
    struct aggQueue *VAR_7;
    struct aggSta *VAR_8;

    FUNC_3(VAR_3);

    FUNC_1();

    VAR_7 = VAR_2->aggQPool[VAR_4];
    VAR_8 = &VAR_2->aggSta[VAR_7->aggQSTA];
    VAR_5 = VAR_7->ac;
    VAR_6 = VAR_7->tid;

    FUNC_2(VAR_3);

    VAR_7->aggQEnabled = 0;
    VAR_7->aggHead = VAR_7->aggTail = 0;
    VAR_7->aggReady = 0;
    VAR_7->clearFlag = VAR_7->deleteFlag = 0;
    VAR_7->size = 0;
    VAR_8->count[VAR_5] = 0;

    VAR_8->tid_tx[VAR_6] = ((void*)0);
    VAR_8->aggFlag[VAR_5] = 0;

    FUNC_4(VAR_3);

    FUNC_0(VAR_0, "queue deleted! qnum=", VAR_4);

    return VAR_1;
}
