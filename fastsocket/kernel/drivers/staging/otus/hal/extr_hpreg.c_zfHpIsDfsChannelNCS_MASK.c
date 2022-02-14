
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef size_t u8_t ;
typedef size_t u16_t ;
struct TYPE_5__ {size_t allowChannelCnt; TYPE_1__* allowChannel; } ;
struct TYPE_6__ {TYPE_2__ regulationTable; } ;
struct TYPE_4__ {size_t channel; size_t privFlags; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (int *) ;

u16_t FUNC_1(zdev_t* VAR_3, u16_t VAR_4)
{
    u8_t VAR_5 = VAR_0;
    u16_t VAR_6;
    FUNC_0(VAR_3);

    for (VAR_6 = 0; VAR_6 < VAR_2->regulationTable.allowChannelCnt; VAR_6++)
    {

        if (VAR_2->regulationTable.allowChannel[VAR_6].channel == VAR_4)
        {
            VAR_5 = VAR_2->regulationTable.allowChannel[VAR_6].privFlags;
            break;
        }
    }

    return (VAR_5 & (VAR_0|VAR_1));
}
