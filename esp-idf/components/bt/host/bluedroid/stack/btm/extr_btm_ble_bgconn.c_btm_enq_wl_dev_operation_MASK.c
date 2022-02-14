
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ addr_type; int bd_addr; void* to_add; scalar_t__ in_use; } ;
typedef TYPE_2__ tBTM_BLE_WL_OP ;
typedef scalar_t__ tBLE_ADDR_TYPE ;
typedef scalar_t__ UINT8 ;
struct TYPE_4__ {TYPE_2__* wl_op_q; } ;
struct TYPE_6__ {TYPE_1__ ble_ctr_cb; } ;
typedef void* BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_2 ;
 TYPE_3__ VAR_3 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

void FUNC_3(BOOLEAN VAR_4, BD_ADDR VAR_5, tBLE_ADDR_TYPE VAR_6)
{
    tBTM_BLE_WL_OP *VAR_7 = VAR_3.ble_ctr_cb.wl_op_q;
    UINT8 VAR_8 = 0;

    for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8 ++, VAR_7 ++) {
        if (VAR_7->in_use && VAR_7->addr_type == VAR_6 && !FUNC_1(VAR_7->bd_addr, VAR_5, VAR_0)) {
            VAR_7->to_add = VAR_4;
            return;
        } else if (!VAR_7->in_use) {
            break;
        }
    }
    if (VAR_8 != VAR_1) {
        VAR_7->in_use = VAR_2;
        VAR_7->to_add = VAR_4;
        VAR_7->addr_type = VAR_6;
        FUNC_2(VAR_7->bd_addr, VAR_5, VAR_0);
    } else {
        FUNC_0("max pending WL operation reached, discard");
    }
    return;
}
