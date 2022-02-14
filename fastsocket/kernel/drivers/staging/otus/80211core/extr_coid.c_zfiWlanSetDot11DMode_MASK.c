
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int zdev_t ;
typedef size_t u8_t ;
struct TYPE_7__ {size_t allowChannelCnt; TYPE_1__* allowChannel; int regionCode; } ;
struct TYPE_6__ {size_t b802_11D; } ;
struct TYPE_8__ {TYPE_3__ regulationTable; TYPE_2__ sta; } ;
struct TYPE_5__ {int channelFlags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 int FUNC_0 (int *) ;

u8_t FUNC_1(zdev_t* VAR_3, u8_t VAR_4)
{
    u8_t VAR_5;

    FUNC_0(VAR_3);

    VAR_2->sta.b802_11D = VAR_4;
    if (VAR_4)
    {
        VAR_2->regulationTable.regionCode = VAR_0;
        for (VAR_5 = 0; VAR_5 < VAR_2->regulationTable.allowChannelCnt; VAR_5++)
            VAR_2->regulationTable.allowChannel[VAR_5].channelFlags |= VAR_1;
    }
    else
    {
        for (VAR_5 = 0; VAR_5 < VAR_2->regulationTable.allowChannelCnt; VAR_5++)
            VAR_2->regulationTable.allowChannel[VAR_5].channelFlags &= ~VAR_1;
    }

    return 0;
}
