
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ UINT8 ;
typedef int UINT16 ;
struct TYPE_9__ {scalar_t__ connectable_mode; } ;
struct TYPE_10__ {scalar_t__ privacy_mode; TYPE_3__ inq_var; } ;
struct TYPE_12__ {TYPE_4__ ble_ctr_cb; TYPE_1__* acl_db; } ;
struct TYPE_11__ {TYPE_2__* p_adv_inst; } ;
struct TYPE_8__ {int rpa; } ;
struct TYPE_7__ {int conn_addr; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (char*,...) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ,scalar_t__*) ;
 int FUNC_3 (scalar_t__,scalar_t__*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 TYPE_6__ VAR_7 ;
 scalar_t__ FUNC_6 (int ) ;
 TYPE_5__ VAR_8 ;
 int FUNC_7 (int ,int ,int ) ;

void FUNC_8(UINT8 VAR_9, UINT8 *VAR_10)
{
    UINT8 VAR_11;
    UINT8 VAR_12, VAR_13;
    UINT16 VAR_14;


    FUNC_3(VAR_11, VAR_10);
    VAR_9--;

    FUNC_1("btm_ble_multi_adv_vse_cback called with event:%d", VAR_11);
    if ((VAR_11 == VAR_5) && (VAR_9 >= 4)) {
        FUNC_3(VAR_12, VAR_10);
        ++VAR_10;
        FUNC_2(VAR_14, VAR_10);

        if ((VAR_13 = FUNC_6(VAR_14)) != VAR_6) {







        }

        if (VAR_12 < FUNC_0() &&
                VAR_12 != VAR_2) {
            FUNC_1("btm_ble_multi_adv_reenable called");
            FUNC_4(VAR_12);
        }

        else if (VAR_12 == VAR_2) {
            if (VAR_7.ble_ctr_cb.inq_var.connectable_mode == VAR_1) {
                FUNC_5 ( VAR_7.ble_ctr_cb.inq_var.connectable_mode );
            }
        }

    }

}
