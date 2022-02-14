
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int esp_err_t ;
struct TYPE_8__ {scalar_t__ manufacturer_len; scalar_t__ url_len; int * p_url; int * p_manufacturer_data; } ;
typedef TYPE_1__ esp_bt_eir_data_t ;
struct TYPE_9__ {int act; int pid; int sig; } ;
typedef TYPE_2__ btc_msg_t ;
struct TYPE_10__ {int config_eir; } ;
typedef TYPE_3__ btc_gap_bt_args_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_3__*,int,int ) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (int *,TYPE_1__*,int) ;

esp_err_t FUNC_3(esp_bt_eir_data_t *VAR_11)
{
    btc_msg_t VAR_12;
    btc_gap_bt_args_t VAR_13;

    if (FUNC_1() != VAR_4) {
        return VAR_7;
    }

    if (VAR_11 == ((void*)0)) {
        return VAR_6;
    }

    if (VAR_11->manufacturer_len > VAR_5
        || VAR_11->url_len > VAR_5) {
        return VAR_6;
    }

    if ((VAR_11->manufacturer_len > 0 && VAR_11->p_manufacturer_data == ((void*)0))
        || (VAR_11->url_len > 0 && VAR_11->p_url == ((void*)0))) {
        return VAR_6;
    }

    VAR_12.sig = VAR_2;
    VAR_12.pid = VAR_1;
    VAR_12.act = VAR_0;

    FUNC_2(&VAR_13.config_eir, VAR_11, sizeof(esp_bt_eir_data_t));

    return (FUNC_0(&VAR_12, &VAR_13, sizeof(btc_gap_bt_args_t), VAR_10) == VAR_3 ? VAR_9 : VAR_8);
}
