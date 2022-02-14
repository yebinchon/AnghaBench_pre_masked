
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef scalar_t__ u8_t ;
typedef size_t u16_t ;
struct TYPE_5__ {TYPE_1__* blockingApList; } ;
struct TYPE_6__ {TYPE_2__ sta; } ;
struct TYPE_4__ {scalar_t__ weight; scalar_t__* addr; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_0 (int *) ;

u16_t FUNC_1(zdev_t* VAR_4, u8_t* VAR_5)
{
    u16_t VAR_6, VAR_7;
    FUNC_0(VAR_4);



    for (VAR_6=0; VAR_6<VAR_2; VAR_6++)
    {
        if (VAR_3->sta.blockingApList[VAR_6].weight != 0)
        {
            for (VAR_7=0; VAR_7<6; VAR_7++)
            {
                if (VAR_3->sta.blockingApList[VAR_6].addr[VAR_7] != VAR_5[VAR_7])
                {
                    break;
                }
            }
            if (VAR_7 == 6)
            {

                return VAR_1;
            }
        }
    }

    return VAR_0;
}
