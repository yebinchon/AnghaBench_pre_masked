
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int addr_type; int bd_addr; int to_add; scalar_t__ in_use; } ;
typedef TYPE_2__ tBTM_BLE_WL_OP ;
typedef scalar_t__ UINT8 ;
struct TYPE_5__ {TYPE_2__* wl_op_q; } ;
struct TYPE_7__ {TYPE_1__ ble_ctr_cb; } ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 TYPE_4__ VAR_2 ;
 int FUNC_1 (TYPE_2__*,int ,int) ;

BOOLEAN FUNC_2(void)
{
    tBTM_BLE_WL_OP *VAR_3 = VAR_2.ble_ctr_cb.wl_op_q;
    UINT8 VAR_4 = 0;
    BOOLEAN VAR_5 = VAR_1;

    for (VAR_4 = 0; VAR_4 < VAR_0 && VAR_5; VAR_4 ++, VAR_3 ++) {
        if (VAR_3->in_use) {
            VAR_5 = FUNC_0(VAR_3->to_add, VAR_3->bd_addr, VAR_3->addr_type);
            FUNC_1(VAR_3, 0, sizeof(tBTM_BLE_WL_OP));
        } else {
            break;
        }
    }
    return VAR_5;
}
