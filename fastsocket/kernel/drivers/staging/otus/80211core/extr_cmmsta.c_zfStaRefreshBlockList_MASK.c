
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef size_t u16_t ;
struct TYPE_4__ {TYPE_2__* blockingApList; } ;
struct TYPE_6__ {TYPE_1__ sta; } ;
struct TYPE_5__ {scalar_t__ weight; } ;


 size_t VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(zdev_t* VAR_2, u16_t VAR_3)
{
    u16_t VAR_4;
    FUNC_2(VAR_2);
    FUNC_0();

    FUNC_1(VAR_2);
    for (VAR_4=0; VAR_4<VAR_0; VAR_4++)
    {
        if (VAR_1->sta.blockingApList[VAR_4].weight != 0)
        {
            if (VAR_3 != 0)
            {
                VAR_1->sta.blockingApList[VAR_4].weight = 0;
            }
            else
            {
                VAR_1->sta.blockingApList[VAR_4].weight--;
            }
        }
    }
    FUNC_3(VAR_2);
    return;
}
