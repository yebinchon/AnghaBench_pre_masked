
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8_t ;
struct bt_mesh_state_transition {int remain_time; int trans_time; int total_duration; int start_timestamp; scalar_t__ just_started; } ;
typedef int s64_t ;
typedef int s32_t ;


 int FUNC_0 () ;

void FUNC_1(struct bt_mesh_state_transition *VAR_0)
{
    u8_t VAR_1, VAR_2;
    s32_t VAR_3;
    s64_t VAR_4;

    if (VAR_0->just_started) {
        VAR_0->remain_time = VAR_0->trans_time;
    } else {
        VAR_4 = FUNC_0();
        VAR_3 = VAR_0->total_duration -
                             (VAR_4 - VAR_0->start_timestamp);
        if (VAR_3 > 620000) {

            VAR_2 = 0x03;
            VAR_1 = VAR_3 / 600000;
        } else if (VAR_3 > 62000) {

            VAR_2 = 0x02;
            VAR_1 = VAR_3 / 10000;
        } else if (VAR_3 > 6200) {

            VAR_2 = 0x01;
            VAR_1 = VAR_3 / 1000;
        } else if (VAR_3 > 0) {

            VAR_2 = 0x00;
            VAR_1 = VAR_3 / 100;
        } else {
            VAR_2 = 0x00;
            VAR_1 = 0x00;
        }

        VAR_0->remain_time = (VAR_2 << 6) | VAR_1;
    }
}
