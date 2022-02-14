
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef scalar_t__ u8_t ;
typedef int u16_t ;
struct TYPE_5__ {TYPE_1__* blockingApList; } ;
struct TYPE_6__ {TYPE_2__ sta; } ;
struct TYPE_4__ {scalar_t__* addr; scalar_t__ weight; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(zdev_t* VAR_2, u8_t* VAR_3, u8_t VAR_4)
{
    u16_t VAR_5, VAR_6;
    FUNC_2(VAR_2);
    FUNC_0();

    if (VAR_4 > 0)
    {
        FUNC_1(VAR_2);

        for (VAR_5=0; VAR_5<VAR_0; VAR_5++)
        {
            for (VAR_6=0; VAR_6<6; VAR_6++)
            {
                if(VAR_1->sta.blockingApList[VAR_5].addr[VAR_6]!= VAR_3[VAR_6])
                {
                    break;
                }
            }

            if(VAR_6==6)
            {
                break;
            }
        }

        if (VAR_5 == VAR_0)
        {
            for (VAR_5=0; VAR_5<VAR_0; VAR_5++)
            {
                if (VAR_1->sta.blockingApList[VAR_5].weight == 0)
                {
                    break;
                }
            }
        }


        if (VAR_5 == VAR_0)
        {
            VAR_5 = VAR_3[5] & (VAR_0-1);
        }


        for (VAR_6=0; VAR_6<6; VAR_6++)
        {
            VAR_1->sta.blockingApList[VAR_5].addr[VAR_6] = VAR_3[VAR_6];
        }

        VAR_1->sta.blockingApList[VAR_5].weight = VAR_4;
        FUNC_3(VAR_2);
    }

    return;
}
