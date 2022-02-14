
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ UINT8 ;
struct TYPE_7__ {int connectable_mode; int directed_conn; int adv_mode; } ;
struct TYPE_6__ {TYPE_3__ inq_var; } ;
struct TYPE_5__ {int connectable_mode; } ;
struct TYPE_8__ {TYPE_2__ ble_ctr_cb; TYPE_1__ btm_inq_vars; } ;
typedef int BOOLEAN ;
typedef int BD_ADDR ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 TYPE_4__ VAR_8 ;
 int FUNC_4 () ;

BOOLEAN FUNC_5(UINT8 VAR_9, BD_ADDR VAR_10, UINT8 VAR_11)
{
    BOOLEAN VAR_12 = VAR_5;
    if (VAR_11 == VAR_6) {
        VAR_8.ble_ctr_cb.inq_var.adv_mode = VAR_1;

        VAR_8.ble_ctr_cb.inq_var.directed_conn = VAR_3;

        FUNC_0 (VAR_4);
    }

    if (VAR_8.ble_ctr_cb.inq_var.connectable_mode == VAR_2) {
        FUNC_3(VAR_8.btm_inq_vars.connectable_mode |
                                   VAR_8.ble_ctr_cb.inq_var.connectable_mode);
    }




    if (FUNC_1() == VAR_0 && VAR_11 != VAR_7 &&
            !FUNC_4()) {
        VAR_12 = FUNC_2();
    }

    return VAR_12;
}
