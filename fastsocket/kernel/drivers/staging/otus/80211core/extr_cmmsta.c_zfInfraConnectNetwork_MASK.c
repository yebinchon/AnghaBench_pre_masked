
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
struct zsBssInfo {scalar_t__* ssid; int* beaconInterval; int EnableHT; scalar_t__ securityType; scalar_t__* cencIe; scalar_t__* wpaIe; scalar_t__* rsnIe; int* capability; int enableHT40; int extChOffset; int athOwlAp; int erp; int marvelAp; int frameBodysize; int* timeStamp; int* frameBody; int macaddr; int SG40; int extSupportedRates; int supportedRates; int bssid; int frequency; } ;
struct TYPE_4__ {scalar_t__ tempWakeUp; } ;
struct TYPE_5__ {scalar_t__ SWEncryptEnable; scalar_t__ bSafeMode; scalar_t__ ssidLen; int* capability; int EnableHT; scalar_t__ wepStatus; int athOwlAp; int enableDrvBA; int beaconFrameBodySize; int* beaconFrameBody; scalar_t__ authMode; int connectTimeoutCount; int bIsSharedKey; int bssid; void* bProtectionMode; scalar_t__* rsnIe; scalar_t__* wpaIe; int encryMode; void* wpaState; scalar_t__* cencIe; scalar_t__ wmeEnabled; int SG40; scalar_t__* ssid; int connectState; int uapsdQ; scalar_t__ qosInfo; TYPE_1__ psMgr; scalar_t__ wmeConnected; scalar_t__ bssNotFoundCount; } ;
struct TYPE_6__ {int beaconInterval; scalar_t__ preambleTypeInUsed; scalar_t__ preambleType; int BandWidth40; int ExtOffset; int reorder; TYPE_2__ sta; int frequency; } ;


 void* VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 void* VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 TYPE_3__* VAR_34 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,void*) ;
 int FUNC_8 (int *,int) ;
 int FUNC_9 (int *,int) ;
 struct zsBssInfo* FUNC_10 (int *,struct zsBssInfo*) ;
 int FUNC_11 (scalar_t__*,scalar_t__*,scalar_t__) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,int ,int ,int ) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *,int) ;
 int FUNC_18 (int *,int ) ;
 int VAR_35 ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (int *,int ) ;
 int FUNC_21 (int *,int ) ;
 int FUNC_22 (int *,void**,void**,void**) ;
 int FUNC_23 (char*) ;
 int FUNC_24 () ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;
 int FUNC_27 (int *) ;

void FUNC_28(zdev_t* VAR_36)
{
    struct zsBssInfo* VAR_37;
    struct zsBssInfo* VAR_38=((void*)0);
    struct zsBssInfo VAR_39;


    u8_t VAR_40=VAR_0;
    u16_t VAR_41;
    u8_t VAR_42 = VAR_19;

    FUNC_26(VAR_36);
    FUNC_24();



    FUNC_25(VAR_36);
    VAR_34->sta.bssNotFoundCount = 0;
    FUNC_27(VAR_36);


    FUNC_20(VAR_36, 0);

    FUNC_18(VAR_36, 0);


    FUNC_3(VAR_36, VAR_27);
    FUNC_12(VAR_36);

    VAR_34->sta.wmeConnected = 0;
    VAR_34->sta.psMgr.tempWakeUp = 0;
    VAR_34->sta.qosInfo = 0;
    FUNC_13(VAR_36, VAR_34->sta.uapsdQ);

    VAR_34->sta.connectState = VAR_26;


    FUNC_2(VAR_36);

    VAR_38 = FUNC_10(VAR_36, &VAR_39);

 if (VAR_34->sta.SWEncryptEnable != 0)
 {
     if (VAR_34->sta.bSafeMode == 0)
     {
      FUNC_16(VAR_36);
     }
 }
    if ( VAR_38 != ((void*)0) )
    {


        VAR_37 = VAR_38;
        VAR_34->sta.ssidLen = VAR_37->ssid[1];
        FUNC_11(VAR_34->sta.ssid, &(VAR_37->ssid[2]), VAR_37->ssid[1]);
        VAR_34->frequency = VAR_37->frequency;



        FUNC_19(VAR_36, VAR_37->bssid);
        FUNC_14(VAR_36, VAR_13);
        FUNC_21(VAR_36, VAR_37->supportedRates);
        FUNC_21(VAR_36, VAR_37->extSupportedRates);

        VAR_34->beaconInterval = VAR_37->beaconInterval[0] +
                             (((u16_t) VAR_37->beaconInterval[1]) << 8);
        if (VAR_34->beaconInterval == 0)
        {
            VAR_34->beaconInterval = 100;
        }


        VAR_34->sta.capability[0] |= VAR_7;

        VAR_34->sta.capability[0] &= ~VAR_8;


        VAR_34->sta.EnableHT = VAR_37->EnableHT;
        VAR_34->sta.SG40 = VAR_37->SG40;
        if ( VAR_37->securityType == VAR_24 )
        {
            VAR_34->sta.wpaState = VAR_28;

            if ( VAR_34->sta.wepStatus == VAR_15 )
            {
                VAR_34->sta.encryMode = VAR_33;


                if (VAR_34->sta.EnableHT == 1)
                {
                    FUNC_17(VAR_36, (VAR_30|VAR_29));
                }




            }
            else if ( VAR_34->sta.wepStatus == VAR_14 )
            {
                VAR_34->sta.encryMode = VAR_3;


                if (VAR_34->sta.EnableHT)
                {

                    VAR_42 = VAR_18;
                }
            }

            if ( VAR_37->wpaIe[1] != 0 )
            {
                FUNC_11(VAR_34->sta.wpaIe, VAR_37->wpaIe,
                             VAR_37->wpaIe[1]+2);
            }
            else
            {
                VAR_34->sta.wpaIe[1] = 0;
            }

            if ( VAR_37->rsnIe[1] != 0 )
            {
                FUNC_11(VAR_34->sta.rsnIe, VAR_37->rsnIe,
                             VAR_37->rsnIe[1]+2);
            }
            else
            {
                VAR_34->sta.rsnIe[1] = 0;
            }
        }




        VAR_34->preambleTypeInUsed = VAR_34->preambleType;
        if ( VAR_34->preambleTypeInUsed == VAR_20 )
        {
            if (VAR_37->capability[0] & VAR_11)
            {
                VAR_34->preambleTypeInUsed = VAR_22;
            }
            else
            {
                VAR_34->preambleTypeInUsed = VAR_21;
            }
        }

        if (VAR_34->preambleTypeInUsed == VAR_21)
        {
            VAR_34->sta.capability[0] &= ~VAR_11;
        }
        else
        {
            VAR_34->sta.capability[0] |= VAR_11;
        }


        if ((VAR_37->enableHT40 == 1) &&
            ((VAR_37->extChOffset == 1) || (VAR_37->extChOffset == 3)))
        {
            VAR_34->BandWidth40 = VAR_37->enableHT40;
            VAR_34->ExtOffset = VAR_37->extChOffset;
        }
        else
        {
            VAR_34->BandWidth40 = 0;
            VAR_34->ExtOffset = 0;
        }




        if ( VAR_37->athOwlAp & VAR_7 )
        {



            FUNC_5(VAR_36);
            VAR_34->sta.athOwlAp = 1;

            VAR_42 = VAR_18;
        }
        else
        {



            FUNC_6(VAR_36);
            VAR_34->sta.athOwlAp = 0;
        }
        VAR_34->reorder = 1;


        FUNC_7(VAR_36, VAR_42);


        if ( VAR_37->capability[1] & VAR_9 )
        {
            VAR_34->sta.capability[1] |= VAR_9;
        }

        if ( VAR_37->erp & VAR_8 )
        {

            VAR_34->sta.bProtectionMode = VAR_2;
            FUNC_8(VAR_36, 0);
        }
        else
        {

            VAR_34->sta.bProtectionMode = VAR_0;
            FUNC_8(VAR_36, 1);
        }

        if (VAR_37->marvelAp == 1)
        {
            VAR_34->sta.enableDrvBA = 0;




            FUNC_9(VAR_36, 0);
        }
        else
        {
            VAR_34->sta.enableDrvBA = 1;






            FUNC_9(VAR_36, 1);
        }


        VAR_34->sta.beaconFrameBodySize = VAR_37->frameBodysize + 12;
        if (VAR_34->sta.beaconFrameBodySize > VAR_12)
        {
            VAR_34->sta.beaconFrameBodySize = VAR_12;
        }
        for (VAR_41=0; VAR_41<8; VAR_41++)
        {
            VAR_34->sta.beaconFrameBody[VAR_41] = VAR_37->timeStamp[VAR_41];
        }
        VAR_34->sta.beaconFrameBody[8] = VAR_37->beaconInterval[0];
        VAR_34->sta.beaconFrameBody[9] = VAR_37->beaconInterval[1];
        VAR_34->sta.beaconFrameBody[10] = VAR_37->capability[0];
        VAR_34->sta.beaconFrameBody[11] = VAR_37->capability[1];
        for (VAR_41=0; VAR_41<(VAR_34->sta.beaconFrameBodySize - 12); VAR_41++)
        {
            VAR_34->sta.beaconFrameBody[VAR_41+12] = VAR_37->frameBody[VAR_41];
        }

        if ( ( VAR_37->capability[0] & VAR_10 )&&
             (( VAR_34->sta.authMode == VAR_5 )||
              ( VAR_34->sta.authMode == VAR_6)||
              (VAR_34->sta.authMode == VAR_4)) )
        {

            if ( VAR_34->sta.wepStatus == VAR_16 )
            {
                FUNC_23("Adapter is no WEP, try to connect to WEP AP");
                VAR_40 = VAR_0;
            }


            if ( VAR_34->sta.wepStatus == VAR_17 )
            {

                if (VAR_34->sta.EnableHT == 1)
                {
                    FUNC_17(VAR_36, (VAR_32|VAR_31));
                }




            }

            VAR_34->sta.capability[0] |= VAR_10;

            if ( VAR_34->sta.authMode == VAR_4 )
            {
                if ( (VAR_34->sta.connectTimeoutCount % 2) == 0 )
                    VAR_34->sta.bIsSharedKey = 0;
                else
                    VAR_34->sta.bIsSharedKey = 1;
            }
            else if ( VAR_34->sta.authMode != VAR_6 )
            {

                VAR_34->sta.bIsSharedKey = 0;
            }
            else if ( VAR_34->sta.authMode != VAR_5 )
            {

                VAR_34->sta.bIsSharedKey = 1;
            }
        }
        else
        {
            if ( (VAR_37->securityType == VAR_24)||
                 (VAR_37->capability[0] & VAR_10) )
            {
                VAR_34->sta.capability[0] |= VAR_10;

            }
            else
            {
                VAR_34->sta.capability[0] &= (~VAR_10);
            }



            VAR_34->sta.bIsSharedKey = 0;
        }
    }
    else
    {
        FUNC_23("Desired SSID not found");
        goto zlConnectFailed;
    }


    FUNC_4(VAR_36, VAR_34->frequency, VAR_35);
    return;

zlConnectFailed:
    FUNC_15(VAR_36, VAR_25, VAR_34->sta.bssid, 0);
    return;
}
