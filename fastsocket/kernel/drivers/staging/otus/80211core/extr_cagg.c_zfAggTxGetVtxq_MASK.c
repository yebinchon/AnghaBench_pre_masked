
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
struct TYPE_5__ {size_t aggHead; size_t aggTail; scalar_t__ size; TYPE_1__* aggvtxq; } ;
struct TYPE_4__ {int * buf; } ;
typedef TYPE_2__* TID_TX ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,size_t,int) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

zbuf_t* FUNC_5(zdev_t* VAR_2, TID_TX VAR_3)
{
    zbuf_t* VAR_4 = ((void*)0);

    FUNC_2();

    if (VAR_3->aggHead != VAR_3->aggTail)
    {
        VAR_4 = VAR_3->aggvtxq[ VAR_3->aggTail ].buf;

        VAR_3->aggvtxq[VAR_3->aggTail].buf = ((void*)0);

        FUNC_3(VAR_2);
        VAR_3->aggTail = ((VAR_3->aggTail + 1) & VAR_0);
        if(VAR_3->size > 0) VAR_3->size--;
        VAR_3->size = FUNC_0(VAR_2, VAR_3->aggHead, VAR_3->aggTail);
        if (((void*)0) == VAR_4) {


        }
        FUNC_4(VAR_2);
    }
    else
    {



        FUNC_1(VAR_1, "tid_tx->aggHead == tid_tx->aggTail, tid_tx->size=", VAR_3->size);

    }

    if (FUNC_0(VAR_2, VAR_3->aggHead, VAR_3->aggTail) != VAR_3->size)
        FUNC_1(VAR_1, "qlen!=tid_tx->size! tid_tx->size=", VAR_3->size);
    return VAR_4;
}
