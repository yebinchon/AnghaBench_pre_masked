
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
typedef int u16_t ;
struct TYPE_6__ {int currScanType; int scanStartDelay; scalar_t__* scanReqs; } ;
struct TYPE_7__ {int scanFrequency; scalar_t__ bChannelScan; int ibssSiteSurveyStatus; scalar_t__ rifsState; int currentFrequency; int HT2040; int EnableHT; scalar_t__ ibssReceiveBeaconCount; TYPE_2__ scanMgr; int bPassiveScan; } ;
struct TYPE_5__ {int allowChannelCnt; } ;
struct TYPE_8__ {TYPE_3__ sta; int (* zfcbScanNotify ) (int *,int *) ;scalar_t__ tickIbssReceiveBeacon; int ExtOffset; int BandWidth40; int frequency; TYPE_1__ regulationTable; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;


 int VAR_4 ;
 int FUNC_0 (int *,int *) ;
 TYPE_4__* VAR_5 ;
 int FUNC_1 (int *,int*) ;
 int FUNC_2 (int *,int,int *) ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int FUNC_4 (int *,int,int ) ;
 int FUNC_5 (int *,int,int ,int ) ;
 int FUNC_6 (int *,int) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,int ) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 () ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;

u8_t FUNC_17(zdev_t* VAR_8)
{
    u16_t VAR_9 = 0;
    u8_t VAR_10;

    FUNC_15(VAR_8);

    FUNC_13();

    FUNC_14(VAR_8);
    if ( VAR_5->sta.scanFrequency == 0 )
    {
        FUNC_16(VAR_8);
        return -1;
    }

    VAR_9 = FUNC_2(VAR_8, VAR_5->sta.scanFrequency,
                                           &VAR_5->sta.bPassiveScan);

    if ( (VAR_9 == 0xffff)
         || (VAR_5->sta.scanFrequency == FUNC_1(VAR_8, &VAR_10)) )
    {
        u8_t VAR_11;
        u8_t VAR_12 = 0;
        u8_t VAR_13 = 0;


        VAR_5->sta.scanFrequency = 0;

        FUNC_12("scan 1 type: ", VAR_5->sta.scanMgr.currScanType);
        FUNC_12("scan channel count = ", VAR_5->regulationTable.allowChannelCnt);


        FUNC_9(VAR_8, VAR_2);

        if ( VAR_5->sta.bChannelScan == VAR_0 )
        {
            FUNC_11("WOW!! scan is cancelled\n");
            FUNC_16(VAR_8);
            goto report_scan_result;
        }


        VAR_11 = VAR_5->sta.scanMgr.currScanType;
        switch(VAR_11)
        {
            case 129:
                VAR_12 = 1;

                if ( VAR_5->sta.scanMgr.scanReqs[128 - 1] )
                {
                    VAR_5->sta.scanMgr.scanReqs[128 - 1] = 0;
                    VAR_13 = 1;
                }

                break;

            case 128:
                VAR_13 = 1;

                if ( VAR_5->sta.scanMgr.scanReqs[129 - 1] )
                {


                    FUNC_10(0);
                }

                break;

            default:
                FUNC_10(0);
                break;
        }

        VAR_5->sta.scanMgr.scanReqs[VAR_11 - 1] = 0;
        VAR_5->sta.scanMgr.scanStartDelay = 100;
        VAR_5->sta.scanMgr.currScanType = VAR_4;
        FUNC_16(VAR_8);


        FUNC_3(VAR_8, VAR_5->frequency, VAR_5->BandWidth40,
                VAR_5->ExtOffset, VAR_6);

        VAR_5->sta.bChannelScan = VAR_0;


        if (FUNC_7(VAR_8))
        {
            FUNC_6(VAR_8, 1);
            FUNC_14(VAR_8);
            VAR_5->sta.ibssSiteSurveyStatus = 2;
            VAR_5->tickIbssReceiveBeacon = 0;
            VAR_5->sta.ibssReceiveBeaconCount = 0;
            FUNC_16(VAR_8);



            if( VAR_5->sta.rifsState == VAR_3 )
            {
                FUNC_5(VAR_8, ((VAR_5->sta.currentFrequency<3000)?1:0), VAR_5->sta.EnableHT, VAR_5->sta.HT2040);
            }
        }
        else
        {
            FUNC_6(VAR_8, 0);
            FUNC_14(VAR_8);
            VAR_5->sta.ibssSiteSurveyStatus = 0;
            FUNC_16(VAR_8);
        }


report_scan_result:






        if ( VAR_12 )
        {
            if (VAR_5->zfcbScanNotify != ((void*)0))
            {
                VAR_5->zfcbScanNotify(VAR_8, ((void*)0));
            }
        }

        if ( VAR_13 )
        {

            FUNC_8(VAR_8);
        }

        return 0;
    }
    else
    {
        VAR_5->sta.scanFrequency = VAR_9;


        FUNC_9(VAR_8, VAR_1);
        FUNC_16(VAR_8);

        FUNC_11("scan 2");
        FUNC_4(VAR_8, VAR_5->sta.scanFrequency, VAR_7);

        return 1;
    }
}
