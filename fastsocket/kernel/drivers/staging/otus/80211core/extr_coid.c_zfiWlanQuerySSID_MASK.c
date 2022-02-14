
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
typedef int u16_t ;
struct TYPE_5__ {int ssidLen; int ssid; } ;
struct TYPE_4__ {int * ssidLen; int * ssid; } ;
struct TYPE_6__ {scalar_t__ wlanMode; TYPE_2__ sta; TYPE_1__ ap; } ;


 scalar_t__ VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(zdev_t* VAR_2, u8_t* VAR_3, u8_t* VAR_4)
{
    u16_t VAR_5 = 0;
    FUNC_2(VAR_2);

    if (VAR_1->wlanMode == VAR_0)
    {
        VAR_5 = FUNC_1(VAR_2);

        if (VAR_5 == 0xffff)
        {
            *VAR_4 = VAR_1->ap.ssidLen[0];
            FUNC_0(VAR_3, VAR_1->ap.ssid[0], VAR_1->ap.ssidLen[0]);
        }
        else
        {
            *VAR_4 = VAR_1->ap.ssidLen[VAR_5 + 1];
            FUNC_0(VAR_3, VAR_1->ap.ssid[VAR_5 + 1], VAR_1->ap.ssidLen[VAR_5 + 1]);
        }
    }
    else
    {
        *VAR_4 = VAR_1->sta.ssidLen;
        FUNC_0(VAR_3, VAR_1->sta.ssid, VAR_1->sta.ssidLen);
    }
}
