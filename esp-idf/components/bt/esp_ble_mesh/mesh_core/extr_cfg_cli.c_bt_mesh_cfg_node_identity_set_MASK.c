
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef int u16_t ;
struct bt_mesh_msg_ctx {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct bt_mesh_msg_ctx*,int ,int) ;

int FUNC_1(struct bt_mesh_msg_ctx *VAR_2, u16_t VAR_3, u8_t VAR_4)
{
    if (!VAR_2 || !VAR_2->addr || VAR_4 > 0x01) {
        return -VAR_0;
    }
    return FUNC_0(VAR_1, VAR_2, VAR_3, VAR_4);
}
