
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int value; int offset; int len; int handle; int auth_req; } ;
struct TYPE_9__ {TYPE_1__ attr_value; } ;
typedef TYPE_3__ tBTA_GATTS_RSP ;
struct TYPE_8__ {int value; int offset; int len; int handle; int auth_req; } ;
struct TYPE_10__ {TYPE_2__ attr_value; } ;
typedef TYPE_4__ esp_gatt_rsp_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;

void FUNC_1(tBTA_GATTS_RSP *VAR_1, esp_gatt_rsp_t *VAR_2)
{
    VAR_1->attr_value.auth_req = VAR_2->attr_value.auth_req;
    VAR_1->attr_value.handle = VAR_2->attr_value.handle;
    VAR_1->attr_value.len = VAR_2->attr_value.len;
    VAR_1->attr_value.offset = VAR_2->attr_value.offset;
    FUNC_0(VAR_1->attr_value.value, VAR_2->attr_value.value, VAR_0);
}
