
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
struct TYPE_4__ {scalar_t__ currScanType; } ;
struct TYPE_5__ {int ibssSiteSurveyStatus; int scanFrequency; int bPassiveScan; int bScheduleScan; scalar_t__ bChannelScan; TYPE_1__ scanMgr; } ;
struct TYPE_6__ {TYPE_2__ sta; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_3__* VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (char*) ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

void FUNC_12(zdev_t* VAR_7)
{
    FUNC_10(VAR_7);

    FUNC_8();

    if ( VAR_5->sta.bChannelScan )
    {
        return;
    }

    FUNC_4(VAR_7);

    FUNC_9(VAR_7);

    if ( VAR_5->sta.scanMgr.currScanType == VAR_4 )
    {
        goto no_scan;
    }


    FUNC_0(VAR_7, 0);
    VAR_5->sta.bChannelScan = VAR_1;
    VAR_5->sta.bScheduleScan = VAR_0;
    FUNC_6(VAR_7, VAR_2);
    FUNC_6(VAR_7, VAR_3);


    VAR_5->sta.scanFrequency = FUNC_1(VAR_7, &VAR_5->sta.bPassiveScan);
    FUNC_11(VAR_7);
    if (FUNC_5(VAR_7))
    {
        FUNC_3(VAR_7, 1);
        FUNC_9(VAR_7);
        VAR_5->sta.ibssSiteSurveyStatus = 1;
        FUNC_11(VAR_7);
    }
    else
    {
        FUNC_3(VAR_7, 0);
        FUNC_9(VAR_7);
        VAR_5->sta.ibssSiteSurveyStatus = 0;
        FUNC_11(VAR_7);
    }


    FUNC_7("scan 0");
    FUNC_2(VAR_7, VAR_5->sta.scanFrequency, VAR_6);

    return;

no_scan:
    FUNC_11(VAR_7);
    return;
}
