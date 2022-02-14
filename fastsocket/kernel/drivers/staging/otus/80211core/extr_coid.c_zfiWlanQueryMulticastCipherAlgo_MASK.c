
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int zdev_t ;
typedef int u8_t ;
struct TYPE_3__ {int currentAuthMode; int* rsnIe; int encryMode; } ;
struct TYPE_4__ {TYPE_1__ sta; } ;


 int VAR_0 ;




 int VAR_1 ;
 TYPE_2__* VAR_2 ;
 int FUNC_0 (int *) ;

u8_t FUNC_1(zdev_t *VAR_3)
{
    FUNC_0(VAR_3);

    switch( VAR_2->sta.currentAuthMode )
    {
        case 129:
        case 130:
            if ( VAR_2->sta.rsnIe[7] == 2 )
            {
                return VAR_1;
            }
            else
            {
                return VAR_0;
            }
            break;

        case 128:
        case 131:
            if ( VAR_2->sta.rsnIe[11] == 2 )
            {
                return VAR_1;
            }
            else
            {
                return VAR_0;
            }
            break;

        default:
            return VAR_2->sta.encryMode;
    }
}
