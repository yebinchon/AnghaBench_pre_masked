
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u16_t ;
struct TYPE_5__ {int allowChannelCnt; TYPE_1__* allowChannel; } ;
struct TYPE_6__ {TYPE_2__ regulationTable; } ;
struct TYPE_4__ {int channel; int channelFlags; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (int *) ;

u16_t FUNC_1(zdev_t* VAR_3, u16_t VAR_4)
{
    u16_t VAR_5, VAR_6 = 0;
    u16_t VAR_7[][2] = {{5150, 5240}, {5260, 5350}, {5450, 5700}, {5725, 5825}};

    FUNC_0(VAR_3);

    for (VAR_5 = 0; VAR_5 < 4; VAR_5++)
    {
        if ((VAR_4 >= VAR_7[VAR_5][0]) && (VAR_4 <= VAR_7[VAR_5][1]))
            VAR_6 = VAR_5 + 1;
    }

    if (VAR_6 == 0)
    {

        return 0;
    }
    else
    {
        VAR_6--;
    }

    for (VAR_5 = 0; VAR_5 < VAR_2->regulationTable.allowChannelCnt; VAR_5++)
    {
        if ((VAR_2->regulationTable.allowChannel[VAR_5].channel >= VAR_7[VAR_6][0]) &&
            (VAR_2->regulationTable.allowChannel[VAR_5].channel <= VAR_7[VAR_6][1]))
        {

            if ((VAR_2->regulationTable.allowChannel[VAR_5].channelFlags &
                    VAR_1) == 0)
            {
                VAR_2->regulationTable.allowChannel[VAR_5].channelFlags |=
                        (VAR_1 | VAR_0);
            }
        }
    }

    return 0;
}
