
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8_t ;
struct bt_mesh_model {struct bt_mesh_health_srv* user_data; } ;
struct TYPE_2__ {scalar_t__* curr_faults; } ;
struct bt_mesh_health_srv {TYPE_1__ test; } ;


 size_t FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static u8_t FUNC_1(struct bt_mesh_model *VAR_1)
{
    struct bt_mesh_health_srv *VAR_2 = VAR_1->user_data;
    u8_t VAR_3 = 0;
    size_t VAR_4;

    for (VAR_4 = 0U; VAR_4 < FUNC_0(VAR_2->test.curr_faults); VAR_4++) {
        if (VAR_2->test.curr_faults[VAR_4] != VAR_0) {
            VAR_3++;
        }
    }

    return VAR_3;
}
