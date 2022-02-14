
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef scalar_t__ u8_t ;
struct TYPE_4__ {int* scanReqs; scalar_t__ currScanType; int scanStartDelay; } ;
struct TYPE_5__ {TYPE_1__ scanMgr; void* bScheduleScan; void* bChannelScan; } ;
struct TYPE_6__ {TYPE_2__ sta; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_3__* VAR_8 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,scalar_t__) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

u8_t FUNC_12(zdev_t* VAR_9, u8_t VAR_10)
{
    u8_t VAR_11;

    FUNC_10(VAR_9);

    FUNC_7("scanType = ", VAR_10);

    FUNC_8();

    if ( VAR_10 != VAR_6 &&
         VAR_10 != VAR_5 )
    {
        FUNC_6("unknown scanType");
        return 1;
    }
    else if (FUNC_3(VAR_9))
    {
        FUNC_6("reject scan request due to connecting");
        return 1;
    }

    VAR_11 = VAR_10 - 1;

    FUNC_9(VAR_9);

    if ( VAR_8->sta.scanMgr.scanReqs[VAR_11] == 1 )
    {
        FUNC_7("scan rescheduled", VAR_10);
        goto scan_done;
    }

    VAR_8->sta.scanMgr.scanReqs[VAR_11] = 1;
    FUNC_7("scan scheduled: ", VAR_10);




    if ( VAR_8->sta.scanMgr.currScanType == VAR_7 )
    {
        goto schedule_scan;
    }
    else if ( VAR_8->sta.scanMgr.currScanType == VAR_6 &&
              VAR_10 == VAR_5 )
    {

        FUNC_4(VAR_9, VAR_3);



        VAR_8->sta.bScheduleScan = VAR_0;

        FUNC_4(VAR_9, VAR_4);
        FUNC_4(VAR_9, VAR_2);

        VAR_8->sta.bChannelScan = VAR_0;
        goto schedule_scan;
    }
    else
    {
        FUNC_6("Scan is busy...waiting later to start\n");
    }

    FUNC_11(VAR_9);
    return 0;

scan_done:
    FUNC_11(VAR_9);
    return 1;

schedule_scan:

    VAR_8->sta.bScheduleScan = VAR_1;

    FUNC_5(VAR_9, VAR_3, VAR_8->sta.scanMgr.scanStartDelay);
    VAR_8->sta.scanMgr.scanStartDelay = 3;

    VAR_8->sta.scanMgr.currScanType = VAR_10;
    FUNC_11(VAR_9);

    if ((FUNC_2(VAR_9)) && (!FUNC_0(VAR_9)))
    {
        FUNC_1(VAR_9, 1);
    }
    return 0;
}
