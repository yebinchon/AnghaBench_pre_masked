
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ tBTM_BLE_SCAN_COND_OP ;
struct TYPE_9__ {scalar_t__* pf_counter; } ;
typedef TYPE_1__ tBTM_BLE_PF_COUNT ;
struct TYPE_10__ {int bda; } ;
typedef TYPE_2__ tBLE_BD_ADDR ;
typedef scalar_t__ UINT8 ;
struct TYPE_11__ {int max_filter; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (char*,scalar_t__,int ,scalar_t__) ;
 int FUNC_1 (char*,...) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;
 TYPE_1__* FUNC_4 (TYPE_2__*) ;
 int FUNC_5 () ;
 TYPE_3__ VAR_9 ;

UINT8 FUNC_6(tBTM_BLE_SCAN_COND_OP VAR_10,
                                   UINT8 VAR_11, tBLE_BD_ADDR *VAR_12,
                                   UINT8 VAR_13)
{
    tBTM_BLE_PF_COUNT *VAR_14 = ((void*)0);
    UINT8 *VAR_15 = ((void*)0);

    FUNC_5();

    if (VAR_11 > VAR_5) {
        FUNC_1("unknown PF filter condition type %d", VAR_11);
        return VAR_0;
    }


    if (VAR_1 == VAR_11 ||
            VAR_3 == VAR_11 ||
            VAR_2 == VAR_11 ||
            VAR_4 == VAR_11) {
        VAR_12 = ((void*)0);
    }

    if ((VAR_14 = FUNC_4(VAR_12)) == ((void*)0) &&
            VAR_6 == VAR_10) {
        VAR_14 = FUNC_2(VAR_12->bda);
    }

    if (((void*)0) != VAR_14) {

        if ((VAR_5 == VAR_11 && VAR_7 == VAR_10) ||

                (VAR_1 == VAR_11 &&
                 (VAR_8 == VAR_10 || VAR_7 == VAR_10))) {
            FUNC_3(VAR_12, VAR_11);
        }

        else if (VAR_11 != VAR_5) {
            VAR_15 = VAR_14->pf_counter;
            if (VAR_13 > 0) {
                VAR_15[VAR_11] += 1;
            }

            FUNC_0("counter = %d, maxfilt = %d, num_avbl=%d",
                            VAR_15[VAR_11], VAR_9.max_filter, VAR_13);
            return VAR_15[VAR_11];
        }
    } else {
        FUNC_1("no matching filter counter found");
    }

    return VAR_0;
}
