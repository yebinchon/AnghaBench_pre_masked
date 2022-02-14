
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
struct zsRcCell {int* operationRateSet; int operationRateCount; int currentRateIndex; int currentRate; int probingTime; int lastTime; scalar_t__ lasttxCount; scalar_t__ failCount; scalar_t__ txCount; scalar_t__ flag; } ;
struct TYPE_3__ {scalar_t__ htCtrlBandwidth; } ;
struct TYPE_4__ {scalar_t__ wlanMode; scalar_t__ probeInterval; scalar_t__ probeCount; scalar_t__* txFail; scalar_t__* txMPDU; scalar_t__* PER; int tick; TYPE_1__ sta; } ;


 scalar_t__* VAR_0 ;
 scalar_t__* VAR_1 ;
 scalar_t__* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 void*** VAR_7 ;
 void*** VAR_8 ;
 int FUNC_0 (int *) ;

void FUNC_1(zdev_t* VAR_9, struct zsRcCell* VAR_10, u8_t VAR_11,
        u8_t VAR_12, u8_t VAR_13)
{
    u8_t VAR_14;
    u8_t VAR_15;
    FUNC_0(VAR_9);

    if (VAR_13) VAR_13 = 1;

    if (VAR_12 != 0)
    {
        if (VAR_11 == 1)
        {
            for (VAR_14=0; VAR_14<4; VAR_14++)
            {
                VAR_10->operationRateSet[VAR_14] = (u8_t)VAR_14;
            }
            for (VAR_14=4; VAR_14<10; VAR_14++)
            {
                VAR_10->operationRateSet[VAR_14] = 2+VAR_14;
            }
            VAR_10->operationRateCount = 10;
            VAR_10->currentRateIndex = 5;
        }
        else if (VAR_11 == 2)
        {
            if (VAR_6->wlanMode == VAR_4)
            {
                for (VAR_14=0; VAR_14<15; VAR_14++)
                {
                    VAR_10->operationRateSet[VAR_14] = VAR_8[VAR_14][3];
                }
                if(!VAR_13) VAR_10->operationRateSet[13] = 27;
                VAR_10->operationRateCount = 14+VAR_13;
                VAR_10->currentRateIndex = 10;
            }
            else
            {
                if (VAR_6->sta.htCtrlBandwidth == VAR_3)
                {
                    for (VAR_14=0; VAR_14<15; VAR_14++)
                    {
                        VAR_10->operationRateSet[VAR_14] = VAR_8[VAR_14][3];
                    }
                    if(!VAR_13) VAR_10->operationRateSet[13] = 27;
                    VAR_10->operationRateCount = 14+VAR_13;
                    VAR_10->currentRateIndex = 10;
                }
                else
                {
                    for (VAR_14=0; VAR_14<13; VAR_14++)
                    {
                        VAR_10->operationRateSet[VAR_14] = VAR_8[VAR_14][2];
                    }
                    VAR_10->operationRateCount = 13;
                    VAR_10->currentRateIndex = 9;
                }
            }
        }
        else if (VAR_11 == 3)
        {
                if (VAR_6->sta.htCtrlBandwidth == VAR_3)
                {
                    if(VAR_13 != 0)
                    {
                        VAR_15 = 13;
                    }
                    else
                    {
                        VAR_15 = 12;
                    }
                    for (VAR_14=0; VAR_14<VAR_15; VAR_14++)
                    {
                        VAR_10->operationRateSet[VAR_14] = VAR_7[VAR_14][3];
                    }
                    VAR_10->operationRateCount = VAR_14;
                    VAR_10->currentRateIndex = ((VAR_14+1)*3)/4;
                }
                else
                {
                    for (VAR_14=0; VAR_14<11; VAR_14++)
                    {
                        VAR_10->operationRateSet[VAR_14] = VAR_7[VAR_14][2];
                    }
                    VAR_10->operationRateCount = VAR_14;
                    VAR_10->currentRateIndex = ((VAR_14+1)*3)/4;
                }
        }
        else
        {
            for (VAR_14=0; VAR_14<4; VAR_14++)
            {
                VAR_10->operationRateSet[VAR_14] = (u8_t)VAR_14;
            }
            VAR_10->operationRateCount = 4;
            VAR_10->currentRateIndex = VAR_10->operationRateCount-1;
        }
    }
    else
    {
        if (VAR_11 == 2)
        {
            if (VAR_6->wlanMode == VAR_4)
            {
                for (VAR_14=0; VAR_14<(12+VAR_13); VAR_14++)
                {
                    VAR_10->operationRateSet[VAR_14] = VAR_8[VAR_14][1];
                }
                VAR_10->operationRateCount = 12+VAR_13;
                VAR_10->currentRateIndex = 8;
            }
            else
            {
                if (VAR_6->sta.htCtrlBandwidth == VAR_3)
                {
                    for (VAR_14=0; VAR_14<(12+VAR_13); VAR_14++)
                    {
                        VAR_10->operationRateSet[VAR_14] = VAR_8[VAR_14][1];
                    }
                    VAR_10->operationRateCount = 12+VAR_13;
                    VAR_10->currentRateIndex = 8;
                }
                else
                {
                    for (VAR_14=0; VAR_14<11; VAR_14++)
                    {
                        VAR_10->operationRateSet[VAR_14] = VAR_8[VAR_14][0];
                    }
                    VAR_10->operationRateCount = 11;
                    VAR_10->currentRateIndex = 7;
                }
            }
        }
        else if (VAR_11 == 3)
        {
                if (VAR_6->sta.htCtrlBandwidth == VAR_3)
                {
                    if(VAR_13 != 0)
                    {
                        VAR_15 = 11;
                    }
                    else
                    {
                        VAR_15 = 10;
                    }
                    for (VAR_14=0; VAR_14<VAR_15; VAR_14++)
                    {
                        VAR_10->operationRateSet[VAR_14] = VAR_7[VAR_14][1];
                    }
                    VAR_10->operationRateCount = VAR_14;
                    VAR_10->currentRateIndex = ((VAR_14+1)*3)/4;
                }
                else
                {
                    for (VAR_14=0; VAR_14<9; VAR_14++)
                    {
                        VAR_10->operationRateSet[VAR_14] = VAR_7[VAR_14][0];
                    }
                    VAR_10->operationRateCount = VAR_14;
                    VAR_10->currentRateIndex = ((VAR_14+1)*3)/4;
                }
        }
        else
        {
            for (VAR_14=0; VAR_14<8; VAR_14++)
            {
                VAR_10->operationRateSet[VAR_14] = VAR_14+4;
            }
            VAR_10->operationRateCount = 8;
            VAR_10->currentRateIndex = 4;
        }
    }

    VAR_10->flag = 0;
    VAR_10->txCount = 0;
    VAR_10->failCount = 0;
    VAR_10->currentRate = VAR_10->operationRateSet[VAR_10->currentRateIndex];
    VAR_10->lasttxCount = 0;
    VAR_10->lastTime = VAR_6->tick;
    VAR_10->probingTime = VAR_6->tick;
    for (VAR_14=0; VAR_14<VAR_5; VAR_14++) {
        VAR_6->PER[VAR_14] = 0;
        VAR_6->txMPDU[VAR_14] = VAR_6->txFail[VAR_14] = 0;
    }
    VAR_6->probeCount = 0;
    VAR_6->probeInterval = 0;







    return;
}
