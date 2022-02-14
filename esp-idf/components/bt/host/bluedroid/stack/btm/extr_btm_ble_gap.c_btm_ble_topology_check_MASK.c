
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int tBTM_BLE_STATE_MASK ;
typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_4__ {int cur_states; } ;
struct TYPE_6__ {TYPE_1__ ble_ctr_cb; } ;
struct TYPE_5__ {int * (* get_ble_supported_states ) () ;} ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*,int,int) ;
 int FUNC_1 (char*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_3__ VAR_4 ;
 int*** VAR_5 ;
 TYPE_2__* FUNC_2 () ;
 int * FUNC_3 () ;

BOOLEAN FUNC_4(tBTM_BLE_STATE_MASK VAR_6)
{
    BOOLEAN VAR_7 = VAR_2;

    UINT8 VAR_8 = 0;
    UINT16 VAR_9 = VAR_4.ble_ctr_cb.cur_states;
    UINT8 VAR_10, VAR_11;
    UINT8 VAR_12 = 0;


    if (VAR_6 == VAR_0 ||
            VAR_6 > VAR_1 ||
            (VAR_6 & (VAR_6 - 1 )) != 0) {
        FUNC_1("illegal state requested: %d", VAR_6);
        return VAR_7;
    }

    while (VAR_6) {
        VAR_6 >>= 1;
        VAR_12 ++;
    }


    VAR_10 = VAR_5[0][VAR_12 - 1][0];
    VAR_11 = VAR_5[0][VAR_12 - 1][1];

    const uint8_t *VAR_13 = FUNC_2()->get_ble_supported_states();

    if (!FUNC_0(VAR_13, VAR_10, VAR_11)) {
        FUNC_1("state requested not supported: %d", VAR_12);
        return VAR_7;
    }

    VAR_7 = VAR_3;


    while (VAR_9 != 0) {
        if (VAR_9 & 0x01) {
            VAR_10 = VAR_5[VAR_12][VAR_8][0];
            VAR_11 = VAR_5[VAR_12][VAR_8][1];

            if (VAR_10 != 0 && VAR_11 != 0) {
                if (!FUNC_0(VAR_13, VAR_10, VAR_11)) {
                    VAR_7 = VAR_2;
                    break;
                }
            }
        }
        VAR_9 >>= 1;
        VAR_8 ++;
    }
    return VAR_7;
}
