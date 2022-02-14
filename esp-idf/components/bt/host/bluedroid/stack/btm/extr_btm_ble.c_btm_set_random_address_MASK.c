
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int private_addr; } ;
typedef TYPE_3__ tBTM_LE_RANDOM_CB ;
struct TYPE_5__ {scalar_t__ adv_mode; } ;
struct TYPE_6__ {TYPE_1__ inq_var; TYPE_3__ addr_mgnt_cb; } ;
struct TYPE_8__ {TYPE_2__ ble_ctr_cb; } ;
typedef scalar_t__ BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 TYPE_4__ VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;

void FUNC_4(BD_ADDR VAR_4)
{
    tBTM_LE_RANDOM_CB *VAR_5 = &VAR_3.ble_ctr_cb.addr_mgnt_cb;
    BOOLEAN VAR_6 = VAR_3.ble_ctr_cb.inq_var.adv_mode ;

    FUNC_0 ("btm_set_random_address");

    if (VAR_6 == VAR_2) {
        FUNC_1 (VAR_1);
    }

    FUNC_3(VAR_5->private_addr, VAR_4, VAR_0);
    FUNC_2(VAR_5->private_addr);

    if (VAR_6 == VAR_2) {
        FUNC_1 (VAR_2);
    }


}
