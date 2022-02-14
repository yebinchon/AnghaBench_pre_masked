
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int (* zfpIBSSIteratePeerStationCb ) (int *,TYPE_2__*,void*,int ) ;
typedef int zdev_t ;
typedef scalar_t__ u8_t ;
struct TYPE_5__ {scalar_t__ oppositeCount; TYPE_2__* oppositeInfo; } ;
struct TYPE_7__ {TYPE_1__ sta; } ;
struct TYPE_6__ {scalar_t__ valid; } ;


 scalar_t__ VAR_0 ;
 TYPE_4__* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

u8_t FUNC_4(zdev_t* VAR_2, u8_t VAR_3, zfpIBSSIteratePeerStationCb VAR_4, void *VAR_5)
{
    u8_t VAR_6;
    u8_t VAR_7;
    u8_t VAR_8 = 0;

    FUNC_2(VAR_2);

    FUNC_0();

    FUNC_1(VAR_2);

    VAR_6 = VAR_1->sta.oppositeCount;
    if ( VAR_6 > VAR_3 )
    {
        VAR_6 = VAR_3;
    }

    for(VAR_7=0; VAR_7 < VAR_0; VAR_7++)
    {
        if ( VAR_6 == 0 )
        {
            break;
        }

        if ( VAR_1->sta.oppositeInfo[VAR_7].valid == 0 )
        {
            continue;
        }

        VAR_4(VAR_2, &VAR_1->sta.oppositeInfo[VAR_7], VAR_5, VAR_8++);
        VAR_6--;

    }

    FUNC_3(VAR_2);

    return VAR_8;
}
