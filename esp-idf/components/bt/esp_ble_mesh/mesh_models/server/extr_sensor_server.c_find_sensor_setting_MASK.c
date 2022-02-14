
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8_t ;
typedef scalar_t__ u16_t ;
struct sensor_setting {scalar_t__ property_id; } ;
struct bt_mesh_sensor_state {scalar_t__ sensor_property_id; size_t setting_count; struct sensor_setting* settings; } ;
struct bt_mesh_sensor_setup_srv {size_t state_count; struct bt_mesh_sensor_state* states; } ;
struct bt_mesh_model {struct bt_mesh_sensor_setup_srv* user_data; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static struct sensor_setting *FUNC_0(struct bt_mesh_model *VAR_2,
        u16_t VAR_3, u16_t VAR_4)
{
    struct bt_mesh_sensor_setup_srv *VAR_5 = VAR_2->user_data;
    struct bt_mesh_sensor_state *VAR_6 = ((void*)0);
    struct sensor_setting *VAR_7 = ((void*)0);
    u8_t VAR_8, VAR_9;

    for (VAR_8 = 0U; VAR_8 < VAR_5->state_count; VAR_8++) {
        VAR_6 = &VAR_5->states[VAR_8];
        if (VAR_6->sensor_property_id != VAR_0 &&
                VAR_6->sensor_property_id == VAR_3) {
            for (VAR_9 = 0U; VAR_9 < VAR_6->setting_count; VAR_9++) {
                VAR_7 = &VAR_6->settings[VAR_9];
                if (VAR_7->property_id != VAR_1 &&
                        VAR_7->property_id == VAR_4) {
                    return VAR_7;
                }
            }
        }
    }

    return ((void*)0);
}
