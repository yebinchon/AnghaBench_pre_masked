
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8_t ;
typedef scalar_t__ u16_t ;
struct bt_mesh_model {struct bt_mesh_gen_manu_prop_srv* user_data; } ;
struct bt_mesh_generic_property {scalar_t__ id; } ;
struct bt_mesh_gen_manu_prop_srv {size_t property_count; struct bt_mesh_generic_property* properties; } ;



struct bt_mesh_generic_property *FUNC_0(struct bt_mesh_model *VAR_0,
        u16_t VAR_1)
{
    struct bt_mesh_gen_manu_prop_srv *VAR_2 = VAR_0->user_data;
    u8_t VAR_3;

    for (VAR_3 = 0U; VAR_3 < VAR_2->property_count; VAR_3++) {
        if (VAR_2->properties[VAR_3].id == VAR_1) {
            return &VAR_2->properties[VAR_3];
        }
    }

    return ((void*)0);
}
