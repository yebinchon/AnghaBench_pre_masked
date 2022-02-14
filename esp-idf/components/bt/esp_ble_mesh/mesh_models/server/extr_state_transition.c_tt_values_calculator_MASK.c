
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
struct bt_mesh_state_transition {int trans_time; int total_duration; float counter; } ;


 float VAR_0 ;

__attribute__((used)) static void FUNC_0(struct bt_mesh_state_transition *VAR_1)
{
    u8_t VAR_2, VAR_3;

    VAR_3 = (VAR_1->trans_time >> 6);
    VAR_2 = (VAR_1->trans_time & 0x3F);

    switch (VAR_3) {
    case 0:
        VAR_1->total_duration = VAR_2 * 100;
        break;
    case 1:
        VAR_1->total_duration = VAR_2 * 1000;
        break;
    case 2:
        VAR_1->total_duration = VAR_2 * 10000;
        break;
    case 3:
        VAR_1->total_duration = VAR_2 * 600000;
        break;
    }

    VAR_1->counter = ((float) VAR_1->total_duration / 100);

    if (VAR_1->counter > VAR_0) {
        VAR_1->counter = VAR_0;
    }
}
