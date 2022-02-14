
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ tBTM_STATUS ;
struct TYPE_5__ {int static_addr; int static_addr_type; } ;
struct TYPE_6__ {int bd_addr; TYPE_1__ ble; } ;
typedef TYPE_2__ tBTM_SEC_DEV_REC ;
typedef int UINT8 ;
struct TYPE_7__ {scalar_t__ (* get_ble_resolving_list_max_size ) () ;scalar_t__ (* supports_ble_privacy ) () ;} ;


 int FUNC_0 (int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (int ,int ,int *,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (int ,int ) ;
 TYPE_3__* FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 scalar_t__ FUNC_7 () ;

tBTM_STATUS FUNC_8(tBTM_SEC_DEV_REC *VAR_7)
{

    if (FUNC_5()->get_ble_resolving_list_max_size() == 0) {
        return VAR_4;
    }

    tBTM_STATUS VAR_8 = VAR_3;
    if (FUNC_5()->supports_ble_privacy()) {
        if (FUNC_4(VAR_7->ble.static_addr_type,
                VAR_7->ble.static_addr)) {
            VAR_8 = VAR_2;
        }
    } else {
        UINT8 VAR_9[20] = {0};
        UINT8 *VAR_10 = VAR_9;

        FUNC_2(VAR_10, VAR_0);
        FUNC_2(VAR_10, VAR_7->ble.static_addr_type);
        FUNC_0(VAR_10, VAR_7->ble.static_addr);

        VAR_8 = FUNC_1(VAR_5,
                                       VAR_1,
                                       VAR_9,
                                       VAR_6);
    }

    if (VAR_8 == VAR_2) {
        FUNC_3( VAR_7->bd_addr, VAR_0);
    }

    return VAR_8;
}
