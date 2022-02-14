
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ adv_interval_max; scalar_t__ adv_interval_min; } ;
typedef TYPE_1__ tBTM_BLE_INQ_CB ;
typedef int UINT8 ;
typedef scalar_t__ UINT16 ;






 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;


void FUNC_0(tBTM_BLE_INQ_CB *VAR_5, UINT8 VAR_6, UINT16 *VAR_7, UINT16 *VAR_8)
{
    if (VAR_5->adv_interval_min && VAR_5->adv_interval_max) {
        *VAR_7 = VAR_5->adv_interval_min;
        *VAR_8 = VAR_5->adv_interval_max;
    } else {
        switch (VAR_6) {
        case 131:
        case 130:
            *VAR_7 = *VAR_8 = VAR_2;
            break;

        case 128:
        case 129:
            *VAR_7 = *VAR_8 = VAR_3;
            break;


        case 132:
            *VAR_7 = VAR_1;
            *VAR_8 = VAR_0;
            break;

        default:
            *VAR_7 = *VAR_8 = VAR_4;
            break;
        }
    }
    return;
}
