
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
struct TYPE_3__ {int adapterState; } ;
struct TYPE_4__ {int wlanMode; TYPE_1__ sta; } ;


 int VAR_0 ;
 int VAR_1 ;



 TYPE_2__* VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(zdev_t* VAR_3)
{
    FUNC_3(VAR_3);

    switch (VAR_2->sta.adapterState)
    {
    case 128:
        FUNC_0(VAR_3);
        break;
    case 130:
        {
            if (VAR_2->wlanMode == VAR_1) {
                FUNC_2(VAR_3);
            } else if (VAR_2->wlanMode == VAR_0) {
                FUNC_1(VAR_3);
            }
        }
        break;
    case 129:
    default:
        break;
    }
}
