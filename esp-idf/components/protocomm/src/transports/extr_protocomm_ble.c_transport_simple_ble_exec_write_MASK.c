
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ssize_t ;
typedef int esp_gatts_cb_event_t ;
typedef int esp_gatt_if_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_6__ {scalar_t__ exec_write_flag; int trans_id; int conn_id; } ;
struct TYPE_7__ {TYPE_1__ exec_write; } ;
typedef TYPE_2__ esp_ble_gatts_cb_param_t ;
struct TYPE_9__ {scalar_t__ prepare_len; int * prepare_buf; int handle; } ;
struct TYPE_8__ {int pc_ble; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ,int ,int ,int ,int *) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,int *,int ) ;
 TYPE_5__ VAR_4 ;
 TYPE_4__* VAR_5 ;
 scalar_t__ FUNC_8 (int ,int ,int ,int *,scalar_t__,int **,int *) ;

__attribute__((used)) static void FUNC_9(esp_gatts_cb_event_t VAR_6, esp_gatt_if_t VAR_7, esp_ble_gatts_cb_param_t *VAR_8)
{
    esp_err_t VAR_9;
    uint8_t *VAR_10 = ((void*)0);
    ssize_t VAR_11 = 0;
    FUNC_0(VAR_3, "Inside exec_write w/ session - %d", VAR_8->exec_write.conn_id);

    if ((VAR_8->exec_write.exec_write_flag == VAR_1)
            &&
            VAR_4.prepare_buf) {
        VAR_9 = FUNC_8(VAR_5->pc_ble,
                                   FUNC_6(VAR_4.handle),
                                   VAR_8->exec_write.conn_id,
                                   VAR_4.prepare_buf,
                                   VAR_4.prepare_len,
                                   &VAR_10, &VAR_11);

        if (VAR_9 != VAR_2) {
            FUNC_1(VAR_3, "Invalid content received, killing connection");
            FUNC_2(VAR_7, VAR_8->exec_write.conn_id);
        } else {
            FUNC_7("Response from exec write", VAR_10, VAR_11);
            FUNC_4(VAR_4.handle, VAR_11, VAR_10);
        }
    }
    if (VAR_4.prepare_buf) {
        FUNC_5(VAR_4.prepare_buf);
        VAR_4.prepare_buf = ((void*)0);
        VAR_4.prepare_len = 0;
    }

    VAR_9 = FUNC_3(VAR_7, VAR_8->exec_write.conn_id, VAR_8->exec_write.trans_id, VAR_0, ((void*)0));
    if (VAR_9 != VAR_2) {
        FUNC_1(VAR_3, "Send response error in exec write");
    }
    if (VAR_10) {
        FUNC_5(VAR_10);
    }
}
