
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_buf_simple {int dummy; } ;
struct bt_mesh_msg_ctx {int addr; } ;
struct bt_mesh_model {int dummy; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (struct bt_mesh_model*,struct bt_mesh_msg_ctx*,int ) ;

__attribute__((used)) static void FUNC_2(struct bt_mesh_model *VAR_1,
                              struct bt_mesh_msg_ctx *VAR_2,
                              struct net_buf_simple *VAR_3)
{
    FUNC_0("src 0x%04x", VAR_2->addr);

    FUNC_1(VAR_1, VAR_2, VAR_0);
}
