
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int conn_handle; } ;
struct ble_gap_event {TYPE_1__ connect; } ;
typedef scalar_t__ esp_err_t ;
struct TYPE_8__ {TYPE_2__* pc_ble; } ;
struct TYPE_7__ {scalar_t__ (* new_transport_session ) (int ,int ) ;} ;
struct TYPE_6__ {int sec_inst; TYPE_3__* sec; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 scalar_t__ FUNC_2 (int ,int ) ;

__attribute__((used)) static void FUNC_3(struct ble_gap_event *VAR_3, void *VAR_4)
{
    esp_err_t VAR_5;
    FUNC_0(VAR_1, "Inside BLE connect w/ conn_id - %d", VAR_3->connect.conn_handle);
    if (VAR_2->pc_ble->sec &&
            VAR_2->pc_ble->sec->new_transport_session) {
        VAR_5 =
            VAR_2->pc_ble->sec->new_transport_session(VAR_2->pc_ble->sec_inst, VAR_3->connect.conn_handle);
        if (VAR_5 != VAR_0) {
            FUNC_1(VAR_1, "error creating the session");
        }
    }
}
