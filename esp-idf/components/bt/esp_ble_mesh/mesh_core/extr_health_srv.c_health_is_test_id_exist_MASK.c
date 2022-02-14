
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8_t ;
struct bt_mesh_model {struct bt_mesh_health_srv* user_data; } ;
struct TYPE_2__ {size_t id_count; size_t* test_ids; } ;
struct bt_mesh_health_srv {TYPE_1__ test; } ;



__attribute__((used)) static bool FUNC_0(struct bt_mesh_model *VAR_0, u8_t VAR_1)
{
    struct bt_mesh_health_srv *VAR_2 = VAR_0->user_data;
    u8_t VAR_3;

    for (VAR_3 = 0U; VAR_3 < VAR_2->test.id_count; VAR_3++) {
        if (VAR_2->test.test_ids[VAR_3] == VAR_1) {
            return 1;
        }
    }

    return 0;
}
