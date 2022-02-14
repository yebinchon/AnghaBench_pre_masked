
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int conn_handle; } ;
struct TYPE_7__ {TYPE_1__ conn; } ;
struct ble_gap_event {TYPE_2__ disconnect; } ;
typedef scalar_t__ esp_err_t ;
struct TYPE_10__ {int gatt_mtu; TYPE_3__* pc_ble; } ;
struct TYPE_9__ {scalar_t__ (* close_transport_session ) (int ,int ) ;} ;
struct TYPE_8__ {int sec_inst; TYPE_4__* sec; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_5__* VAR_3 ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ble_gap_event *VAR_4, void *VAR_5)
{
    esp_err_t VAR_6;
    FUNC_0(VAR_2, "Inside disconnect w/ session - %d",
             VAR_4->disconnect.conn.conn_handle);
    if (VAR_3->pc_ble->sec &&
            VAR_3->pc_ble->sec->close_transport_session) {
        VAR_6 =
            VAR_3->pc_ble->sec->close_transport_session(VAR_3->pc_ble->sec_inst, VAR_4->disconnect.conn.conn_handle);
        if (VAR_6 != VAR_1) {
            FUNC_1(VAR_2, "error closing the session after disconnect");
        }
    }
    VAR_3->gatt_mtu = VAR_0;
}
