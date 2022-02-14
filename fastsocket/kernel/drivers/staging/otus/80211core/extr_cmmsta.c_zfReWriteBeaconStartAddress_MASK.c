
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
struct TYPE_3__ {scalar_t__ atimWindow; } ;
struct TYPE_4__ {int tickIbssSendBeacon; TYPE_1__ sta; int dtim; int beaconInterval; } ;


 int VAR_0 ;
 TYPE_2__* VAR_1 ;
 int FUNC_0 (int *,int ,int ,int ,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(zdev_t* VAR_2)
{
    FUNC_3(VAR_2);

    FUNC_1();

    FUNC_2(VAR_2);
    VAR_1->tickIbssSendBeacon++;
    FUNC_4(VAR_2);

    if ( VAR_1->tickIbssSendBeacon == 40 )
    {

        FUNC_0(VAR_2, VAR_0, VAR_1->beaconInterval, VAR_1->dtim, (u8_t)VAR_1->sta.atimWindow);
        FUNC_2(VAR_2);
        VAR_1->tickIbssSendBeacon = 0;
        FUNC_4(VAR_2);
    }
}
