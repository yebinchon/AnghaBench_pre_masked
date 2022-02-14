
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint16_t ;
typedef int tBT_UUID ;
struct TYPE_8__ {int uuid; int properties; int end_handle; int start_handle; int attribute_handle; int type; } ;
typedef TYPE_2__ esp_gattc_db_elem_t ;
typedef int esp_gatt_status_t ;
struct TYPE_7__ {int uu; } ;
struct TYPE_9__ {TYPE_1__ uuid; int properties; int end_handle; int start_handle; int id; int type; } ;
typedef TYPE_3__ btgatt_db_element_t ;


 int FUNC_0 (int,int,int,TYPE_3__**,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_3__*) ;

esp_gatt_status_t FUNC_4(uint16_t VAR_2, uint16_t VAR_3, uint16_t VAR_4,
                                       esp_gattc_db_elem_t *VAR_5, uint16_t *VAR_6)
{
    btgatt_db_element_t *VAR_7 = ((void*)0);
    int VAR_8 = 0;
    tBT_UUID VAR_9;
    uint16_t VAR_10 = 0;
    FUNC_0(VAR_2, VAR_3, VAR_4, &VAR_7, &VAR_8);

    if (VAR_8 == 0) {
        if (VAR_7) {
            FUNC_3(VAR_7);
        }
        *VAR_6 = 0;
        return VAR_0;
    }

    VAR_10 = (*VAR_6 > VAR_8) ? VAR_8 : (*VAR_6);
    for (int VAR_11 = 0; VAR_11 < VAR_10; VAR_11++) {
        VAR_5[VAR_11].type = VAR_7[VAR_11].type;
        VAR_5[VAR_11].attribute_handle = VAR_7[VAR_11].id;
        VAR_5[VAR_11].start_handle = VAR_7[VAR_11].start_handle;
        VAR_5[VAR_11].end_handle = VAR_7[VAR_11].end_handle;
        VAR_5[VAR_11].properties = VAR_7[VAR_11].properties;
        FUNC_2(&VAR_9, VAR_7[VAR_11].uuid.uu);
        FUNC_1(&VAR_5[VAR_11].uuid, &VAR_9);
    }
    *VAR_6 = VAR_10;

    if (VAR_7) {
        FUNC_3(VAR_7);
    }
    return VAR_1;
}
