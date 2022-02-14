
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int esp_err_t ;
typedef scalar_t__ esp_bt_inq_mode_t ;
struct TYPE_7__ {int act; int pid; int sig; } ;
typedef TYPE_2__ btc_msg_t ;
struct TYPE_6__ {scalar_t__ num_rsps; scalar_t__ inq_len; scalar_t__ mode; } ;
struct TYPE_8__ {TYPE_1__ start_disc; } ;
typedef TYPE_3__ btc_gap_bt_args_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_3__*,int,int *) ;
 scalar_t__ FUNC_1 () ;

esp_err_t FUNC_2(esp_bt_inq_mode_t VAR_13, uint8_t VAR_14, uint8_t VAR_15)
{
    btc_msg_t VAR_16;
    btc_gap_bt_args_t VAR_17;

    if (FUNC_1() != VAR_4) {
        return VAR_10;
    }

    if (VAR_13 != VAR_7 &&
            VAR_13 != VAR_8) {
        return VAR_9;
    }

    if (VAR_14 < VAR_6 ||
            VAR_14 > VAR_5) {
        return VAR_9;
    }

    VAR_16.sig = VAR_2;
    VAR_16.pid = VAR_1;
    VAR_16.act = VAR_0;

    VAR_17.start_disc.mode = VAR_13;
    VAR_17.start_disc.inq_len = VAR_14;
    VAR_17.start_disc.num_rsps = VAR_15;

    return (FUNC_0(&VAR_16, &VAR_17, sizeof(btc_gap_bt_args_t), ((void*)0)) == VAR_3 ? VAR_12 : VAR_11);
}
