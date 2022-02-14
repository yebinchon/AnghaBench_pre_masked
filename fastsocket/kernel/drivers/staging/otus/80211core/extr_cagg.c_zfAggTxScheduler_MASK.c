
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef size_t u8_t ;
typedef scalar_t__ u32_t ;
typedef scalar_t__ u16_t ;
struct dest {scalar_t__ Qtype; void* vtxq; TYPE_1__* tid_tx; } ;
typedef scalar_t__ s8_t ;
struct TYPE_9__ {size_t ppri; struct dest* (* getNext ) (int *,size_t) ;scalar_t__* Head; } ;
struct TYPE_8__ {scalar_t__ txq_threshold; int destLock; scalar_t__ aggState; int aggInitiated; } ;
struct TYPE_7__ {int size; int aggTail; int aggHead; } ;
typedef TYPE_1__* TID_TX ;


 scalar_t__ VAR_0 ;
 TYPE_6__ VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 size_t* VAR_4 ;
 struct dest* FUNC_1 (int *,size_t) ;
 TYPE_5__* VAR_5 ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (int *,int,TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *,TYPE_1__*) ;
 int * FUNC_5 (int *,size_t) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int *,int ,int ,int ) ;
 int FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int) ;
 int FUNC_10 () ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;

void FUNC_14(zdev_t* VAR_6, u8_t VAR_7)
{
    TID_TX VAR_8 = ((void*)0);
    void* VAR_9;
    struct dest* VAR_10;
    zbuf_t* VAR_11;
    u32_t VAR_12, VAR_13;

    u16_t VAR_14;
    FUNC_12(VAR_6);

    FUNC_10();

    if (!VAR_5->aggInitiated)
    {
        return;
    }


    VAR_12 = VAR_2;
    VAR_13 = VAR_0;

    if(VAR_5->txq_threshold)
        VAR_14 = VAR_5->txq_threshold;
    else
        VAR_14 = VAR_0;

    VAR_8 = FUNC_2(VAR_6);
    if (VAR_8) VAR_7 = 0;
    while (FUNC_6(VAR_6) > 20 && (VAR_2 < VAR_14 || VAR_8)) {


        u16_t VAR_15;
        u8_t VAR_16;
        s8_t VAR_17 = 0;



        for (VAR_15=0; VAR_15<4; VAR_15++) {
            if (VAR_1.Head[VAR_15]) VAR_17++;
        }
        if (0 >= VAR_17) break;

        FUNC_11(VAR_6);
        VAR_16 = VAR_4[VAR_1.ppri]; VAR_1.ppri = (VAR_1.ppri + 1) % 10;
        FUNC_13(VAR_6);

        for (VAR_15=0; VAR_15<10; VAR_15++){
            if(VAR_1.Head[VAR_16]) break;

            FUNC_11(VAR_6);
            VAR_16 = VAR_4[VAR_1.ppri]; VAR_1.ppri = (VAR_1.ppri + 1) % 10;
            FUNC_13(VAR_6);
        }
        if (VAR_15 == 10) break;

        FUNC_11(VAR_6);
        VAR_5->destLock = 1;
        FUNC_13(VAR_6);

        VAR_10 = VAR_1.getNext(VAR_6, VAR_16);
        if (!VAR_10) {
            FUNC_11(VAR_6);
            VAR_5->destLock = 0;
            FUNC_13(VAR_6);

            FUNC_0("bug report! DESTQ.getNext got nothing!");
            break;
        }
        if (VAR_10->Qtype == 0) {
            VAR_8 = VAR_10->tid_tx;



            if(VAR_8 && FUNC_4(VAR_6, VAR_8))
                VAR_8->size = FUNC_8(VAR_6, VAR_8->aggHead, VAR_8->aggTail);
            else {
                FUNC_11(VAR_6);
                VAR_5->destLock = 0;
                FUNC_13(VAR_6);

                VAR_8 = FUNC_2(VAR_6);
                continue;
            }

            FUNC_11(VAR_6);
            VAR_5->destLock = 0;
            FUNC_13(VAR_6);

            if (VAR_8 && !VAR_8->size) {



            }
            else if(VAR_5->aggState == 0){


                FUNC_3(VAR_6, FUNC_6(VAR_6), VAR_8);

            }
            else {

                break;
            }
        }
        else {
            VAR_9 = VAR_10->vtxq;
            VAR_11 = FUNC_5(VAR_6, VAR_16);
            FUNC_9( VAR_11 != 0 );

            FUNC_7(VAR_6, VAR_11, 0, VAR_3, 0);

        }

        VAR_8 = FUNC_2(VAR_6);
    }
    return;
}
