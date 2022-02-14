
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int zdev_t ;
typedef size_t u8_t ;
typedef int u32_t ;
struct zsRcCell {size_t currentRate; scalar_t__ failCount; int flag; } ;
struct TYPE_2__ {int* txFail; int* txMPDU; scalar_t__* PER; scalar_t__ probeSuccessCount; scalar_t__ probeCount; } ;


 scalar_t__* VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int *,struct zsRcCell*) ;
 int FUNC_2 (struct zsRcCell*,size_t) ;
 scalar_t__ FUNC_3 (int,int) ;
 int FUNC_4 () ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(zdev_t* VAR_4, struct zsRcCell* VAR_5, u8_t VAR_6, u32_t VAR_7)
{
    FUNC_6(VAR_4);

    FUNC_4();



    if (VAR_6 && (VAR_6 != VAR_5->currentRate)) {
        VAR_3->txFail[VAR_6] += VAR_7;
        return;
    }

    if (!VAR_6) {
        VAR_7 = (FUNC_2(VAR_5, (u8_t)VAR_7)+1)>>1;
        if (VAR_5->currentRate <12)
        {
            VAR_7*=2;
        }
    }
    VAR_5->failCount += VAR_7;
    VAR_3->txFail[VAR_5->currentRate] += VAR_7;


    if (VAR_5->failCount > VAR_1)
    {
        if (VAR_3->txMPDU[VAR_5->currentRate] != 0) {
            VAR_3->PER[VAR_5->currentRate] = FUNC_3(100,
                (VAR_3->txFail[VAR_5->currentRate]*100)/VAR_3->txMPDU[VAR_5->currentRate]);
            if (!VAR_3->PER[VAR_5->currentRate]) VAR_3->PER[VAR_5->currentRate] ++;
        }


        if (VAR_3->PER[VAR_5->currentRate] > VAR_0[VAR_5->currentRate])
        {

            FUNC_1(VAR_4, VAR_5);
            VAR_5->flag |= VAR_2;


            if(VAR_5->currentRate == 15)
            {
                FUNC_7(VAR_4);
                FUNC_0(VAR_4, 8);
                FUNC_5(VAR_4);
            }

            VAR_3->txFail[VAR_5->currentRate] = VAR_3->txFail[VAR_5->currentRate] >> 1;
            VAR_3->txMPDU[VAR_5->currentRate] = VAR_3->txMPDU[VAR_5->currentRate] >> 1;

            VAR_3->probeCount = VAR_3->probeSuccessCount = 0;
        }
    }


    return;
}
