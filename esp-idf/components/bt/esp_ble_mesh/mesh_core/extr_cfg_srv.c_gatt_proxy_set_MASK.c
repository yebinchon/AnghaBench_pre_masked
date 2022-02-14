
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_buf_simple {int* data; int len; } ;
struct bt_mesh_subnet {scalar_t__ net_idx; } ;
struct bt_mesh_msg_ctx {int addr; int app_idx; int net_idx; } ;
struct bt_mesh_model {struct bt_mesh_cfg_srv* user_data; } ;
struct TYPE_3__ {int feat; } ;
struct bt_mesh_cfg_srv {int gatt_proxy; TYPE_1__ hb_pub; } ;
struct TYPE_4__ {struct bt_mesh_subnet* sub; } ;


 int FUNC_0 (struct bt_mesh_subnet*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*,int,int,...) ;
 int FUNC_2 (char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int*,int ) ;
 TYPE_2__ VAR_6 ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (struct bt_mesh_subnet*) ;
 int FUNC_10 () ;
 int FUNC_11 (struct bt_mesh_model*,struct bt_mesh_msg_ctx*) ;

__attribute__((used)) static void FUNC_12(struct bt_mesh_model *VAR_7,
                           struct bt_mesh_msg_ctx *VAR_8,
                           struct net_buf_simple *VAR_9)
{
    struct bt_mesh_cfg_srv *VAR_10 = VAR_7->user_data;

    FUNC_1("net_idx 0x%04x app_idx 0x%04x src 0x%04x len %u: %s",
           VAR_8->net_idx, VAR_8->app_idx, VAR_8->addr, VAR_9->len,
           FUNC_4(VAR_9->data, VAR_9->len));

    if (VAR_9->data[0] != 0x00 && VAR_9->data[0] != 0x01) {
        FUNC_2("Invalid GATT Proxy value 0x%02x", VAR_9->data[0]);
        return;
    }

    if (!FUNC_3(VAR_4) ||
            FUNC_6() == VAR_2) {
        goto send_status;
    }

    if (!VAR_10) {
        FUNC_2("No Configuration Server context available");
        goto send_status;
    }

    FUNC_1("GATT Proxy 0x%02x -> 0x%02x", VAR_10->gatt_proxy, VAR_9->data[0]);

    if (VAR_10->gatt_proxy == VAR_9->data[0]) {
        goto send_status;
    }

    VAR_10->gatt_proxy = VAR_9->data[0];

    if (FUNC_3(VAR_5)) {
        FUNC_10();
    }
    if (VAR_10->hb_pub.feat & VAR_0) {
        FUNC_7();
    }

send_status:
    FUNC_11(VAR_7, VAR_8);
}
