
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
typedef int esp_gatts_cb_event_t ;
typedef scalar_t__ esp_gatt_status_t ;
struct TYPE_8__ {int offset; scalar_t__ len; int value; int auth_req; int handle; } ;
struct TYPE_10__ {TYPE_1__ attr_value; int member_0; } ;
typedef TYPE_3__ esp_gatt_rsp_t ;
typedef int esp_gatt_if_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_9__ {int offset; int trans_id; int conn_id; int handle; } ;
struct TYPE_11__ {TYPE_2__ read; } ;
typedef TYPE_4__ esp_ble_gatts_cb_param_t ;
struct TYPE_12__ {scalar_t__ gatt_mtu; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (scalar_t__,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int ,scalar_t__*,int const**) ;
 scalar_t__ FUNC_4 (int ,int ,int ,scalar_t__,TYPE_3__*) ;
 int FUNC_5 (int ,int const*,scalar_t__) ;
 TYPE_6__* VAR_3 ;

__attribute__((used)) static void FUNC_6(esp_gatts_cb_event_t VAR_4, esp_gatt_if_t VAR_5, esp_ble_gatts_cb_param_t *VAR_6)
{
    static const uint8_t *VAR_7 = ((void*)0);
    static uint16_t VAR_8 = 0;
    esp_gatt_status_t VAR_9 = VAR_1;

    FUNC_0(VAR_2, "Inside read w/ session - %d on param %d %d",
             VAR_6->read.conn_id, VAR_6->read.handle, VAR_8);
    if (!VAR_8) {
        FUNC_0(VAR_2, "Reading attr value first time");
        VAR_9 = FUNC_3(VAR_6->read.handle, &VAR_8, &VAR_7);
    } else {
        FUNC_0(VAR_2, "Subsequent read request for attr value");
    }

    esp_gatt_rsp_t VAR_10 = {0};
    VAR_10.attr_value.len = FUNC_2(VAR_8, (VAR_3->gatt_mtu - 1));
    VAR_10.attr_value.handle = VAR_6->read.handle;
    VAR_10.attr_value.offset = VAR_6->read.offset;
    VAR_10.attr_value.auth_req = VAR_0;
    if (VAR_10.attr_value.len && VAR_7) {
        FUNC_5(VAR_10.attr_value.value,
                VAR_7 + VAR_6->read.offset,
                VAR_10.attr_value.len);
    }
    VAR_8 -= VAR_10.attr_value.len;
    esp_err_t VAR_11 = FUNC_4(VAR_5, VAR_6->read.conn_id,
                                                VAR_6->read.trans_id, VAR_9, &VAR_10);
    if (VAR_11 != VAR_1) {
        FUNC_1(VAR_2, "Send response error in read");
    }
}
