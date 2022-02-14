
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int esp_err_t ;
typedef scalar_t__ button_handle_t ;
struct TYPE_4__ {int tmr; TYPE_1__* pbtn; int * arg; int * cb; } ;
struct TYPE_3__ {TYPE_2__ press_serial_cb; TYPE_2__ tap_short_cb; TYPE_2__ tap_rls_cb; TYPE_2__ tap_psh_cb; } ;
typedef TYPE_1__ button_dev_t ;
typedef scalar_t__ button_cb_type_t ;
typedef TYPE_2__ button_cb_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;

esp_err_t FUNC_1(button_handle_t VAR_5, button_cb_type_t VAR_6)
{
    button_dev_t* VAR_7 = (button_dev_t*) VAR_5;
    button_cb_t* VAR_8 = ((void*)0);
    if (VAR_6 == VAR_0) {
        VAR_8 = &VAR_7->tap_psh_cb;
    } else if (VAR_6 == VAR_1) {
        VAR_8 = &VAR_7->tap_rls_cb;
    } else if (VAR_6 == VAR_3) {
        VAR_8 = &VAR_7->tap_short_cb;
    } else if (VAR_6 == VAR_2) {
        VAR_8 = &VAR_7->press_serial_cb;
    }
    VAR_8->cb = ((void*)0);
    VAR_8->arg = ((void*)0);
    VAR_8->pbtn = VAR_7;
    FUNC_0(&VAR_8->tmr);
    return VAR_4;
}
