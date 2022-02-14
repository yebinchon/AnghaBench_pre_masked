
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int id; int is_primary; } ;
typedef TYPE_1__ tBTA_GATT_SRVC_ID ;
struct TYPE_6__ {int id; int is_primary; } ;
typedef TYPE_2__ esp_gatt_srvc_id_t ;


 int FUNC_0 (int *,int *) ;

void FUNC_1(tBTA_GATT_SRVC_ID *VAR_0, esp_gatt_srvc_id_t *VAR_1)
{
    VAR_0->is_primary = VAR_1->is_primary;
    FUNC_0(&VAR_0->id, &VAR_1->id);
}
