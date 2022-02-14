
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
typedef int u16_t ;
struct TYPE_4__ {int maxSleepPeriods; int state; scalar_t__ tempWakeUp; } ;
struct TYPE_5__ {int powerSaveMode; TYPE_1__ psMgr; } ;
struct TYPE_6__ {scalar_t__ wlanMode; int beaconInterval; TYPE_2__ sta; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;




 TYPE_3__* VAR_3 ;
 int FUNC_0 (int *,int ,int,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int*) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

void FUNC_12(zdev_t* VAR_4, u8_t VAR_5)
{
    u16_t VAR_6 = 0;
    u8_t VAR_7 = 0;

    FUNC_10(VAR_4);
    FUNC_8();

    FUNC_7("mode = ", VAR_5);

    if (VAR_5 > 130)
    {
        FUNC_6("return - wrong power save mode");
        return;
    }

    FUNC_9(VAR_4);


    switch(VAR_5)
    {
        case 128:
            VAR_6 = FUNC_3(VAR_4, &VAR_7);
            break;

        case 131:
        case 130:
            VAR_3->sta.psMgr.maxSleepPeriods = 1;
            FUNC_2(VAR_4);
            break;

        case 129:
            VAR_3->sta.psMgr.maxSleepPeriods = VAR_1;
            FUNC_2(VAR_4);
            break;
    }
    VAR_3->sta.powerSaveMode = VAR_5;
    FUNC_11(VAR_4);

    if ( VAR_7 )
    {
        FUNC_1(VAR_4, 0);
        VAR_3->sta.psMgr.tempWakeUp = 0;
    }

    if ( FUNC_5(VAR_4)
         && (VAR_3->wlanMode == VAR_0) )
    {
        switch(VAR_5)
        {
            case 128:
                FUNC_0(VAR_4, 0, 0, VAR_3->beaconInterval);
                break;

            case 131:
            case 129:
            case 130:
                FUNC_0(VAR_4, 0, 1, VAR_3->beaconInterval);
                break;

            default:
                FUNC_0(VAR_4, 0, 0, VAR_3->beaconInterval);
                break;
        }
    }

    if (VAR_6 == 1)
    {
        FUNC_4(VAR_4, 0);
    }

    return;
}
