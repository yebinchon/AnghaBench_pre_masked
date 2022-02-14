
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_buf_simple {int len; int data; } ;
struct bt_mesh_msg_ctx {int addr; int app_idx; int net_idx; } ;
struct bt_mesh_model {int dummy; } ;
struct bt_mesh_cfg_hb_sub_status {void* max; void* min; void* count; void* period; void* dst; void* src; void* status; int member_0; } ;


 int FUNC_0 (char*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct bt_mesh_model*,struct bt_mesh_msg_ctx*,struct bt_mesh_cfg_hb_sub_status*,int) ;
 void* FUNC_3 (struct net_buf_simple*) ;
 void* FUNC_4 (struct net_buf_simple*) ;

__attribute__((used)) static void FUNC_5(struct bt_mesh_model *VAR_0,
                          struct bt_mesh_msg_ctx *VAR_1,
                          struct net_buf_simple *VAR_2)
{
    struct bt_mesh_cfg_hb_sub_status VAR_3 = {0};

    FUNC_0("net_idx 0x%04x app_idx 0x%04x src 0x%04x len %u: %s",
           VAR_1->net_idx, VAR_1->app_idx, VAR_1->addr, VAR_2->len,
           FUNC_1(VAR_2->data, VAR_2->len));

    VAR_3.status = FUNC_4(VAR_2);
    VAR_3.src = FUNC_3(VAR_2);
    VAR_3.dst = FUNC_3(VAR_2);
    VAR_3.period = FUNC_4(VAR_2);
    VAR_3.count = FUNC_4(VAR_2);
    VAR_3.min = FUNC_4(VAR_2);
    VAR_3.max = FUNC_4(VAR_2);

    FUNC_2(VAR_0, VAR_1, &VAR_3, sizeof(struct bt_mesh_cfg_hb_sub_status));
}
