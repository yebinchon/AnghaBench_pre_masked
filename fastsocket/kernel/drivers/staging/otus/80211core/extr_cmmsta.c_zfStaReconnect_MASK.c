
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
struct TYPE_5__ {scalar_t__ ssidLen; scalar_t__* ssid; scalar_t__ bChannelScan; } ;
struct TYPE_4__ {scalar_t__ ssidLen; } ;
struct TYPE_6__ {scalar_t__ wlanMode; TYPE_2__ sta; TYPE_1__ ws; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

void FUNC_10(zdev_t* VAR_3)
{
    FUNC_8(VAR_3);
    FUNC_6();

    if ( VAR_2->wlanMode != VAR_1 &&
         VAR_2->wlanMode != VAR_0 )
    {
        return;
    }

    if ( (FUNC_2(VAR_3))||(FUNC_3(VAR_3)) )
    {
        return;
    }

    if ( VAR_2->sta.bChannelScan )
    {
        return;
    }


    if ( (VAR_2->wlanMode == VAR_1) && (VAR_2->ws.ssidLen == 0))
    {
        FUNC_5("zfStaReconnect: NOT Support!! Set SSID to any BSS");

        FUNC_7(VAR_3);
        VAR_2->sta.ssid[0] = 0;
        VAR_2->sta.ssidLen = 0;
        FUNC_9(VAR_3);
    }


    FUNC_0(VAR_3);
    FUNC_4(VAR_3);
    FUNC_1(VAR_3);
}
