
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef scalar_t__ u8_t ;
typedef scalar_t__ u32_t ;
typedef int u16_t ;
typedef int s8_t ;
struct TYPE_5__ {scalar_t__ oppositeCount; TYPE_1__* oppositeInfo; } ;
struct TYPE_6__ {TYPE_2__ sta; } ;
struct TYPE_4__ {scalar_t__ valid; int macAddr; } ;


 scalar_t__ VAR_0 ;
 TYPE_3__* VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__*,int ,int) ;
 int FUNC_1 (int *) ;

s8_t FUNC_2(zdev_t* VAR_2, u16_t *VAR_3, u8_t *VAR_4)
{
    u32_t VAR_5;
    u32_t VAR_6;

    FUNC_1(VAR_2);

    VAR_5 = VAR_1->sta.oppositeCount;

    for(VAR_6=0; VAR_6 < VAR_0; VAR_6++)
    {
        if ( VAR_5 == 0 )
        {
            break;
        }

        if ( VAR_1->sta.oppositeInfo[VAR_6].valid == 0 )
        {
            continue;
        }

        VAR_5--;
        if ( FUNC_0((u8_t*) VAR_3, VAR_1->sta.oppositeInfo[VAR_6].macAddr, 6) )
        {
            *VAR_4 = (u8_t)VAR_6;

            return 0;
        }
    }

    *VAR_4 = 0;
    return 1;
}
