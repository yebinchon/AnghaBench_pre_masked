
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef size_t u16_t ;
struct TYPE_5__ {size_t allowChannelCnt; TYPE_1__* allowChannel; } ;
struct TYPE_6__ {TYPE_2__ regulationTable; } ;
struct TYPE_4__ {size_t channel; } ;


 TYPE_3__* VAR_0 ;
 int FUNC_0 (int *) ;

u16_t FUNC_1(zdev_t* VAR_1, u16_t VAR_2)
{
    u16_t VAR_3, VAR_4, VAR_5;

    FUNC_0(VAR_1);

    for (VAR_3 = 0; VAR_3 < VAR_0->regulationTable.allowChannelCnt; VAR_3++)
    {
        if (VAR_0->regulationTable.allowChannel[VAR_3].channel == VAR_2)
            break;
    }

    if ( VAR_3 == VAR_0->regulationTable.allowChannelCnt)
    {
        for (VAR_4 = 0; VAR_4 < VAR_0->regulationTable.allowChannelCnt; VAR_4++)
        {
            if (VAR_0->regulationTable.allowChannel[VAR_4].channel > VAR_2)
                break;
        }




        VAR_5 = VAR_4;

        if (VAR_5 < VAR_0->regulationTable.allowChannelCnt)
        {
            for (VAR_4 = VAR_0->regulationTable.allowChannelCnt; VAR_4 > VAR_5; VAR_4--)
                VAR_0->regulationTable.allowChannel[VAR_4] = VAR_0->regulationTable.allowChannel[VAR_4 - 1];
        }
        VAR_0->regulationTable.allowChannel[VAR_5].channel = VAR_2;

        VAR_0->regulationTable.allowChannelCnt++;
    }

    return 0;
}
