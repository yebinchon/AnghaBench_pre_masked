
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
typedef void* u16_t ;
struct bt_mesh_last_msg_info {int timestamp; void* dst; void* src; int tid; } ;
typedef int s64_t ;


 int FUNC_0 (void*) ;

void FUNC_1(struct bt_mesh_last_msg_info *VAR_0,
                                    u8_t VAR_1, u16_t VAR_2, u16_t VAR_3, s64_t *VAR_4)
{

    if (!FUNC_0(VAR_3)) {
        return;
    }

    VAR_0->tid = VAR_1;
    VAR_0->src = VAR_2;
    VAR_0->dst = VAR_3;
    VAR_0->timestamp = *VAR_4;
    return;
}
