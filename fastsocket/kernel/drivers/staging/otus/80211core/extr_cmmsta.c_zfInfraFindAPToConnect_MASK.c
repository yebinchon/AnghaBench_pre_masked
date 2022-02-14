
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u32_t ;
typedef scalar_t__ u16_t ;
struct zsBssInfo {int* capability; scalar_t__* ssid; scalar_t__ securityType; scalar_t__* bssid; int frequency; int EnableHT; int apCap; int enableHT40; scalar_t__* extSupportedRates; struct zsBssInfo* next; int wmeSupport; } ;
struct TYPE_4__ {scalar_t__ bssCount; struct zsBssInfo* head; } ;
struct TYPE_5__ {scalar_t__ ssidLen; scalar_t__ wepStatus; int dropUnencryptedPkts; scalar_t__ authMode; scalar_t__ bDesiredBssid; scalar_t__* desiredBssid; int apWmeCapability; int ssid; TYPE_1__ bssList; } ;
struct TYPE_6__ {int connectMode; TYPE_2__ sta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ VAR_20 ;
 TYPE_3__* VAR_21 ;
 int FUNC_0 (int *,struct zsBssInfo*) ;
 scalar_t__ FUNC_1 (scalar_t__*,int ,scalar_t__) ;
 scalar_t__ FUNC_2 (int *,scalar_t__*) ;
 int FUNC_3 (void*,void*,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static struct zsBssInfo* FUNC_10(zdev_t* VAR_22,
        struct zsBssInfo* VAR_23)
{
    struct zsBssInfo* VAR_24;
    struct zsBssInfo* VAR_25=((void*)0);
    u16_t VAR_26;
    u16_t VAR_27, VAR_28;
    u32_t VAR_29;
    u32_t VAR_30;

    FUNC_8(VAR_22);
    FUNC_6();

    FUNC_7(VAR_22);

    VAR_24 = VAR_21->sta.bssList.head;

    for(VAR_26=0; VAR_26<VAR_21->sta.bssList.bssCount; VAR_26++)
    {
        if ( VAR_24->capability[0] & VAR_15 )
        {
            VAR_28 = VAR_17;
        }
        else
        {
            VAR_28 = VAR_16;
        }

        if ( ((FUNC_1(&(VAR_24->ssid[2]), VAR_21->sta.ssid,
                               VAR_21->sta.ssidLen))&&
              (VAR_21->sta.ssidLen == VAR_24->ssid[1]))||
             ((VAR_21->sta.ssidLen == 0)&&

              (VAR_21->sta.wepStatus == VAR_28 )&&
              (VAR_24->securityType != VAR_20) ))
        {
            if ( VAR_21->sta.ssidLen == 0 )
            {
                FUNC_4("ANY BSS found");
            }

            if ( ((VAR_21->sta.wepStatus == VAR_16 && VAR_28 == VAR_17) ||
                 (VAR_21->sta.wepStatus == VAR_17 &&
                 (VAR_28 == VAR_16 && VAR_21->sta.dropUnencryptedPkts == 1))) &&
                 (VAR_21->sta.authMode >= VAR_9 && VAR_21->sta.authMode <= VAR_8) )
            {
                FUNC_4("Privacy policy is inconsistent");
                VAR_24 = VAR_24->next;
                continue;
            }


            if ( !FUNC_0(VAR_22, VAR_24) )
            {
                VAR_24 = VAR_24->next;
                continue;
            }


            if (VAR_21->sta.bDesiredBssid == VAR_7)
            {
                for (VAR_29=0; VAR_29<6; VAR_29++)
                {
                    if (VAR_21->sta.desiredBssid[VAR_29] != VAR_24->bssid[VAR_29])
                    {
                        FUNC_5(VAR_19, "desired bssid not matched 1");
                        break;
                    }
                }

                if (VAR_29 != 6)
                {
                    FUNC_5(VAR_19, "desired bssid not matched 2");
                    VAR_24 = VAR_24->next;
                    continue;
                }
            }


            if (VAR_24->frequency > 3000) {
                if ( (VAR_24->EnableHT == 1)
                    || (VAR_24->apCap & VAR_10) )
                {
                    VAR_30 = VAR_1;
                    if (VAR_24->enableHT40 == 1) {
                        VAR_30 |= VAR_6;
                    }
                } else {
                    VAR_30 = VAR_0;
                }
            } else {
                if ( (VAR_24->EnableHT == 1)
                    || (VAR_24->apCap & VAR_10) )
                {
                    VAR_30 = VAR_4;
                    if(VAR_24->enableHT40 == 1) {
                        VAR_30 |= VAR_6;
                    }
                } else {
                    if (VAR_24->extSupportedRates[1] == 0) {
                        VAR_30 = VAR_2;
                    } else {
                        VAR_30 = VAR_3;
                    }
                }
            }

            if ( ((VAR_30 == VAR_2) && (VAR_21->connectMode & VAR_11))
                || ((VAR_30 == VAR_3) && (VAR_21->connectMode & VAR_12))
                || ((VAR_30 == VAR_0) && (VAR_21->connectMode & VAR_13))
                || ((VAR_30 & VAR_5) && (VAR_21->connectMode & VAR_14)) )
            {
                VAR_24 = VAR_24->next;
                continue;
            }


            if ((VAR_27 = FUNC_2(VAR_22, VAR_24->bssid)) == VAR_7)
            {
                FUNC_5(VAR_18, "Candidate AP in blocking List, skip if there's stilla choice!");
                VAR_25 = VAR_24;
                VAR_24 = VAR_24->next;
                continue;
            }

            if ( VAR_24->capability[0] & VAR_11 )
            {
                    VAR_25 = VAR_24;
                    VAR_21->sta.apWmeCapability = VAR_24->wmeSupport;


                    goto done;
            }
        }

        VAR_24 = VAR_24->next;
    }

done:
    if (VAR_25 != ((void*)0))
    {
        FUNC_3((void*)VAR_23, (void*)VAR_25, sizeof(struct zsBssInfo));
        VAR_25 = VAR_23;
    }

    FUNC_9(VAR_22);

    return VAR_25;
}
