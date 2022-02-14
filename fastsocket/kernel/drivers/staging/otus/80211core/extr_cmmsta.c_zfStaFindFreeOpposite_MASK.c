
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
typedef int s8_t ;
struct TYPE_5__ {int oppositeCount; TYPE_1__* oppositeInfo; } ;
struct TYPE_6__ {TYPE_2__ sta; } ;
struct TYPE_4__ {scalar_t__ valid; int aliveCounter; int macAddr; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 scalar_t__ FUNC_0 (int *,int ,int) ;
 int FUNC_1 (int *) ;

s8_t FUNC_2(zdev_t* VAR_3, u16_t *VAR_4, int *VAR_5)
{
    int VAR_6;
    int VAR_7;

    FUNC_1(VAR_3);

    VAR_6 = VAR_2->sta.oppositeCount;

    for(VAR_7=0; VAR_7 < VAR_1; VAR_7++)
    {
        if ( VAR_6 == 0 )
        {
            break;
        }

        if ( VAR_2->sta.oppositeInfo[VAR_7].valid == 0 )
        {
            continue;
        }

        VAR_6--;
        if ( FUNC_0((u8_t*) VAR_4, VAR_2->sta.oppositeInfo[VAR_7].macAddr, 6) )
        {

            VAR_2->sta.oppositeInfo[VAR_7].aliveCounter = VAR_0;


            return 1;
        }
    }


    if ( VAR_2->sta.oppositeCount == VAR_1 )
    {
        return -1;
    }


    for(VAR_7=0; VAR_7 < VAR_1; VAR_7++)
    {
        if ( VAR_2->sta.oppositeInfo[VAR_7].valid == 0 )
        {
            break;
        }
    }

    *VAR_5 = VAR_7;
    return 0;
}
