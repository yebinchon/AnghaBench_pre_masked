
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8_t ;
typedef scalar_t__ u16_t ;
struct bt_mesh_model {scalar_t__ id; } ;
struct bt_mesh_elem {size_t model_count; struct bt_mesh_model* models; } ;



struct bt_mesh_model *FUNC_0(struct bt_mesh_elem *VAR_0,
        u16_t VAR_1)
{
    u8_t VAR_2;

    for (VAR_2 = 0U; VAR_2 < VAR_0->model_count; VAR_2++) {
        if (VAR_0->models[VAR_2].id == VAR_1) {
            return &VAR_0->models[VAR_2];
        }
    }

    return ((void*)0);
}
