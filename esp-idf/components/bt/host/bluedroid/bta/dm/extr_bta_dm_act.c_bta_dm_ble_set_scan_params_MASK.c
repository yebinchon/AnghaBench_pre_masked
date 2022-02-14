
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int scan_param_setup_cback; int scan_mode; int scan_window; int scan_int; int client_if; } ;
struct TYPE_5__ {TYPE_1__ ble_set_scan_params; } ;
typedef TYPE_2__ tBTA_DM_MSG ;


 int FUNC_0 (int ,int ,int ,int ,int ) ;

void FUNC_1(tBTA_DM_MSG *VAR_0)
{
    FUNC_0(VAR_0->ble_set_scan_params.client_if,
                         VAR_0->ble_set_scan_params.scan_int,
                         VAR_0->ble_set_scan_params.scan_window,
                         VAR_0->ble_set_scan_params.scan_mode,
                         VAR_0->ble_set_scan_params.scan_param_setup_cback);
}
