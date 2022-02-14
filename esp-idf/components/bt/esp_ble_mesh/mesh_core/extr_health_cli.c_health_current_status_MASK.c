
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef int u16_t ;
struct net_buf_simple {int len; int data; } ;
struct bt_mesh_msg_ctx {int addr; int app_idx; int net_idx; } ;
struct bt_mesh_model {int dummy; } ;
typedef int bt_mesh_client_node_t ;


 int FUNC_0 (char*,int ,int ,int ,...) ;
 int FUNC_1 (int ,int ) ;
 int * FUNC_2 (struct bt_mesh_model*,struct bt_mesh_msg_ctx*,struct net_buf_simple*,int) ;
 int FUNC_3 (struct net_buf_simple*) ;
 int FUNC_4 (struct net_buf_simple*) ;

__attribute__((used)) static void FUNC_5(struct bt_mesh_model *VAR_0,
                                  struct bt_mesh_msg_ctx *VAR_1,
                                  struct net_buf_simple *VAR_2)
{
    bt_mesh_client_node_t *VAR_3 = ((void*)0);
    u8_t VAR_4;
    u16_t VAR_5;

    FUNC_0("net_idx 0x%04x app_idx 0x%04x src 0x%04x len %u: %s",
           VAR_1->net_idx, VAR_1->app_idx, VAR_1->addr, VAR_2->len,
           FUNC_1(VAR_2->data, VAR_2->len));


    if (!(VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2, 1))) {
        return;
    }

    VAR_4 = FUNC_4(VAR_2);
    VAR_5 = FUNC_3(VAR_2);

    FUNC_0("Test ID 0x%02x Company ID 0x%04x Fault Count %u",
           VAR_4, VAR_5, VAR_2->len);
}
