
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int esp_gatts_cb_event_t ;
typedef int esp_gatt_if_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_7__ {int conn_id; } ;
struct TYPE_10__ {TYPE_1__ connect; } ;
typedef TYPE_4__ esp_ble_gatts_cb_param_t ;
struct TYPE_11__ {TYPE_2__* pc_ble; } ;
struct TYPE_9__ {scalar_t__ (* new_transport_session ) (int ,int ) ;} ;
struct TYPE_8__ {int sec_inst; TYPE_3__* sec; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_6__* VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(esp_gatts_cb_event_t VAR_3, esp_gatt_if_t VAR_4, esp_ble_gatts_cb_param_t *VAR_5)
{
    esp_err_t VAR_6;
    FUNC_0(VAR_1, "Inside BLE connect w/ conn_id - %d", VAR_5->connect.conn_id);
    if (VAR_2->pc_ble->sec &&
        VAR_2->pc_ble->sec->new_transport_session) {
        VAR_6 = VAR_2->pc_ble->sec->new_transport_session(VAR_2->pc_ble->sec_inst,
                                                                    VAR_5->connect.conn_id);
        if (VAR_6 != VAR_0) {
            FUNC_1(VAR_1, "error creating the session");
        }
    }
}
