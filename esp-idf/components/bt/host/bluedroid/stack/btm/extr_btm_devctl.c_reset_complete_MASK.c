
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ (* get_ble_resolving_list_max_size ) () ;int (* get_last_features_classic_index ) () ;TYPE_6__* (* get_features_classic ) (int) ;int (* get_acl_buffer_count_ble ) () ;int (* get_ble_white_list_size ) () ;scalar_t__ (* supports_ble ) () ;scalar_t__ (* supports_ble_privacy ) () ;int (* get_sco_buffer_count ) () ;int (* get_acl_buffer_count_classic ) () ;} ;
typedef TYPE_5__ controller_t ;
struct TYPE_12__ {int pin_code_len; int pin_code; int pin_type; } ;
struct TYPE_11__ {int * p_select_cback; int bg_conn_type; int conn_state; } ;
struct TYPE_10__ {int inq_counter; void* page_scan_type; int page_scan_period; int page_scan_window; void* inq_scan_type; int inq_scan_period; int inq_scan_window; } ;
struct TYPE_15__ {TYPE_4__ cfg; TYPE_3__ ble_ctr_cb; TYPE_2__ btm_inq_vars; TYPE_1__* sec_dev_rec; } ;
struct TYPE_14__ {int as_array; } ;
struct TYPE_9__ {int sec_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int FUNC_1 () ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;
 TYPE_8__ VAR_11 ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 TYPE_5__* FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 TYPE_6__* FUNC_16 (int) ;
 int FUNC_17 () ;
 scalar_t__ FUNC_18 () ;
 scalar_t__ FUNC_19 () ;
 scalar_t__ FUNC_20 () ;
 scalar_t__ FUNC_21 () ;
 scalar_t__ FUNC_22 () ;
 int FUNC_23 () ;
 int FUNC_24 () ;

__attribute__((used)) static void FUNC_25(void)
{
    const controller_t *VAR_12 = FUNC_9();


    FUNC_13 ();


    for (int VAR_13 = 0; VAR_13 < VAR_4; VAR_13++) {
        VAR_11.sec_dev_rec[VAR_13].sec_state = VAR_5;
    }


    VAR_11.btm_inq_vars.inq_counter = 1;
    VAR_11.btm_inq_vars.inq_scan_window = VAR_7;
    VAR_11.btm_inq_vars.inq_scan_period = VAR_6;
    VAR_11.btm_inq_vars.inq_scan_type = VAR_10;

    VAR_11.btm_inq_vars.page_scan_window = VAR_9;
    VAR_11.btm_inq_vars.page_scan_period = VAR_8;
    VAR_11.btm_inq_vars.page_scan_type = VAR_10;


    VAR_11.ble_ctr_cb.conn_state = VAR_0;
    VAR_11.ble_ctr_cb.bg_conn_type = VAR_1;
    VAR_11.ble_ctr_cb.p_select_cback = ((void*)0);
    FUNC_10();
    FUNC_1();


    FUNC_5();

    FUNC_12(VAR_12->get_acl_buffer_count_classic());

    FUNC_7(VAR_12->get_sco_buffer_count());
    if (VAR_12->supports_ble()) {
        FUNC_3(VAR_12->get_ble_white_list_size());
        FUNC_11(VAR_12->get_acl_buffer_count_ble());
    }


    FUNC_0 (VAR_11.cfg.pin_type, VAR_11.cfg.pin_code, VAR_11.cfg.pin_code_len);

    for (int VAR_14 = 0; VAR_14 <= VAR_12->get_last_features_classic_index(); VAR_14++) {
        FUNC_4(VAR_14, VAR_12->get_features_classic(VAR_14)->as_array);
    }

    FUNC_6(VAR_3);
}
