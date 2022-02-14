
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef void* u8_t ;
typedef int u16_t ;
struct TYPE_5__ {TYPE_1__* staTable; } ;
struct TYPE_6__ {int frequency; TYPE_2__ ap; int tick; int (* zfcbApConnectNotify ) (int *,void**,int) ;} ;
struct TYPE_4__ {int state; int* addr; int valid; int encryMode; void* vap; int time; int rcCell; void* qosInfo; void* staType; void* qosType; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int *,void**,int) ;
 TYPE_3__* VAR_7 ;
 int FUNC_1 (int *,int*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *,void*,int,int) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ,char*,void*) ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 () ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

u16_t FUNC_11(zdev_t* VAR_8, u16_t* VAR_9, u16_t VAR_10, u16_t VAR_11, u8_t VAR_12,
                 u8_t VAR_13, u8_t VAR_14)
{
    u16_t VAR_15;
    u16_t VAR_16;

    FUNC_9(VAR_8);

    FUNC_7();

    FUNC_5(VAR_0, "STA type=", VAR_12);

    FUNC_8(VAR_8);

    if ((VAR_15 = FUNC_1(VAR_8, VAR_9)) != 0xffff)
    {
        FUNC_4(VAR_2, "found");

        if ((VAR_10 == VAR_5) || (VAR_10 == VAR_6))
        {
            VAR_7->ap.staTable[VAR_15].state = VAR_10;
            VAR_7->ap.staTable[VAR_15].time = VAR_7->tick;
            VAR_7->ap.staTable[VAR_15].vap = (u8_t)VAR_11;
        }
        else if (VAR_10 == VAR_4)
        {
            if (VAR_7->ap.staTable[VAR_15].state == VAR_5)

            {
                VAR_7->ap.staTable[VAR_15].state = VAR_10;
                VAR_7->ap.staTable[VAR_15].time = VAR_7->tick;
                VAR_7->ap.staTable[VAR_15].qosType = VAR_13;
                VAR_7->ap.staTable[VAR_15].vap = (u8_t)VAR_11;
                VAR_7->ap.staTable[VAR_15].staType = VAR_12;
                VAR_7->ap.staTable[VAR_15].qosInfo = VAR_14;

                if (VAR_7->frequency < 3000)
                {

                    FUNC_3(VAR_8, &VAR_7->ap.staTable[VAR_15].rcCell, VAR_12, 1, 1);
                }
                else
                {

                    FUNC_3(VAR_8, &VAR_7->ap.staTable[VAR_15].rcCell, VAR_12, 0, 1);
                }

                if (VAR_7->zfcbApConnectNotify != ((void*)0))
                {
                    VAR_7->zfcbApConnectNotify(VAR_8, (u8_t*)VAR_9, VAR_11);
                }
            }
            else
            {
                VAR_15 = 0xffff;
            }
        }
    }
    else
    {
        FUNC_4(VAR_2, "Not found");
        if ((VAR_10 == VAR_5) || (VAR_10 == VAR_6))
        {

            VAR_15 = FUNC_2(VAR_8);
            FUNC_6(VAR_1, "new STA index=", VAR_15);

            if (VAR_15 != 0xffff)
            {
                for (VAR_16=0; VAR_16<3; VAR_16++)
                {
                    VAR_7->ap.staTable[VAR_15].addr[VAR_16] = VAR_9[VAR_16];
                }
                VAR_7->ap.staTable[VAR_15].state = VAR_10;
                VAR_7->ap.staTable[VAR_15].valid = 1;
                VAR_7->ap.staTable[VAR_15].time = VAR_7->tick;
                VAR_7->ap.staTable[VAR_15].vap = (u8_t)VAR_11;
                VAR_7->ap.staTable[VAR_15].encryMode = VAR_3;
            }
        }
    }

    FUNC_10(VAR_8);

    return VAR_15;
}
