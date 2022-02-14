
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16_t ;
struct bt_mesh_msg_ctx {int addr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,struct bt_mesh_msg_ctx*,scalar_t__,scalar_t__,scalar_t__) ;

int FUNC_1(struct bt_mesh_msg_ctx *VAR_3, u16_t VAR_4,
                                u16_t VAR_5, u16_t VAR_6)
{
    if (!VAR_3 || !VAR_3->addr || VAR_6 == VAR_0) {
        return -VAR_1;
    }
    return FUNC_0(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);
}
