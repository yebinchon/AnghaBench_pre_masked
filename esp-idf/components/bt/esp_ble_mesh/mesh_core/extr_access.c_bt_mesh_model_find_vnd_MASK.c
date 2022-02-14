
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8_t ;
typedef scalar_t__ u16_t ;
struct TYPE_2__ {scalar_t__ company; scalar_t__ id; } ;
struct bt_mesh_model {TYPE_1__ vnd; } ;
struct bt_mesh_elem {size_t vnd_model_count; struct bt_mesh_model* vnd_models; } ;



struct bt_mesh_model *FUNC_0(struct bt_mesh_elem *VAR_0,
        u16_t VAR_1, u16_t VAR_2)
{
    u8_t VAR_3;

    for (VAR_3 = 0U; VAR_3 < VAR_0->vnd_model_count; VAR_3++) {
        if (VAR_0->vnd_models[VAR_3].vnd.company == VAR_1 &&
                VAR_0->vnd_models[VAR_3].vnd.id == VAR_2) {
            return &VAR_0->vnd_models[VAR_3];
        }
    }

    return ((void*)0);
}
