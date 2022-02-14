
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int value; int channel_id; int conn_handle; } ;
struct TYPE_4__ {int reason; } ;
struct TYPE_6__ {int conn_handle; int status; } ;
struct ble_gap_event {int type; TYPE_2__ mtu; TYPE_1__ disconnect; TYPE_3__ connect; } ;
struct ble_gap_conn_desc {int dummy; } ;






 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ,char*,int ,int ,int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,struct ble_gap_conn_desc*) ;
 int FUNC_4 () ;
 int FUNC_5 (struct ble_gap_event*,void*) ;
 int FUNC_6 (struct ble_gap_event*,void*) ;
 int FUNC_7 (struct ble_gap_event*,void*) ;

__attribute__((used)) static int
FUNC_8(struct ble_gap_event *VAR_1, void *VAR_2)
{
    struct ble_gap_conn_desc VAR_3;
    int VAR_4;

    switch (VAR_1->type) {
    case 130:

        if (VAR_1->connect.status == 0) {
            FUNC_5(VAR_1, VAR_2);
            VAR_4 = FUNC_3(VAR_1->connect.conn_handle, &VAR_3);
            if (VAR_4 != 0) {
                FUNC_1(VAR_0, "No open connection with the specified handle");
                return VAR_4;
            }
        } else {

            FUNC_4();
        }
        return 0;

    case 129:
        FUNC_0(VAR_0, "disconnect; reason=%d ", VAR_1->disconnect.reason);
        FUNC_6(VAR_1, VAR_2);


        FUNC_4();
        return 0;

    case 131:
        FUNC_4();
        return 0;

    case 128:
        FUNC_2(VAR_0, "mtu update event; conn_handle=%d cid=%d mtu=%d\n",
                 VAR_1->mtu.conn_handle,
                 VAR_1->mtu.channel_id,
                 VAR_1->mtu.value);
        FUNC_7(VAR_1, VAR_2);
        return 0;
    }
    return 0;
}
