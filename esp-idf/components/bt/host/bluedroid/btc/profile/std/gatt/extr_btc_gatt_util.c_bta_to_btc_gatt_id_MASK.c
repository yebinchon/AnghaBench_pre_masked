
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int uuid; int inst_id; } ;
typedef TYPE_1__ tBTA_GATT_ID ;
struct TYPE_6__ {int uuid; int inst_id; } ;
typedef TYPE_2__ esp_gatt_id_t ;


 int FUNC_0 (int *,int *) ;

void FUNC_1(esp_gatt_id_t *VAR_0, tBTA_GATT_ID *VAR_1)
{
    VAR_0->inst_id = VAR_1->inst_id;
    FUNC_0(&VAR_0->uuid, &VAR_1->uuid);
}
