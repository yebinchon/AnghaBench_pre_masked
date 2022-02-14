
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int esp_err_t ;
struct TYPE_5__ {scalar_t__* groups; } ;
typedef TYPE_1__ esp_ble_mesh_model_t ;
typedef int esp_ble_mesh_elem_t ;
struct TYPE_6__ {int element_count; int * elements; } ;
typedef TYPE_2__ esp_ble_mesh_comp_t ;


 int FUNC_0 (scalar_t__*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_2 (int *,scalar_t__) ;
 TYPE_2__* FUNC_3 () ;

esp_err_t FUNC_4(uint16_t VAR_4, uint16_t VAR_5)
{
    const esp_ble_mesh_comp_t *VAR_6 = ((void*)0);
    esp_ble_mesh_elem_t *VAR_7 = ((void*)0);
    esp_ble_mesh_model_t *VAR_8 = ((void*)0);
    int VAR_9, VAR_10;

    if (!FUNC_1(VAR_5)) {
        return VAR_1;
    }

    VAR_6 = FUNC_3();
    if (VAR_6 == ((void*)0)) {
        return VAR_2;
    }

    for (VAR_9 = 0; VAR_9 < VAR_6->element_count; VAR_9++) {
        VAR_7 = &VAR_6->elements[VAR_9];

        VAR_8 = FUNC_2(VAR_7, VAR_4);
        if (VAR_8 == ((void*)0)) {
            continue;
        }
        for (VAR_10 = 0; VAR_10 < FUNC_0(VAR_8->groups); VAR_10++) {
            if (VAR_8->groups[VAR_10] == VAR_5) {
                VAR_8->groups[VAR_10] = VAR_0;
                break;
            }
        }
    }

    return VAR_3;
}
