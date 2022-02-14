
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
struct TYPE_4__ {int privFlags; int channel; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

u16_t FUNC_4(zdev_t* VAR_2, u16_t VAR_3)
{
    u16_t VAR_4 = 2412;
    u16_t VAR_5;
    FUNC_2(VAR_2);

    FUNC_0();

    FUNC_1(VAR_2);

    for (VAR_5 = 0; VAR_5 < VAR_1->regulationTable.allowChannelCnt; VAR_5++)
    {
        if ((VAR_1->regulationTable.allowChannel[VAR_5].privFlags & VAR_0) != 0)
        {
            if (VAR_3)
            {
                if (VAR_1->regulationTable.allowChannel[VAR_5].channel > 3000)
                {
                    VAR_4 = VAR_1->regulationTable.allowChannel[VAR_5].channel;
                    break;
                }
            }
            else
            {
                if (VAR_1->regulationTable.allowChannel[VAR_5].channel < 3000)
                {
                    VAR_4 = VAR_1->regulationTable.allowChannel[VAR_5].channel;
                    break;
                }
            }
        }
    }

    FUNC_3(VAR_2);

    return VAR_4;
}
