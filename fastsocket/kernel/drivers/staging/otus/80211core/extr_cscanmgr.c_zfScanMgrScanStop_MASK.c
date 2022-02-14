
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
struct TYPE_4__ {void* currScanType; scalar_t__* scanReqs; } ;
struct TYPE_5__ {TYPE_1__ scanMgr; scalar_t__ scanFrequency; void* bChannelScan; void* bScheduleScan; } ;
struct TYPE_6__ {int (* zfcbScanNotify ) (int *,int *) ;TYPE_2__ sta; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 void* VAR_4 ;
 int FUNC_0 (int *,int *) ;
 TYPE_3__* VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

void FUNC_12(zdev_t* VAR_6, u8_t VAR_7)
{
    u8_t VAR_8 = 0;
    u8_t VAR_9 = VAR_4;

    FUNC_10(VAR_6);

    FUNC_8();

    FUNC_9(VAR_6);

    if ( VAR_5->sta.scanMgr.currScanType == VAR_4 )
    {
        FUNC_6(VAR_5->sta.scanMgr.scanReqs[0] == 0);
        FUNC_6(VAR_5->sta.scanMgr.scanReqs[1] == 0);
        goto done;
    }

    switch(VAR_7)
    {
        case 129:
            VAR_8 = 1;
            VAR_9 = 128;
            break;

        case 128:
            VAR_9 = 129;
            break;

        default:
            goto done;
    }

    if ( VAR_5->sta.scanMgr.currScanType != VAR_7 )
    {
        goto stop_done;
    }

    FUNC_4(VAR_6, VAR_2);



    VAR_5->sta.bScheduleScan = VAR_0;

    FUNC_4(VAR_6, VAR_3);
    FUNC_4(VAR_6, VAR_1);

    VAR_5->sta.bChannelScan = VAR_0;
    VAR_5->sta.scanFrequency = 0;

    if ( VAR_5->sta.scanMgr.scanReqs[VAR_9 - 1] )
    {
        VAR_5->sta.scanMgr.currScanType = VAR_9;


        FUNC_5(VAR_6, VAR_2, 100);
    }
    else
    {
        VAR_5->sta.scanMgr.currScanType = VAR_4;
    }

stop_done:
    VAR_5->sta.scanMgr.scanReqs[VAR_7 - 1] = 0;

    FUNC_11(VAR_6);


    if ((FUNC_3(VAR_6)) && (!FUNC_1(VAR_6)))
    {
        FUNC_2(VAR_6, 0);
    }

    if ( VAR_8 )
    {
        FUNC_7("Scan notify after reset");
        if (VAR_5->zfcbScanNotify != ((void*)0))
        {
            VAR_5->zfcbScanNotify(VAR_6, ((void*)0));
        }
    }

    return;

done:
    FUNC_11(VAR_6);
    return;
}
