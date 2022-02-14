
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
typedef int u32_t ;
struct TYPE_4__ {scalar_t__ macAddr; int size; } ;
struct TYPE_5__ {int osRxFilter; TYPE_1__ multicastList; } ;
struct TYPE_6__ {TYPE_2__ sta; } ;


 int VAR_0 ;
 TYPE_3__* VAR_1 ;
 int FUNC_0 (int *,int ,int*,int) ;
 int FUNC_1 (int *) ;

void FUNC_2(zdev_t* VAR_2, u32_t VAR_3)
{
    u8_t VAR_4 = 0;
    u32_t VAR_5;

    FUNC_1(VAR_2);

    VAR_5 = VAR_1->sta.osRxFilter;

    VAR_1->sta.osRxFilter = VAR_3;

    if ((VAR_5 & VAR_0) !=
        (VAR_1->sta.osRxFilter & VAR_0))
    {
        if ( VAR_1->sta.osRxFilter & VAR_0 )
            VAR_4 = 1;
        FUNC_0(VAR_2, VAR_1->sta.multicastList.size,
                             (u8_t*)VAR_1->sta.multicastList.macAddr, VAR_4);
    }
}
