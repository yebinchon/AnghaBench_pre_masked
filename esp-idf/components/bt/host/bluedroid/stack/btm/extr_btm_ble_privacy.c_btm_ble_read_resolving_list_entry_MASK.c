
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ tBTM_STATUS ;
struct TYPE_5__ {int in_controller_list; int resolving_list_index; int static_addr; int static_addr_type; } ;
struct TYPE_6__ {int bd_addr; TYPE_1__ ble; } ;
typedef TYPE_2__ tBTM_SEC_DEV_REC ;
typedef int UINT8 ;
struct TYPE_7__ {scalar_t__ (* supports_ble_privacy ) () ;} ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ,int ,int *,int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 TYPE_3__* FUNC_4 () ;
 scalar_t__ FUNC_5 () ;

tBTM_STATUS FUNC_6(tBTM_SEC_DEV_REC *VAR_8)
{
    tBTM_STATUS VAR_9 = VAR_3;

    if (!(VAR_8->ble.in_controller_list & VAR_4)) {
        return VAR_5;
    }

    if (FUNC_4()->supports_ble_privacy()) {
        if (FUNC_3(VAR_8->ble.static_addr_type,
                VAR_8->ble.static_addr)) {
            VAR_9 = VAR_2;
        }
    } else {
        UINT8 VAR_10[20] = {0};
        UINT8 *VAR_11 = VAR_10;

        FUNC_1(VAR_11, VAR_0);
        FUNC_1(VAR_11, VAR_8->ble.resolving_list_index);

        VAR_9 = FUNC_0 (VAR_6,
                                        VAR_1,
                                        VAR_10,
                                        VAR_7);
    }

    if (VAR_9 == VAR_2) {
        FUNC_2(VAR_8->bd_addr,
                                           VAR_0);
    }

    return VAR_9;
}
