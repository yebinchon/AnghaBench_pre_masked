
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
struct zsWlanProbeRspFrameHeader {int* capability; int * beaconInterval; int * timeStamp; int * bssid; int * sa; } ;
struct zsBssInfo {int flag; scalar_t__* ssid; int frequency; int channel; int* capability; int frameBodysize; scalar_t__* frameBody; scalar_t__* supportedRates; scalar_t__* countryInfo; int erp; scalar_t__* extSupportedRates; scalar_t__* wpaIe; scalar_t__* wscIe; scalar_t__* rsnIe; scalar_t__* cencIe; int wmeSupport; int EnableHT; int enableHT40; int SG40; int extChOffset; int athOwlAp; int broadcomHTAp; int marvelAp; int signalStrength; int signalQuality; int sortValue; int tick; int apCap; int atimWindow; void* securityType; int * beaconInterval; int * timeStamp; int * bssid; int * macaddr; } ;
struct TYPE_6__ {int SignalStrength1; } ;
struct TYPE_7__ {TYPE_2__ Data; } ;
struct zsAdditionInfo {TYPE_3__ Tail; } ;
typedef scalar_t__ s8_t ;
struct TYPE_5__ {int currentFrequency; scalar_t__ b802_11D; } ;
struct TYPE_8__ {int supportMode; int tick; TYPE_1__ sta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 TYPE_4__* VAR_35 ;
 int FUNC_0 (int,int*) ;
 int FUNC_1 (int *,int,int ) ;
 int FUNC_2 (int *,scalar_t__,int,int,int) ;
 int FUNC_3 (int *,int *,scalar_t__*,int,int) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int *,int ) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *,int ) ;
 int FUNC_9 (int *,int *,int,int) ;
 int FUNC_10 (int *,int *,int ) ;
 int FUNC_11 (int *,scalar_t__*,scalar_t__*) ;
 int FUNC_12 (int *,int*,int) ;
 scalar_t__ FUNC_13 (int *,int) ;
 scalar_t__ FUNC_14 (int *,int,scalar_t__*) ;
 void* FUNC_15 (int *,scalar_t__*,int,int ) ;
 void* FUNC_16 (int *,scalar_t__*,int,scalar_t__*) ;
 int FUNC_17 (int *,int *) ;
 int FUNC_18 (int *,int*) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (int ,char*) ;
 int FUNC_21 (int *) ;
 int FUNC_22 (int *,int *,int) ;
 int FUNC_23 (int *,int *,int) ;

u8_t FUNC_24(zdev_t* VAR_36, zbuf_t* VAR_37,
        struct zsWlanProbeRspFrameHeader *VAR_38,
        struct zsBssInfo* VAR_39, struct zsAdditionInfo* VAR_40, u8_t VAR_41)
{
    u8_t VAR_42, VAR_43, VAR_44;
    u16_t VAR_45, VAR_46;
    u8_t VAR_47;
    u16_t VAR_48 = 0;
    u16_t VAR_49 = 0;

    FUNC_21(VAR_36);

    if ((VAR_41 == 1) && ((VAR_39->flag & VAR_1) != 0))
    {
        goto zlUpdateRssi;
    }


    if ( (VAR_46 = FUNC_6(VAR_36, VAR_37, VAR_28)) == 0xffff )
    {
        FUNC_19("EID(SSID) not found");
        goto zlError;
    }

    VAR_42 = FUNC_22(VAR_36, VAR_37, VAR_46+1);

 {
  u8_t VAR_50 = 0;
  FUNC_18(VAR_36, &VAR_50);

  if(VAR_50)
  {
   if (VAR_42 > VAR_7 )
   {
    FUNC_19("EID(SSID) is invalid");
    goto zlError;
   }
  }
  else
  {
    if ( VAR_42 == 0 || VAR_42 > VAR_7 )
    {
        FUNC_19("EID(SSID) is invalid");
        goto zlError;
    }

  }
 }
    FUNC_3(VAR_36, VAR_37, VAR_39->ssid, VAR_46, VAR_42+2);


    if ( (VAR_46 = FUNC_6(VAR_36, VAR_37, VAR_21)) != 0xffff )
    {
        VAR_42 = FUNC_22(VAR_36, VAR_37, VAR_46+1);
        if ( VAR_42 != 1 )
        {
            FUNC_20(VAR_2, "Abnormal DS Param Set IE");
            goto zlError;
        }
        VAR_43 = FUNC_22(VAR_36, VAR_37, VAR_46+2);

        if (FUNC_13(VAR_36, FUNC_1(VAR_36, VAR_43, 0)) == 0)
        {
            goto zlError2;
        }

        VAR_39->frequency = FUNC_1(VAR_36, VAR_43, 0);
        VAR_39->channel = VAR_43;


    }
    else
    {

        VAR_39->frequency = VAR_35->sta.currentFrequency;
        VAR_39->channel = FUNC_0(VAR_35->sta.currentFrequency, &VAR_44);
    }


    VAR_39->securityType = VAR_11;


    for( VAR_45=0; VAR_45<6; VAR_45++ )
    {
        VAR_39->macaddr[VAR_45] = VAR_38->sa[VAR_45];
    }


    for( VAR_45=0; VAR_45<6; VAR_45++ )
    {
        VAR_39->bssid[VAR_45] = VAR_38->bssid[VAR_45];
    }


    for( VAR_45=0; VAR_45<8; VAR_45++ )
    {
        VAR_39->timeStamp[VAR_45] = VAR_38->timeStamp[VAR_45];
    }


    VAR_39->beaconInterval[0] = VAR_38->beaconInterval[0];
    VAR_39->beaconInterval[1] = VAR_38->beaconInterval[1];


    VAR_39->capability[0] = VAR_38->capability[0];
    VAR_39->capability[1] = VAR_38->capability[1];


    VAR_46 = 36;
    VAR_39->frameBodysize = FUNC_17(VAR_36, VAR_37)-VAR_46;
    if (VAR_39->frameBodysize > (VAR_6-1))
    {
        VAR_39->frameBodysize = VAR_6-1;
    }
    VAR_49 = 0;
    do
    {
        VAR_48 = FUNC_22(VAR_36, VAR_37, VAR_46 + VAR_49+1) + 2;

        if ( (VAR_48 >= 2)
             && ((VAR_49 + VAR_48) <= VAR_39->frameBodysize) )
        {
            FUNC_3(VAR_36, VAR_37, VAR_39->frameBody+VAR_49, VAR_46+VAR_49, VAR_48);
            VAR_49+=(u16_t)VAR_48;
        }
        else
        {
            FUNC_20(VAR_3, "probersp frameBodysize abnormal");
            break;
        }
    }
    while(VAR_49 < VAR_39->frameBodysize);
    VAR_39->frameBodysize = VAR_49;


    if ( (VAR_46 = FUNC_6(VAR_36, VAR_37, VAR_29)) == 0xffff )
    {
        FUNC_19("EID(supported rates) not found");
        goto zlError;
    }

    VAR_42 = FUNC_22(VAR_36, VAR_37, VAR_46+1);
    if ( VAR_42 == 0 || VAR_42 > VAR_8)
    {
        FUNC_20(VAR_2, "Supported rates IE length abnormal");
        goto zlError;
    }
    FUNC_3(VAR_36, VAR_37, VAR_39->supportedRates, VAR_46, VAR_42+2);




    if ( (VAR_46 = FUNC_6(VAR_36, VAR_37, VAR_20)) != 0xffff )
    {
        VAR_42 = FUNC_22(VAR_36, VAR_37, VAR_46+1);
        if (VAR_42 > VAR_4)
        {
            VAR_42 = VAR_4;
        }
        FUNC_3(VAR_36, VAR_37, VAR_39->countryInfo, VAR_46, VAR_42+2);

        if (VAR_35->sta.b802_11D)
        {
            FUNC_12(VAR_36, (u8_t *)&VAR_39->countryInfo, 3);

            VAR_35->sta.b802_11D = 0;
        }
    }


    if ( (VAR_46 = FUNC_6(VAR_36, VAR_37, VAR_22)) != 0xffff )
    {
        VAR_39->erp = FUNC_22(VAR_36, VAR_37, VAR_46+2);
    }


    if ( (VAR_46 = FUNC_6(VAR_36, VAR_37, VAR_24)) != 0xffff )
    {
        VAR_42 = FUNC_22(VAR_36, VAR_37, VAR_46+1);
        if (VAR_42 > VAR_8)
        {
            FUNC_20(VAR_2, "Extended rates IE length abnormal");
            goto zlError;
        }
        FUNC_3(VAR_36, VAR_37, VAR_39->extSupportedRates, VAR_46, VAR_42+2);
    }
    else
    {
        VAR_39->extSupportedRates[0] = 0;
        VAR_39->extSupportedRates[1] = 0;
    }


    if ( (VAR_46 = FUNC_6(VAR_36, VAR_37, VAR_31)) != 0xffff )
    {
        VAR_42 = FUNC_22(VAR_36, VAR_37, VAR_46+1);
        if (VAR_42 > VAR_5)
        {
            VAR_42 = VAR_5;
        }
        FUNC_3(VAR_36, VAR_37, VAR_39->wpaIe, VAR_46, VAR_42+2);
        VAR_39->securityType = VAR_12;
    }
    else
    {
        VAR_39->wpaIe[1] = 0;
    }


    if ((VAR_46 = FUNC_9(VAR_36, VAR_37, 4, 0xff)) != 0xffff)
    {
        VAR_42 = FUNC_22(VAR_36, VAR_37, VAR_46+1);
        if (VAR_42 > VAR_9 )
        {
            VAR_42 = VAR_9;
        }
        FUNC_3(VAR_36, VAR_37, VAR_39->wscIe, VAR_46, VAR_42+2);
    }
    else
    {
        VAR_39->wscIe[1] = 0;
    }


    if ((VAR_46 = FUNC_8(VAR_36, VAR_37, VAR_30)) != 0xffff)
    {
        VAR_39->apCap |= VAR_13;
    }


    if ((VAR_46 = FUNC_10(VAR_36, VAR_37, VAR_30)) != 0xffff)
    {
        VAR_39->apCap |= VAR_34;
    }


    if ( (VAR_46 = FUNC_6(VAR_36, VAR_37, VAR_27)) != 0xffff )
    {
        VAR_42 = FUNC_22(VAR_36, VAR_37, VAR_46+1);
        if (VAR_42 > VAR_5)
        {
            VAR_42 = VAR_5;
        }
        FUNC_3(VAR_36, VAR_37, VAR_39->rsnIe, VAR_46, VAR_42+2);
        VAR_39->securityType = VAR_12;
    }
    else
    {
        VAR_39->rsnIe[1] = 0;
    }
    {
        if ((VAR_46 = FUNC_9(VAR_36, VAR_37, 2, 1)) != 0xffff)
        {
            VAR_47 = FUNC_22(VAR_36, VAR_37, VAR_46+8) & 0x80;
            VAR_39->wmeSupport = 1 | VAR_47;
        }
        else if ((VAR_46 = FUNC_9(VAR_36, VAR_37, 2, 0)) != 0xffff)
        {
            VAR_47 = FUNC_22(VAR_36, VAR_37, VAR_46+8) & 0x80;
            VAR_39->wmeSupport = 1 | VAR_47;
        }
        else
        {
            VAR_39->wmeSupport = 0;
        }
    }

    if ((VAR_46 = FUNC_6(VAR_36, VAR_37, VAR_25)) != 0xffff)
    {

        VAR_39->EnableHT = 1;
        if (FUNC_22(VAR_36, VAR_37, VAR_46+1) & 0x02)
        {
            VAR_39->enableHT40 = 1;
        }
        else
        {
            VAR_39->enableHT40 = 0;
        }

        if (FUNC_22(VAR_36, VAR_37, VAR_46+1) & 0x40)
        {
            VAR_39->SG40 = 1;
        }
        else
        {
            VAR_39->SG40 = 0;
        }
    }
    else if ((VAR_46 = FUNC_6(VAR_36, VAR_37, VAR_32)) != 0xffff)
    {

        VAR_39->EnableHT = 1;
        VAR_39->apCap |= VAR_0;
        if (FUNC_22(VAR_36, VAR_37, VAR_46+2) & 0x02)
        {
            VAR_39->enableHT40 = 1;
        }
        else
        {
            VAR_39->enableHT40 = 0;
        }

        if (FUNC_22(VAR_36, VAR_37, VAR_46+2) & 0x40)
        {
            VAR_39->SG40 = 1;
        }
        else
        {
            VAR_39->SG40 = 0;
        }
    }
    else
    {
        VAR_39->EnableHT = 0;
    }

    if ((VAR_46 = FUNC_6(VAR_36, VAR_37, VAR_23)) != 0xffff)
    {

        VAR_39->extChOffset = FUNC_22(VAR_36, VAR_37, VAR_46+2) & 0x03;
    }
    else if ((VAR_46 = FUNC_6(VAR_36, VAR_37, VAR_33)) != 0xffff)
    {

        VAR_39->extChOffset = FUNC_22(VAR_36, VAR_37, VAR_46+3) & 0x03;
    }
    else
    {
        VAR_39->extChOffset = 0;
    }

    if ( (VAR_39->enableHT40 == 1)
         && ((VAR_39->extChOffset != 1) && (VAR_39->extChOffset != 3)) )
    {
        VAR_39->enableHT40 = 0;
    }

    if (VAR_39->enableHT40 == 1)
    {
        if (FUNC_13(VAR_36, VAR_39->frequency+((VAR_39->extChOffset==1)?20:-20)) == 0)
        {

            VAR_39->EnableHT = 0;
            VAR_39->enableHT40 = 0;
            VAR_39->extChOffset = 0;
        }
    }


    if ( ((VAR_46 = FUNC_6(VAR_36, VAR_37, VAR_23)) != 0xffff)&&
        ((VAR_46 = FUNC_4(VAR_36, VAR_37)) == 0xffff))

    {
        VAR_39->athOwlAp = 1;
    }
    else
    {
        VAR_39->athOwlAp = 0;
    }


    if ( (VAR_39->EnableHT == 1)
         && ((VAR_46 = FUNC_5(VAR_36, VAR_37)) != 0xffff) )
    {
        VAR_39->broadcomHTAp = 1;
    }
    else
    {
        VAR_39->broadcomHTAp = 0;
    }


    if ((VAR_46 = FUNC_7(VAR_36, VAR_37)) != 0xffff)
    {
        VAR_39->marvelAp = 1;
    }
    else
    {
        VAR_39->marvelAp = 0;
    }


    if ( (VAR_46 = FUNC_6(VAR_36, VAR_37, VAR_26)) != 0xffff )
    {
        VAR_39->atimWindow = FUNC_23(VAR_36, VAR_37,VAR_46+2);
    }


    if (VAR_39->frequency > 3000) {
        if (VAR_35->supportMode & VAR_18) {
        } else {
            if (VAR_35->supportMode & VAR_17) {


                VAR_39->EnableHT = 0;
                VAR_39->enableHT40 = 0;
                VAR_39->apCap &= (~VAR_0);
                VAR_39->extChOffset = 0;
                VAR_39->frameBodysize = FUNC_15(VAR_36, VAR_39->frameBody,
                            VAR_39->frameBodysize, VAR_25);
                VAR_39->frameBodysize = FUNC_15(VAR_36, VAR_39->frameBody,
                            VAR_39->frameBodysize, VAR_32);
                VAR_39->frameBodysize = FUNC_15(VAR_36, VAR_39->frameBody,
                            VAR_39->frameBodysize, VAR_23);
                VAR_39->frameBodysize = FUNC_15(VAR_36, VAR_39->frameBody,
                            VAR_39->frameBodysize, VAR_33);
            } else {

                goto zlError2;
            }
        }
    } else {
        if (VAR_35->supportMode & VAR_16) {
        } else {

            VAR_39->EnableHT = 0;
            VAR_39->enableHT40 = 0;
            VAR_39->apCap &= (~VAR_0);
            VAR_39->extChOffset = 0;
            VAR_39->frameBodysize = FUNC_15(VAR_36, VAR_39->frameBody,
                        VAR_39->frameBodysize, VAR_25);
            VAR_39->frameBodysize = FUNC_15(VAR_36, VAR_39->frameBody,
                        VAR_39->frameBodysize, VAR_32);
            VAR_39->frameBodysize = FUNC_15(VAR_36, VAR_39->frameBody,
                        VAR_39->frameBodysize, VAR_23);
            VAR_39->frameBodysize = FUNC_15(VAR_36, VAR_39->frameBody,
                        VAR_39->frameBodysize, VAR_33);

            if (VAR_35->supportMode & VAR_15) {
            } else {
                if (VAR_35->supportMode & VAR_14) {


                    if ( FUNC_14(VAR_36, VAR_39->frequency, VAR_39->supportedRates)
                         || FUNC_14(VAR_36, VAR_39->frequency, VAR_39->extSupportedRates) ) {
                        goto zlError2;
                    } else {
                        FUNC_11(VAR_36, VAR_39->supportedRates,
                                          VAR_39->extSupportedRates);
                        VAR_39->erp = 0;

                        VAR_39->frameBodysize = FUNC_15(VAR_36,
                            VAR_39->frameBody, VAR_39->frameBodysize,
                            VAR_22);
                        VAR_39->frameBodysize = FUNC_15(VAR_36,
                            VAR_39->frameBody, VAR_39->frameBodysize,
                            VAR_24);

                        VAR_39->frameBodysize = FUNC_16(VAR_36,
                            VAR_39->frameBody, VAR_39->frameBodysize,
                            VAR_39->supportedRates);
                    }
                } else {

                    goto zlError2;
                }
            }
        }
    }

    VAR_39->flag |= VAR_1;

zlUpdateRssi:

    VAR_39->tick = VAR_35->tick;


    if ( (VAR_46 = FUNC_6(VAR_36, VAR_37, VAR_22)) != 0xffff )
    {
        VAR_39->erp = FUNC_22(VAR_36, VAR_37, VAR_46+2);
    }

    if( (s8_t)VAR_39->signalStrength < (s8_t)VAR_40->Tail.Data.SignalStrength1 )
    {

        VAR_39->signalStrength = (u8_t)VAR_40->Tail.Data.SignalStrength1;

        VAR_39->signalQuality = (u8_t)(VAR_40->Tail.Data.SignalStrength1 * 2);


        VAR_39->sortValue = FUNC_2(VAR_36,
                                               (VAR_39->supportedRates[6] + VAR_39->extSupportedRates[0]),
                                               VAR_39->EnableHT,
                                               VAR_39->enableHT40,
                                               VAR_39->signalStrength);
    }

    return 0;

zlError:

    return 1;

zlError2:

    return 2;
}
