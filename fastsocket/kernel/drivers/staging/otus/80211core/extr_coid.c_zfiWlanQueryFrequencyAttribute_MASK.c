
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef size_t u8_t ;
typedef int u32_t ;
typedef scalar_t__ u16_t ;
struct TYPE_5__ {size_t allowChannelCnt; TYPE_1__* allowChannel; } ;
struct TYPE_6__ {TYPE_2__ regulationTable; } ;
struct TYPE_4__ {scalar_t__ channel; int channelFlags; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int *) ;

u32_t FUNC_1(zdev_t* VAR_1, u32_t VAR_2)
{
    u8_t VAR_3;
    u16_t VAR_4 = (u16_t) (VAR_2/1000);
    u32_t VAR_5 = 0;

    FUNC_0(VAR_1);

    for (VAR_3 = 0; VAR_3 < VAR_0->regulationTable.allowChannelCnt; VAR_3++)
    {
        if ( VAR_0->regulationTable.allowChannel[VAR_3].channel == VAR_4 )
        {
            VAR_5 = VAR_0->regulationTable.allowChannel[VAR_3].channelFlags;
        }
    }

    return VAR_5;
}
