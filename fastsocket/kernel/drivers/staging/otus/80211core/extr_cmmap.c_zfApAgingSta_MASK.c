
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u32_t ;
typedef size_t u16_t ;
struct TYPE_5__ {int staProbingTimeSec; size_t staPowerSaving; TYPE_1__* staTable; scalar_t__ staAgingTimeSec; scalar_t__ authSharing; scalar_t__ bStaAssociated; scalar_t__ gStaAssociated; } ;
struct TYPE_6__ {TYPE_2__ ap; scalar_t__ tick; } ;
struct TYPE_4__ {int valid; size_t* addr; scalar_t__ state; scalar_t__ psMode; scalar_t__ time; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_3__* VAR_11 ;
 int FUNC_0 (int *,int ,size_t*,int,int ,int ) ;
 int FUNC_1 (int ,char*,size_t) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(zdev_t* VAR_12)
{
    u16_t VAR_13;
    u32_t VAR_14;
    u16_t VAR_15[3];
    u16_t VAR_16;
    u16_t VAR_17 = 0;

    FUNC_4(VAR_12);

    FUNC_2();

    VAR_11->ap.gStaAssociated = VAR_11->ap.bStaAssociated = 0;

    for (VAR_13=0; VAR_13<VAR_2; VAR_13++)
    {
        VAR_16 = 0;
        FUNC_3(VAR_12);
        if (VAR_11->ap.staTable[VAR_13].valid == 1)
        {
            VAR_15[0] = VAR_11->ap.staTable[VAR_13].addr[0];
            VAR_15[1] = VAR_11->ap.staTable[VAR_13].addr[1];
            VAR_15[2] = VAR_11->ap.staTable[VAR_13].addr[2];

            VAR_14 = (u32_t)((u32_t)VAR_11->tick-(u32_t)VAR_11->ap.staTable[VAR_13].time)
                      * VAR_3;


            if ((VAR_11->ap.staTable[VAR_13].state == VAR_7)
                    && (VAR_14 > VAR_4))
            {

                VAR_11->ap.staTable[VAR_13].valid = 0;
                VAR_11->ap.authSharing = 0;
                VAR_16 = 1;
            }


            if ((VAR_11->ap.staTable[VAR_13].state == VAR_6)
                    && (VAR_14 > VAR_0))
            {

                VAR_11->ap.staTable[VAR_13].valid = 0;
                VAR_16 = 1;
            }


            if (VAR_11->ap.staTable[VAR_13].state == VAR_5)
            {
                if (VAR_11->ap.staTable[VAR_13].psMode != 0)
                {
                    VAR_17++;
                }

                if (VAR_14 > ((u32_t)VAR_11->ap.staAgingTimeSec<<10))
                {

                    FUNC_1(VAR_1, "Age STA index=", VAR_13);
                    VAR_11->ap.staTable[VAR_13].valid = 0;
                    VAR_16 = 1;
                }
                else if (VAR_14 > ((u32_t)VAR_11->ap.staProbingTimeSec<<10))
                {
                    if (VAR_11->ap.staTable[VAR_13].psMode == 0)
                    {

                        FUNC_1(VAR_1, "Probing STA index=", VAR_13);
                        VAR_11->ap.staTable[VAR_13].time +=
                                (VAR_11->ap.staProbingTimeSec * VAR_8);
                        VAR_16 = 2;
                    }
                }
            }


        }
        FUNC_5(VAR_12);

        if (VAR_16 == 1)
        {

            FUNC_0(VAR_12, VAR_10, VAR_15, 4, 0, 0);
        }
        else if (VAR_16 == 2)
        {
            FUNC_0(VAR_12, VAR_9, VAR_15, 0, 0, 0);
        }

    }

    VAR_11->ap.staPowerSaving = VAR_17;

    return;
}
