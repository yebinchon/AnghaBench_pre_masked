
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
typedef int u16_t ;
struct zsWlanBeaconFrameHeader {int dummy; } ;
struct zsPartnerNotifyEvent {int dummy; } ;
struct zsBssInfo {scalar_t__ macaddr; } ;
struct TYPE_5__ {int SignalQuality; int SignalStrength1; } ;
struct TYPE_6__ {TYPE_1__ Data; } ;
struct zsAdditionInfo {TYPE_2__ Tail; } ;
struct TYPE_7__ {scalar_t__ oppositeCount; int ssidLen; int* capability; int bChannelScan; int * ssid; int ibssReceiveBeaconCount; int rxBeaconCount; scalar_t__ TPCEnable; scalar_t__ DFSEnable; int bssid; } ;
struct TYPE_8__ {scalar_t__ wlanMode; TYPE_3__ sta; int (* zfcbIbssPartnerNotify ) (int *,int,struct zsPartnerNotifyEvent*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *,int,struct zsPartnerNotifyEvent*) ;
 TYPE_4__* VAR_9 ;
 struct zsBssInfo* FUNC_2 (int *) ;
 int FUNC_3 (int *,struct zsBssInfo*) ;
 int FUNC_4 (int *,struct zsBssInfo*) ;
 int FUNC_5 (int *,struct zsBssInfo*) ;
 int FUNC_6 (int *,int *,int *,int,int) ;
 int FUNC_7 (int *,int *,int ) ;
 int FUNC_8 (int *,int *,struct zsPartnerNotifyEvent*) ;
 int FUNC_9 (int *,int *) ;
 scalar_t__ FUNC_10 (int *,int *,int *,int,int) ;
 struct zsBssInfo* FUNC_11 (int *,int *,struct zsWlanBeaconFrameHeader*) ;
 int FUNC_12 (int *,int *,int*) ;
 int FUNC_13 (int *,int *,struct zsWlanBeaconFrameHeader*,struct zsBssInfo*,struct zsAdditionInfo*,int) ;
 scalar_t__ FUNC_14 (int *) ;
 int FUNC_15 (int *,int *) ;
 int FUNC_16 (int *,int *) ;
 int FUNC_17 (int *,int ,int ) ;
 int FUNC_18 (int *,int *) ;
 int FUNC_19 (int *,int *) ;
 int FUNC_20 (int *,int *) ;
 int FUNC_21 (int *,int *) ;
 int FUNC_22 (char*) ;
 int FUNC_23 (int *,int *,int) ;
 int FUNC_24 (int *,int *,int) ;
 int FUNC_25 () ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;
 int FUNC_28 (int *) ;

void FUNC_29(zdev_t* VAR_10, zbuf_t* VAR_11, struct zsAdditionInfo* VAR_12)
{

    struct zsWlanBeaconFrameHeader* VAR_13;
    struct zsBssInfo* VAR_14;
    u8_t VAR_15[sizeof(struct zsWlanBeaconFrameHeader)];
    u8_t VAR_16[6];
    int VAR_17;

    FUNC_27(VAR_10);

    FUNC_25();


    FUNC_15(VAR_10, VAR_11);

    if (FUNC_14(VAR_10))
    {
        FUNC_0(VAR_9->sta.bssid, VAR_16);

        if ( VAR_9->wlanMode == VAR_3 )
        {
            if ( FUNC_10(VAR_10, VAR_11, VAR_16, VAR_5, 6) )
            {
                FUNC_9(VAR_10, VAR_11);
                FUNC_20(VAR_10, VAR_11);
                if (VAR_9->sta.DFSEnable)
                    FUNC_18(VAR_10, VAR_11);
                if (VAR_9->sta.TPCEnable)
                    FUNC_19(VAR_10, VAR_11);

                FUNC_17(VAR_10, VAR_12->Tail.Data.SignalStrength1,
                        VAR_12->Tail.Data.SignalQuality);
                VAR_9->sta.rxBeaconCount++;
            }
        }
        else if ( VAR_9->wlanMode == VAR_2 )
        {
            if ( FUNC_10(VAR_10, VAR_11, VAR_16, VAR_6, 6) )
            {
                int VAR_18;
                struct zsPartnerNotifyEvent VAR_19;

                FUNC_22("20070916 Receive opposite Beacon!");
                FUNC_26(VAR_10);
                VAR_9->sta.ibssReceiveBeaconCount++;
                FUNC_28(VAR_10);

                VAR_18 = FUNC_16(VAR_10, VAR_11);
                if ( VAR_18 == 0 )
                {

                    FUNC_8(VAR_10, VAR_11, &VAR_19);
                    if (VAR_9->zfcbIbssPartnerNotify != ((void*)0))
                    {
                        VAR_9->zfcbIbssPartnerNotify(VAR_10, 1, &VAR_19);
                    }
                }

                FUNC_17(VAR_10, VAR_12->Tail.Data.SignalStrength1,
                        VAR_12->Tail.Data.SignalQuality);
            }
        }
    }


    if ( !VAR_9->sta.bChannelScan )
    {
        goto zlReturn;
    }

    FUNC_6(VAR_10, VAR_11, VAR_15, 0, sizeof(struct zsWlanBeaconFrameHeader));
    VAR_13 = (struct zsWlanBeaconFrameHeader*) VAR_15;

    FUNC_26(VAR_10);



    VAR_14 = FUNC_11(VAR_10, VAR_11, VAR_13);

    if ( VAR_14 == ((void*)0) )
    {

        VAR_14 = FUNC_2(VAR_10);
        if (VAR_14 != ((void*)0))
        {
            VAR_17 = FUNC_13(VAR_10, VAR_11, VAR_13, VAR_14, VAR_12, 0);

            if ( VAR_17 != 0 )
            {
                FUNC_3(VAR_10, VAR_14);
            }
            else
            {
                FUNC_4(VAR_10, VAR_14);
            }
        }
    }
    else
    {
        VAR_17 = FUNC_13(VAR_10, VAR_11, VAR_13, VAR_14, VAR_12, 1);
        if (VAR_17 == 2)
        {
            FUNC_5(VAR_10, VAR_14);
            FUNC_3(VAR_10, VAR_14);
        }
        else if ( VAR_9->wlanMode == VAR_2 )
        {
            int VAR_20;


            FUNC_12(VAR_10, (u16_t *)VAR_14->macaddr, &VAR_20);
        }
    }

    FUNC_28(VAR_10);

zlReturn:

    return;
}
