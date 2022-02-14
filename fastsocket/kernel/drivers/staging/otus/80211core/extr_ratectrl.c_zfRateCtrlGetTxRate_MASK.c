
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef size_t u8_t ;
typedef size_t u16_t ;
struct zsRcCell {size_t txCount; size_t probingTime; size_t currentRate; int failCount; int lastTime; int lasttxCount; } ;
struct TYPE_2__ {size_t tick; int probeCount; int success_probing; int probeInterval; int probeSuccessCount; int* txMPDU; int* PER; int* txFail; } ;


 scalar_t__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 size_t FUNC_0 (int *,struct zsRcCell*) ;
 size_t FUNC_1 (struct zsRcCell*) ;
 int FUNC_2 (int *,struct zsRcCell*,size_t) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*,size_t) ;
 int FUNC_6 (int *) ;

u16_t FUNC_7(zdev_t* VAR_10, struct zsRcCell* VAR_11, u16_t* VAR_12)
{
    u8_t VAR_13, VAR_14;
    FUNC_6(VAR_10);

    FUNC_5(VAR_3, "txCount=", VAR_11->txCount);
    FUNC_5(VAR_3, "probingTime=", VAR_11->probingTime);
    FUNC_5(VAR_3, "tick=", VAR_9->tick);
    *VAR_12 = 0;
    VAR_13 = VAR_11->currentRate;

    if (VAR_9->probeCount && (VAR_9->probeCount < VAR_9->success_probing))
    {
        if (VAR_9->probeInterval < 50)
        {
            VAR_9->probeInterval++;
        }
        else
        {
            VAR_9->probeInterval++;
            if (VAR_9->probeInterval > 52)
            {
                VAR_9->probeInterval = 0;
            }
            VAR_13=FUNC_1(VAR_11);
            *VAR_12 = 1;
            VAR_9->probeCount++;
            VAR_11->probingTime = VAR_9->tick;
        }
    }

    else if ((((VAR_9->tick - VAR_11->probingTime) > (VAR_6/VAR_4))
                && (VAR_11->txCount >= VAR_5))
        || (VAR_11->txCount >= 1000))
    {


        VAR_9->probeCount = 0;
        VAR_9->probeSuccessCount = 0;
        if (VAR_9->txMPDU[VAR_11->currentRate] != 0) {
            VAR_9->PER[VAR_11->currentRate] = FUNC_3(100,
                (VAR_9->txFail[VAR_11->currentRate]*100)/VAR_9->txMPDU[VAR_11->currentRate]);
            if (!VAR_9->PER[VAR_11->currentRate]) VAR_9->PER[VAR_11->currentRate] ++;
        }


        if ((VAR_9->PER[VAR_11->currentRate] <= (VAR_7+15)) ||
            ((VAR_11->currentRate <= 16) &&
            ((VAR_9->PER[VAR_11->currentRate]/2) <= VAR_7)))
        {
            if ((VAR_13=FUNC_1(VAR_11)) != VAR_11->currentRate)
            {
                *VAR_12 = 1;
                VAR_9->probeCount++;
                VAR_9->probeInterval = 0;
                VAR_9->success_probing =
                    (VAR_11->currentRate <= 16)? (VAR_8/2) : VAR_8;

                FUNC_5(VAR_1, "Probing Rate=", VAR_13);
            }
        }


        FUNC_4(VAR_2, "Diminish counter");
        VAR_11->failCount = VAR_11->failCount>>1;
        VAR_11->txCount = VAR_11->txCount>>1;
        VAR_9->txFail[VAR_11->currentRate] = VAR_9->txFail[VAR_11->currentRate] >> 1;
        VAR_9->txMPDU[VAR_11->currentRate] = VAR_9->txMPDU[VAR_11->currentRate] >> 1;


        if (VAR_11->currentRate > 15) {
            VAR_14 = FUNC_1(VAR_11);
            if ((VAR_14 != VAR_11->currentRate) && VAR_9->PER[VAR_14] &&
                ((VAR_9->PER[VAR_11->currentRate] + VAR_0[VAR_11->currentRate]) >
                VAR_9->PER[VAR_14])) {

                VAR_9->probeSuccessCount = VAR_9->probeCount = VAR_8;
                FUNC_2(VAR_10, VAR_11, VAR_14);
            }
        }
        else {
            VAR_14 = FUNC_0(VAR_10, VAR_11);
            if (VAR_11->currentRate < VAR_14) {

                VAR_9->probeSuccessCount = VAR_9->probeCount = VAR_8;
                FUNC_2(VAR_10, VAR_11, VAR_14);
            }
        }
        VAR_11->probingTime = VAR_9->tick;
    }

    if( (VAR_9->tick > 1000)
        && ((VAR_9->tick - VAR_11->lastTime) > 3840) )
    {
        if (VAR_11->lasttxCount < 70)
        {
            VAR_11->failCount = VAR_11->failCount>>1;
            VAR_11->txCount = VAR_11->txCount>>1;
            VAR_9->txFail[VAR_11->currentRate] = VAR_9->txFail[VAR_11->currentRate] >> 1;
            VAR_9->txMPDU[VAR_11->currentRate] = VAR_9->txMPDU[VAR_11->currentRate] >> 1;

            VAR_11->failCount = (VAR_11->failCount < VAR_11->txCount)?
                                VAR_11->failCount : VAR_11->txCount;
            VAR_9->txFail[VAR_11->currentRate] = (VAR_9->txFail[VAR_11->currentRate] < VAR_9->txMPDU[VAR_11->currentRate])?
                                              VAR_9->txFail[VAR_11->currentRate] : VAR_9->txMPDU[VAR_11->currentRate];
        }

        VAR_11->lastTime = VAR_9->tick;
        VAR_11->lasttxCount = 0;
    }

    VAR_11->txCount++;
    VAR_11->lasttxCount++;
    VAR_9->txMPDU[VAR_11->currentRate]++;
    FUNC_5(VAR_2, "Get Tx Rate=", VAR_13);
    return VAR_13;
}
