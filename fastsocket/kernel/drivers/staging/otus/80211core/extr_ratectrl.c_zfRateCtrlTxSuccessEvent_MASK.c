
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef scalar_t__ u8_t ;
typedef int u16_t ;
struct zsRcCell {int currentRate; int operationRateCount; scalar_t__* operationRateSet; int currentRateIndex; int lastTime; scalar_t__ lasttxCount; scalar_t__ txCount; scalar_t__ failCount; } ;
struct TYPE_2__ {int probeSuccessCount; scalar_t__ probeCount; scalar_t__ success_probing; int* txFail; int* txMPDU; int tick; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(zdev_t* VAR_2, struct zsRcCell* VAR_3, u8_t VAR_4)
{

    u16_t VAR_5, VAR_6;
    u16_t VAR_7;
    FUNC_4(VAR_2);

    FUNC_2();



    VAR_1->probeSuccessCount++;
    if (VAR_1->probeCount < VAR_1->success_probing)
    {
        return;
    }

    VAR_7 = VAR_1->probeCount;
    if (VAR_7 != 0)
    {
        VAR_6 = VAR_1->probeSuccessCount * 100 / VAR_7;
    }
    else
    {
        VAR_6 = 1;
    }

    if (VAR_6 < ((VAR_3->currentRate < 16)? 80:100))
    {
        return;
    }

    VAR_1->probeCount = VAR_1->probeSuccessCount = 0;
    for (VAR_5=0; VAR_5<VAR_3->operationRateCount; VAR_5++)
    {
        if (VAR_4 == VAR_3->operationRateSet[VAR_5])
        {
            if (VAR_5 > VAR_3->currentRateIndex)
            {

                FUNC_1(VAR_0, "Raise Tx Rate=", VAR_4);



                if((VAR_3->currentRate <= 15) && (VAR_4 > 15))
                {
                    FUNC_5(VAR_2);
                    FUNC_0(VAR_2, 16);
                    FUNC_3(VAR_2);
                }

                VAR_3->currentRate = VAR_4;
                VAR_3->currentRateIndex = (u8_t)VAR_5;
                VAR_3->failCount = VAR_3->txCount = 0;
                VAR_3->lasttxCount = 0;
                VAR_3->lastTime = VAR_1->tick;
                VAR_1->txFail[VAR_3->currentRate] = VAR_1->txFail[VAR_3->currentRate] >> 1;
                VAR_1->txMPDU[VAR_3->currentRate] = VAR_1->txMPDU[VAR_3->currentRate] >> 1;
            }
        }
    }

    return;
}
