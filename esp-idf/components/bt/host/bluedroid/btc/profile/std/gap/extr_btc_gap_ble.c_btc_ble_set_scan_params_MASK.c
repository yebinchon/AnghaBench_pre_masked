
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBLE_SCAN_PARAM_SETUP_CBACK ;
struct TYPE_3__ {scalar_t__ scan_type; int scan_duplicate; int own_addr_type; int scan_filter_policy; int scan_window; int scan_interval; } ;
typedef TYPE_1__ esp_ble_scan_params_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ,int ,int ,scalar_t__,int ,int ,int ,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(esp_ble_scan_params_t *VAR_14, tBLE_SCAN_PARAM_SETUP_CBACK VAR_15)
{
    if (FUNC_0(VAR_14->scan_interval, VAR_7, VAR_6) &&
        FUNC_0(VAR_14->scan_window, VAR_11, VAR_10) &&
        FUNC_0(VAR_14->own_addr_type, VAR_0, VAR_1) &&
        FUNC_0(VAR_14->scan_filter_policy, VAR_4, VAR_5) &&
        FUNC_0(VAR_14->scan_duplicate, VAR_2, VAR_3 -1) &&
        (VAR_14->scan_type == VAR_8 || VAR_14->scan_type == VAR_9)) {
        FUNC_1(VAR_13,
                                     VAR_14->scan_interval,
                                     VAR_14->scan_window,
                                     VAR_14->scan_type,
                                     VAR_14->scan_filter_policy,
                                     VAR_14->own_addr_type,
                                     VAR_14->scan_duplicate,
                                     VAR_15);
    } else {
        FUNC_2(VAR_13, VAR_12);
    }
}
