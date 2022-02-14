
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int esp_err_t ;
typedef scalar_t__ button_handle_t ;
struct TYPE_7__ {int interval; TYPE_4__* pbtn; void* cb; void* arg; } ;
struct TYPE_6__ {int interval; int tmr; TYPE_4__* pbtn; void* cb; void* arg; } ;
struct TYPE_5__ {int interval; int tmr; TYPE_4__* pbtn; void* cb; void* arg; } ;
struct TYPE_8__ {TYPE_3__ tap_short_cb; TYPE_2__ tap_psh_cb; TYPE_1__ tap_rls_cb; } ;
typedef TYPE_4__ button_dev_t ;
typedef scalar_t__ button_cb_type_t ;
typedef void* button_cb ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,scalar_t__,int ) ;
 int VAR_7 ;
 int FUNC_1 (scalar_t__,int,int,void*,void*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,int,int ) ;

esp_err_t FUNC_3(button_handle_t VAR_10, button_cb_type_t VAR_11, button_cb VAR_12, void* VAR_13)
{
    FUNC_0(VAR_7, VAR_10, VAR_5);
    button_dev_t* VAR_14 = (button_dev_t*) VAR_10;
    if (VAR_11 == VAR_0) {
        VAR_14->tap_psh_cb.arg = VAR_13;
        VAR_14->tap_psh_cb.cb = VAR_12;
        VAR_14->tap_psh_cb.interval = VAR_4 / VAR_9;
        VAR_14->tap_psh_cb.pbtn = VAR_14;

        FUNC_2(VAR_14->tap_psh_cb.tmr, VAR_14->tap_psh_cb.interval, VAR_8);

    } else if (VAR_11 == VAR_1) {
        VAR_14->tap_rls_cb.arg = VAR_13;
        VAR_14->tap_rls_cb.cb = VAR_12;
        VAR_14->tap_rls_cb.interval = VAR_4 / VAR_9;
        VAR_14->tap_rls_cb.pbtn = VAR_14;

        FUNC_2(VAR_14->tap_rls_cb.tmr, VAR_14->tap_psh_cb.interval, VAR_8);

    } else if (VAR_11 == VAR_3) {
        VAR_14->tap_short_cb.arg = VAR_13;
        VAR_14->tap_short_cb.cb = VAR_12;
        VAR_14->tap_short_cb.interval = VAR_4 / VAR_9;
        VAR_14->tap_short_cb.pbtn = VAR_14;
    } else if (VAR_11 == VAR_2) {
        FUNC_1(VAR_10, 1, 1000 / VAR_9, VAR_12, VAR_13);
    }
    return VAR_6;
}
