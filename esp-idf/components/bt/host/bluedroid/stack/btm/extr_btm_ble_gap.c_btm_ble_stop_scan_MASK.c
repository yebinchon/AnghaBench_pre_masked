
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int state; int scan_type; } ;
struct TYPE_5__ {int wl_state; TYPE_1__ inq_var; } ;
struct TYPE_6__ {TYPE_2__ ble_ctr_cb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int VAR_5 ;
 TYPE_3__ VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(void)
{
    FUNC_0 ("btm_ble_stop_scan ");


    VAR_6.ble_ctr_cb.inq_var.scan_type = VAR_2;
    VAR_6.ble_ctr_cb.inq_var.state = VAR_3;

    FUNC_2 (VAR_1, VAR_0);

    FUNC_1(VAR_5);

    VAR_6.ble_ctr_cb.wl_state &= ~VAR_4;
}
