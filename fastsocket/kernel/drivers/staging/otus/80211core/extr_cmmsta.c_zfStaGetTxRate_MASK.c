
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
typedef int u32_t ;
typedef int u16_t ;
struct TYPE_6__ {size_t oppositeCount; TYPE_1__* oppositeInfo; } ;
struct TYPE_8__ {scalar_t__ wlanMode; TYPE_2__ sta; } ;
struct TYPE_7__ {size_t* operationRateSet; } ;
struct TYPE_5__ {TYPE_3__ rcCell; int macAddr; } ;


 int FUNC_0 (int *,size_t*) ;
 scalar_t__ VAR_0 ;
 TYPE_4__* VAR_1 ;
 int * VAR_2 ;
 scalar_t__ FUNC_1 (size_t*,int ,int) ;
 scalar_t__ FUNC_2 (int *,TYPE_3__*,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(zdev_t* VAR_3, u16_t* VAR_4, u32_t* VAR_5,
        u16_t* VAR_6)
{
    u8_t VAR_7[6], VAR_8;
    u8_t VAR_9;
    FUNC_5(VAR_3);
    FUNC_3();

    FUNC_0(VAR_4, VAR_7);
    *VAR_5 = 0;

    if ( VAR_1->wlanMode == VAR_0 )
    {
        FUNC_4(VAR_3);
        VAR_9 = (u8_t)FUNC_2(VAR_3, &VAR_1->sta.oppositeInfo[0].rcCell, VAR_6);



        *VAR_5 = VAR_2[VAR_9];
        FUNC_6(VAR_3);
    }
    else
    {
        FUNC_4(VAR_3);
        for(VAR_8=0; VAR_8<VAR_1->sta.oppositeCount; VAR_8++)
        {
            if ( VAR_7[0] && 0x01 == 1 )

            {

                VAR_9 = VAR_1->sta.oppositeInfo[VAR_8].rcCell.operationRateSet[0];
                *VAR_5 = VAR_2[VAR_9];
                break;
            }
            else if ( FUNC_1(VAR_7, VAR_1->sta.oppositeInfo[VAR_8].macAddr, 6) )
            {
                VAR_9 = (u8_t)FUNC_2(VAR_3, &VAR_1->sta.oppositeInfo[VAR_8].rcCell, VAR_6);
                *VAR_5 = VAR_2[VAR_9];
                break;
            }
        }
        FUNC_6(VAR_3);
    }

    return;
}
