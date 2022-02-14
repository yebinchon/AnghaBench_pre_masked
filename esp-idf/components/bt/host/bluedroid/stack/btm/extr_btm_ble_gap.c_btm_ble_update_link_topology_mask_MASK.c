
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT8 ;
struct TYPE_4__ {int directed_conn; int adv_mode; } ;
struct TYPE_5__ {scalar_t__* link_count; TYPE_1__ inq_var; } ;
struct TYPE_6__ {TYPE_2__ ble_ctr_cb; } ;
typedef scalar_t__ BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 TYPE_3__ VAR_8 ;

void FUNC_2(UINT8 VAR_9, BOOLEAN VAR_10)
{
    FUNC_0 (VAR_3);

    if (VAR_10) {
        VAR_8.ble_ctr_cb.link_count[VAR_9]++;
    } else if (VAR_8.ble_ctr_cb.link_count[VAR_9] > 0) {
        VAR_8.ble_ctr_cb.link_count[VAR_9]--;
    }

    if (VAR_8.ble_ctr_cb.link_count[VAR_6]) {
        FUNC_1 (VAR_4);
    }

    if (VAR_8.ble_ctr_cb.link_count[VAR_7]) {
        FUNC_1(VAR_5);
    }

    if (VAR_9 == VAR_7 && VAR_10) {
        VAR_8.ble_ctr_cb.inq_var.adv_mode = VAR_0;

        VAR_8.ble_ctr_cb.inq_var.directed_conn = VAR_1;

        FUNC_0(VAR_2);
    }
}
