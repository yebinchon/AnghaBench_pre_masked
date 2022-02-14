
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ssize_t ;
typedef int esp_gatts_cb_event_t ;
typedef int esp_gatt_if_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_6__ {int conn_id; int trans_id; int handle; int len; int value; scalar_t__ is_prep; } ;
struct TYPE_7__ {TYPE_1__ write; } ;
typedef TYPE_2__ esp_ble_gatts_cb_param_t ;
struct TYPE_8__ {int pc_ble; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int *) ;
 scalar_t__ FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int *,int ) ;
 scalar_t__ FUNC_8 (int ,TYPE_2__*) ;
 TYPE_4__* VAR_3 ;
 scalar_t__ FUNC_9 (int ,int ,int ,int ,int ,int **,int *) ;

__attribute__((used)) static void FUNC_10(esp_gatts_cb_event_t VAR_4, esp_gatt_if_t VAR_5, esp_ble_gatts_cb_param_t *VAR_6)
{
    uint8_t *VAR_7 = ((void*)0);
    ssize_t VAR_8 = 0;
    esp_err_t VAR_9;

    FUNC_0(VAR_2, "Inside write with session - %d on attr handle = %d \nlen = %d, is_prep = %d",
             VAR_6->write.conn_id, VAR_6->write.handle, VAR_6->write.len, VAR_6->write.is_prep);

    if (VAR_6->write.is_prep) {
        VAR_9 = FUNC_8(VAR_5, VAR_6);
        if (VAR_9 != VAR_1) {
            FUNC_1(VAR_2, "Error appending to prepare buffer");
        }
        return;
    } else {
        FUNC_0(VAR_2, "is_prep not set");
    }

    VAR_9 = FUNC_9(VAR_3->pc_ble,
                               FUNC_6(VAR_6->write.handle),
                               VAR_6->write.conn_id,
                               VAR_6->write.value,
                               VAR_6->write.len,
                               &VAR_7, &VAR_8);
    if (VAR_9 == VAR_1) {
        VAR_9 = FUNC_4(VAR_6->write.handle, VAR_8, VAR_7);
        if (VAR_9 != VAR_1) {
            FUNC_1(VAR_2, "Failed to set the session attribute value");
        }
        VAR_9 = FUNC_3(VAR_5, VAR_6->write.conn_id,
                                          VAR_6->write.trans_id, VAR_0, ((void*)0));
        if (VAR_9 != VAR_1) {
            FUNC_1(VAR_2, "Send response error in write");
        }
        FUNC_7("Response from  write", VAR_7, VAR_8);

    } else {
        FUNC_1(VAR_2, "Invalid content received, killing connection");
        FUNC_2(VAR_5, VAR_6->write.conn_id);
    }
    if (VAR_7) {
        FUNC_5(VAR_7);
    }
}
