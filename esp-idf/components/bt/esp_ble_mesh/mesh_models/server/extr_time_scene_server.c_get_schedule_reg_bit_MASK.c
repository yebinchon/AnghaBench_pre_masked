
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8_t ;
typedef int u16_t ;
struct bt_mesh_scheduler_state {size_t schedule_count; TYPE_1__* schedules; } ;
struct TYPE_2__ {scalar_t__ in_use; } ;



__attribute__((used)) static u16_t FUNC_0(struct bt_mesh_scheduler_state *VAR_0)
{
    u16_t VAR_1 = 0;
    u8_t VAR_2;

    for (VAR_2 = 0U; VAR_2 < VAR_0->schedule_count; VAR_2++) {
        if (VAR_0->schedules[VAR_2].in_use) {
            VAR_1 |= (1 << VAR_2);
        }
    }

    return VAR_1;
}
