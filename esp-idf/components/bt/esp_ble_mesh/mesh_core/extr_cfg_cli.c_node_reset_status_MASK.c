
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_buf_simple {int len; int data; } ;
struct bt_mesh_msg_ctx {int addr; int app_idx; int net_idx; } ;
struct bt_mesh_model {int dummy; } ;


 int FUNC_0 (char*,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct bt_mesh_model*,struct bt_mesh_msg_ctx*,int *,int ) ;

__attribute__((used)) static void FUNC_3(struct bt_mesh_model *VAR_0,
                              struct bt_mesh_msg_ctx *VAR_1,
                              struct net_buf_simple *VAR_2)
{
    FUNC_0("net_idx 0x%04x app_idx 0x%04x src 0x%04x len %u: %s",
           VAR_1->net_idx, VAR_1->app_idx, VAR_1->addr, VAR_2->len,
           FUNC_1(VAR_2->data, VAR_2->len));

    FUNC_2(VAR_0, VAR_1, ((void*)0), 0);
}
