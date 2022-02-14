
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef scalar_t__ u8_t ;
typedef int u16_t ;
struct TYPE_5__ {int wpaSupport; scalar_t__ wpaLen; int wpaIe; } ;
struct TYPE_4__ {int* wpaSupport; scalar_t__* wpaLen; int * wpaIe; } ;
struct TYPE_6__ {scalar_t__ wlanMode; TYPE_2__ sta; TYPE_1__ ap; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (int ,scalar_t__*,scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;

void FUNC_4(zdev_t* VAR_3, u8_t* VAR_4, u8_t VAR_5)
{
    u16_t VAR_6 = 0;
    FUNC_3(VAR_3);

    if (VAR_2->wlanMode == VAR_1)
    {
        VAR_6 = FUNC_1(VAR_3);

        if (VAR_6 == 0xffff)
            VAR_6 = 0;
        else
            VAR_6++;

        FUNC_2(VAR_5 < VAR_0);
        if (VAR_5 < VAR_0)
        {
            VAR_2->ap.wpaLen[VAR_6] = VAR_5;
            FUNC_0(VAR_2->ap.wpaIe[VAR_6], VAR_4, VAR_2->ap.wpaLen[VAR_6]);
        }

    }
    else
    {
        VAR_2->sta.wpaLen = VAR_5;
        FUNC_0(VAR_2->sta.wpaIe, VAR_4, VAR_2->sta.wpaLen);
    }

    if (VAR_2->wlanMode == VAR_1)
    {
        VAR_2->ap.wpaSupport[VAR_6] = 1;
    }
    else
    {
        VAR_2->sta.wpaSupport = 1;
    }

}
