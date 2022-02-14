
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_buf_simple {int* data; int len; } ;
struct bt_mesh_msg_ctx {int addr; int app_idx; int net_idx; } ;
struct bt_mesh_model {struct bt_mesh_cfg_srv* user_data; } ;
struct TYPE_2__ {int feat; } ;
struct bt_mesh_cfg_srv {int frnd; TYPE_1__ hb_pub; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int,...) ;
 int FUNC_1 (char*,...) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int*,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (struct bt_mesh_model*,struct bt_mesh_msg_ctx*) ;

__attribute__((used)) static void FUNC_8(struct bt_mesh_model *VAR_5,
                       struct bt_mesh_msg_ctx *VAR_6,
                       struct net_buf_simple *VAR_7)
{
    struct bt_mesh_cfg_srv *VAR_8 = VAR_5->user_data;

    FUNC_0("net_idx 0x%04x app_idx 0x%04x src 0x%04x len %u: %s",
           VAR_6->net_idx, VAR_6->app_idx, VAR_6->addr, VAR_7->len,
           FUNC_3(VAR_7->data, VAR_7->len));

    if (VAR_7->data[0] != 0x00 && VAR_7->data[0] != 0x01) {
        FUNC_1("Invalid Friend value 0x%02x", VAR_7->data[0]);
        return;
    }

    if (!VAR_8) {
        FUNC_1("No Configuration Server context available");
        goto send_status;
    }

    FUNC_0("Friend 0x%02x -> 0x%02x", VAR_8->frnd, VAR_7->data[0]);

    if (VAR_8->frnd == VAR_7->data[0]) {
        goto send_status;
    }

    if (FUNC_2(VAR_3)) {
        VAR_8->frnd = VAR_7->data[0];

        if (FUNC_2(VAR_4)) {
            FUNC_6();
        }

        if (VAR_8->frnd == VAR_1) {
            FUNC_4(VAR_2);
        }
    }

    if (VAR_8->hb_pub.feat & VAR_0) {
        FUNC_5();
    }

send_status:
    FUNC_7(VAR_5, VAR_6);
}
