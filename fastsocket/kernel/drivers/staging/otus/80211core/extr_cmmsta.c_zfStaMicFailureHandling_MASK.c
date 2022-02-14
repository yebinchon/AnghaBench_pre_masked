
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int zbuf_t ;
typedef int u8_t ;
struct TYPE_3__ {scalar_t__ wpaState; int cmMicFailureCount; int bssid; int ssidLen; int ssid; int cmDisallowSsid; int cmDisallowSsidLength; } ;
struct TYPE_4__ {TYPE_1__ sta; int (* zfcbMicFailureNotify ) (int *,int ,int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *,int ,int ) ;
 TYPE_2__* VAR_10 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,scalar_t__) ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *,int ) ;

void FUNC_11(zdev_t* VAR_11, zbuf_t* VAR_12)
{
    u8_t VAR_13;
    u8_t VAR_14 = 1;

    FUNC_8(VAR_11);

    FUNC_6();

    if ( VAR_10->sta.wpaState < VAR_4 )
    {
        return;
    }

    FUNC_7(VAR_11);

    VAR_10->sta.cmMicFailureCount++;

    if ( VAR_10->sta.cmMicFailureCount == 1 )
    {
        FUNC_5("get the first MIC failure");




        FUNC_4(VAR_11, VAR_1, VAR_7 - VAR_8);
    }
    else if ( VAR_10->sta.cmMicFailureCount == 2 )
    {
        FUNC_5("get the second MIC failure");

        VAR_10->sta.cmDisallowSsidLength = VAR_10->sta.ssidLen;
        FUNC_2(VAR_10->sta.cmDisallowSsid, VAR_10->sta.ssid, VAR_10->sta.ssidLen);

        FUNC_3(VAR_11, VAR_1);




        FUNC_4(VAR_11, VAR_0, VAR_5 - VAR_6);
    }
    else
    {
        VAR_14 = 0;
    }

    FUNC_9(VAR_11);

    if (VAR_14 == 1)
    {
        VAR_13 = FUNC_10(VAR_11, VAR_12, VAR_9);
        if ( VAR_13 & 0x01 )
        {
            if (VAR_10->zfcbMicFailureNotify != ((void*)0))
            {
                VAR_10->zfcbMicFailureNotify(VAR_11, VAR_10->sta.bssid, VAR_2);
            }
        }
        else
        {
            if (VAR_10->zfcbMicFailureNotify != ((void*)0))
            {
                VAR_10->zfcbMicFailureNotify(VAR_11, VAR_10->sta.bssid, VAR_3);
            }
        }
    }
}
