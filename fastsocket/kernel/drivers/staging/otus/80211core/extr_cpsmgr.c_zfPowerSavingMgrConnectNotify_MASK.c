
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
struct TYPE_3__ {int powerSaveMode; } ;
struct TYPE_4__ {scalar_t__ wlanMode; int beaconInterval; TYPE_1__ sta; } ;


 scalar_t__ VAR_0 ;




 TYPE_2__* VAR_1 ;
 int FUNC_0 (int *,int ,int,int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(zdev_t *VAR_2)
{
    FUNC_1(VAR_2);

    if ( VAR_1->wlanMode == VAR_0 )
    {
        switch(VAR_1->sta.powerSaveMode)
        {
            case 128:
                FUNC_0(VAR_2, 0, 0, VAR_1->beaconInterval);
                break;

            case 131:
            case 129:
            case 130:
                FUNC_0(VAR_2, 0, 1, VAR_1->beaconInterval);
                break;

            default:
                FUNC_0(VAR_2, 0, 0, VAR_1->beaconInterval);
                break;
        }
    }
}
