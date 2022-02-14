
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_8__ ;
typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u32_t ;
typedef int u16_t ;
struct aggControl {int aggEnabled; scalar_t__ addbaIndication; int ampduIndication; } ;
struct TYPE_12__ {int sent_packets_sum; } ;
struct TYPE_11__ {int aggState; int (* zfcbSendCompleteIndication ) (int *,scalar_t__) ;TYPE_8__ agg_tal; } ;
struct TYPE_10__ {int size; int complete; int aggTail; int aggHead; TYPE_1__* aggvtxq; scalar_t__ aggFrameSize; } ;
struct TYPE_9__ {scalar_t__ buf; } ;
typedef TYPE_2__* TID_TX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_8__* VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,scalar_t__) ;
 TYPE_7__* VAR_7 ;
 int * FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (int *,int *,int ,int ,int ,struct aggControl*,TYPE_2__*) ;
 int FUNC_3 (int *,int *,int ,int ,int ) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int) ;
 int FUNC_6 (int,int) ;
 int FUNC_7 (int) ;
 void* FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ,char*,int) ;
 int FUNC_11 () ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;

u16_t FUNC_15(zdev_t* VAR_8, u32_t VAR_9, TID_TX VAR_10)
{


    u16_t VAR_11;

    zbuf_t* VAR_12;
    struct aggControl VAR_13;
    u16_t VAR_14;





    FUNC_13(VAR_8);

    FUNC_11();



    FUNC_12(VAR_8);
    VAR_10->size = FUNC_8(VAR_8, VAR_10->aggHead, VAR_10->aggTail);
    VAR_14 = FUNC_6(16, FUNC_6(VAR_10->size, (u16_t)(VAR_9 - 2)));
    FUNC_14(VAR_8);




    if (VAR_14 <=0 )
        return 0;


    if (VAR_14 == 1) {
        VAR_12 = FUNC_1(VAR_8, VAR_10);
        if (VAR_12)
            FUNC_3(VAR_8, VAR_12, 0, VAR_3, 0);
        if (VAR_10->size == 0) {

        }

        return 1;
    }



    FUNC_12(VAR_8);
    if (VAR_7->aggState == 1) {
        FUNC_14(VAR_8);
        return 0;
    }
    VAR_7->aggState = 1;
    FUNC_14(VAR_8);


    FUNC_10(VAR_4, "aggLen=", VAR_14);
    VAR_10->aggFrameSize = 0;
    for (VAR_11=0; VAR_11 < VAR_14; VAR_11++) {
        VAR_12 = FUNC_1(VAR_8, VAR_10);

        FUNC_12(VAR_8);
        VAR_10->size = FUNC_8(VAR_8, VAR_10->aggHead, VAR_10->aggTail);
        FUNC_14(VAR_8);

        if ( VAR_12 ) {

            u16_t VAR_15;

            if (0 == VAR_11) {
                VAR_13.ampduIndication = VAR_0;

            }
            else if ((VAR_11 == (VAR_14 - 1)) || VAR_10->size == 0)
            {
                VAR_13.ampduIndication = VAR_1;


            }
            else
            {
                VAR_13.ampduIndication = VAR_2;


            }
            VAR_10->aggFrameSize += FUNC_4(VAR_8, VAR_12);
            VAR_13.addbaIndication = 0;
            VAR_13.aggEnabled = 1;







            FUNC_2(VAR_8, VAR_12, 0, VAR_3, 0, &VAR_13, VAR_10);

            FUNC_12(VAR_8);
            VAR_15 = VAR_10->complete;
            if(FUNC_5(VAR_10, VAR_10->complete))
                FUNC_7(VAR_10->complete);
            FUNC_14(VAR_8);

            if(FUNC_5(VAR_10, VAR_15) && VAR_7->zfcbSendCompleteIndication
                    && VAR_10->aggvtxq[VAR_15].buf) {
                VAR_7->zfcbSendCompleteIndication(VAR_8, VAR_10->aggvtxq[VAR_15].buf);
                FUNC_9("in queue complete worked!");
            }

        }
        else {



            FUNC_10(VAR_4, "aggLen not reached, but no more frame, j=", VAR_11);

            break;
        }
    }
    FUNC_12(VAR_8);
    VAR_7->aggState = 0;
    FUNC_14(VAR_8);


    VAR_10->size = FUNC_8(VAR_8, VAR_10->aggHead, VAR_10->aggTail);


    if (VAR_10->size == 0) {

    }




    if(VAR_11>0) {
        VAR_6++;
        FUNC_10(VAR_4, "0xC2:sent 1 aggr, aggr_count=", VAR_6);
        FUNC_10(VAR_4, "0xC2:sent 1 aggr, aggr_size=", VAR_11);
    }
    return VAR_11;
}
