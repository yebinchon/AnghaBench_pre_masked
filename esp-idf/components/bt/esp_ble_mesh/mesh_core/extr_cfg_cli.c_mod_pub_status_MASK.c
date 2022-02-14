
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_buf_simple {int len; int data; } ;
struct bt_mesh_msg_ctx {int addr; int app_idx; int net_idx; } ;
struct bt_mesh_model {int dummy; } ;
struct bt_mesh_cfg_mod_pub_status {int app_idx; int cred_flag; void* mod_id; void* cid; void* transmit; void* period; void* ttl; void* addr; void* elem_addr; void* status; int member_0; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ,int ,int ,int,int ) ;
 void* VAR_0 ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct bt_mesh_model*,struct bt_mesh_msg_ctx*,struct bt_mesh_cfg_mod_pub_status*,int) ;
 void* FUNC_5 (struct net_buf_simple*) ;
 void* FUNC_6 (struct net_buf_simple*) ;

__attribute__((used)) static void FUNC_7(struct bt_mesh_model *VAR_1,
                           struct bt_mesh_msg_ctx *VAR_2,
                           struct net_buf_simple *VAR_3)
{
    struct bt_mesh_cfg_mod_pub_status VAR_4 = {0};

    FUNC_2("net_idx 0x%04x app_idx 0x%04x src 0x%04x len %u: %s",
           VAR_2->net_idx, VAR_2->app_idx, VAR_2->addr, VAR_3->len,
           FUNC_3(VAR_3->data, VAR_3->len));

    VAR_4.status = FUNC_6(VAR_3);
    VAR_4.elem_addr = FUNC_5(VAR_3);
    VAR_4.addr = FUNC_5(VAR_3);
    VAR_4.app_idx = FUNC_5(VAR_3);
    VAR_4.cred_flag = (VAR_4.app_idx & FUNC_0(12));
    VAR_4.app_idx &= FUNC_1(12);
    VAR_4.ttl = FUNC_6(VAR_3);
    VAR_4.period = FUNC_6(VAR_3);
    VAR_4.transmit = FUNC_6(VAR_3);
    if (VAR_3->len >= 4) {
        VAR_4.cid = FUNC_5(VAR_3);
    } else {
        VAR_4.cid = VAR_0;
    }
    VAR_4.mod_id = FUNC_5(VAR_3);

    FUNC_4(VAR_1, VAR_2, &VAR_4, sizeof(struct bt_mesh_cfg_mod_pub_status));
}
