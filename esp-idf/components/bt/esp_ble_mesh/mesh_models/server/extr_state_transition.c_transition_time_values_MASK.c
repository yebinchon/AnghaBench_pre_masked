
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int u8_t ;
struct bt_mesh_state_transition {unsigned int trans_time; unsigned int delay; int quo_tt; int total_duration; int counter; } ;


 int FUNC_0 (struct bt_mesh_state_transition*) ;

__attribute__((used)) static void FUNC_1(struct bt_mesh_state_transition *VAR_0,
                                   u8_t VAR_1, u8_t VAR_2)
{
    VAR_0->trans_time = VAR_1;
    VAR_0->delay = VAR_2;

    if (VAR_1 == 0U) {
        return;
    }

    FUNC_0(VAR_0);
    VAR_0->quo_tt = VAR_0->total_duration / VAR_0->counter;
}
