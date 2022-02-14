
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_5__ {scalar_t__ unicast; scalar_t__ elem_num; } ;
typedef TYPE_1__ esp_ble_mesh_node_info_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static esp_ble_mesh_node_info_t *FUNC_2(uint16_t VAR_1)
{
    int VAR_2;

    if (!FUNC_1(VAR_1)) {
        return ((void*)0);
    }

    for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++) {
        if (VAR_0[VAR_2].unicast <= VAR_1 &&
                VAR_0[VAR_2].unicast + VAR_0[VAR_2].elem_num > VAR_1) {
            return &VAR_0[VAR_2];
        }
    }

    return ((void*)0);
}
