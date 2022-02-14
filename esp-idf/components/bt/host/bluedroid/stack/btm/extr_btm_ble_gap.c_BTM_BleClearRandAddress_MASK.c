
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ own_addr_type; int exist_addr_bit; int static_rand_addr; } ;
struct TYPE_5__ {scalar_t__ state; } ;
struct TYPE_7__ {TYPE_2__ addr_mgnt_cb; TYPE_1__ inq_var; } ;
typedef TYPE_3__ tBTM_BLE_CB ;
struct TYPE_8__ {TYPE_3__ ble_ctr_cb; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (char*) ;
 TYPE_4__ VAR_7 ;
 int FUNC_1 (int ,int ,int ) ;

void FUNC_2(void)
{
    tBTM_BLE_CB *VAR_8 = &VAR_7.ble_ctr_cb;
    if (VAR_7.ble_ctr_cb.addr_mgnt_cb.own_addr_type == VAR_2 && (!(VAR_8->inq_var.state == VAR_6 || VAR_8->inq_var.state == VAR_5 || VAR_8->inq_var.state == VAR_4))) {
        FUNC_0("Advertising or scaning now, can't restore public address ");
        return;
    }
    FUNC_1(VAR_7.ble_ctr_cb.addr_mgnt_cb.static_rand_addr, 0, VAR_0);
    VAR_7.ble_ctr_cb.addr_mgnt_cb.exist_addr_bit &= (~VAR_3);
    VAR_7.ble_ctr_cb.addr_mgnt_cb.own_addr_type = VAR_1;
}
