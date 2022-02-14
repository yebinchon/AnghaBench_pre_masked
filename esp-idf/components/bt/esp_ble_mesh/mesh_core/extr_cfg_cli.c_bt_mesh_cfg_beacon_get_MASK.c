
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bt_mesh_msg_ctx {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct bt_mesh_msg_ctx*,int ) ;

int FUNC_1(struct bt_mesh_msg_ctx *VAR_2)
{
    if (!VAR_2 || !VAR_2->addr) {
        return -VAR_0;
    }
    return FUNC_0(VAR_2, VAR_1);
}
