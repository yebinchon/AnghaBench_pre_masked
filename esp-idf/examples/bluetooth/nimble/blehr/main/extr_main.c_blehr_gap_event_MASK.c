
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {char* conn_handle; int value; } ;
struct TYPE_7__ {char* cur_notify; int attr_handle; } ;
struct TYPE_6__ {int reason; } ;
struct TYPE_5__ {int conn_handle; int status; } ;
struct ble_gap_event {int type; TYPE_4__ mtu; TYPE_3__ subscribe; TYPE_2__ disconnect; TYPE_1__ connect; } ;







 int FUNC_0 (char*,char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;

__attribute__((used)) static int
FUNC_5(struct ble_gap_event *VAR_4, void *VAR_5)
{
    switch (VAR_4->type) {
    case 131:

        FUNC_1(VAR_0, "connection %s; status=%d\n",
                    VAR_4->connect.status == 0 ? "established" : "failed",
                    VAR_4->connect.status);

        if (VAR_4->connect.status != 0) {

            FUNC_2();
        }
        VAR_1 = VAR_4->connect.conn_handle;
        break;

    case 130:
        FUNC_1(VAR_0, "disconnect; reason=%d\n", VAR_4->disconnect.reason);


        FUNC_2();
        break;

    case 132:
        FUNC_1(VAR_0, "adv complete\n");
        FUNC_2();
        break;

    case 128:
        FUNC_1(VAR_0, "subscribe event; cur_notify=%d\n value handle; "
                    "val_handle=%d\n",
                    VAR_4->subscribe.cur_notify, VAR_2);
        if (VAR_4->subscribe.attr_handle == VAR_2) {
            VAR_3 = VAR_4->subscribe.cur_notify;
            FUNC_3();
        } else if (VAR_4->subscribe.attr_handle != VAR_2) {
            VAR_3 = VAR_4->subscribe.cur_notify;
            FUNC_4();
        }
        FUNC_0("BLE_GAP_SUBSCRIBE_EVENT", "conn_handle from subscribe=%d", VAR_1);
        break;

    case 129:
        FUNC_1(VAR_0, "mtu update event; conn_handle=%d mtu=%d\n",
                    VAR_4->mtu.conn_handle,
                    VAR_4->mtu.value);
        break;

    }

    return 0;
}
