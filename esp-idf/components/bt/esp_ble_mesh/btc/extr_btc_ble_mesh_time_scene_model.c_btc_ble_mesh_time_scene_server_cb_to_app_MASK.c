
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int (* esp_ble_mesh_time_scene_server_cb_t ) (int ,int *) ;
typedef int esp_ble_mesh_time_scene_server_cb_param_t ;
typedef int esp_ble_mesh_time_scene_server_cb_event_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline void FUNC_1(
    esp_ble_mesh_time_scene_server_cb_event_t VAR_1,
    esp_ble_mesh_time_scene_server_cb_param_t *VAR_2)
{
    esp_ble_mesh_time_scene_server_cb_t VAR_3 =
        (esp_ble_mesh_time_scene_server_cb_t)FUNC_0(VAR_0);
    if (VAR_3) {
        VAR_3(VAR_1, VAR_2);
    }
}
