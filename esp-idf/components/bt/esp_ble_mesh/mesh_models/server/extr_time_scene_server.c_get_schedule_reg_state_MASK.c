
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8_t ;
typedef int u64_t ;
struct schedule_register {scalar_t__ action; scalar_t__ trans_time; scalar_t__ second; scalar_t__ day_of_week; scalar_t__ hour; scalar_t__ minute; scalar_t__ month; scalar_t__ day; scalar_t__ year; } ;
struct bt_mesh_scheduler_state {struct schedule_register* schedules; } ;



__attribute__((used)) static u64_t FUNC_0(struct bt_mesh_scheduler_state *VAR_0, u8_t VAR_1)
{
    struct schedule_register *VAR_2 = &VAR_0->schedules[VAR_1];
    u64_t VAR_3;

    VAR_3 = ((u64_t)(VAR_2->year) << 4) | VAR_1;
    VAR_3 |= ((u64_t)(VAR_2->day) << 23) | ((u64_t)(VAR_2->month) << 11);
    VAR_3 |= ((u64_t)(VAR_2->minute) << 33) | ((u64_t)(VAR_2->hour) << 28);
    VAR_3 |= ((u64_t)(VAR_2->day_of_week) << 45) | ((u64_t)(VAR_2->second) << 39);
    VAR_3 |= ((u64_t)(VAR_2->trans_time) << 56) | ((u64_t)(VAR_2->action) << 52);

    return VAR_3;
}
