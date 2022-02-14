
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef size_t uint32_t ;
struct TYPE_4__ {scalar_t__ noti_attribute_id; scalar_t__ attribute_len; } ;
typedef TYPE_1__ esp_noti_attr_list_t ;
struct TYPE_5__ {int contol_point_handle; int conn_id; int gattc_if; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int ,int ,int ,size_t,scalar_t__*,int ,int ) ;
 TYPE_2__* VAR_5 ;
 int FUNC_1 (scalar_t__*,scalar_t__*,scalar_t__) ;

void FUNC_2(uint8_t *VAR_6, uint8_t VAR_7, esp_noti_attr_list_t *VAR_8)
{
    uint8_t VAR_9[600] = {0};
    uint32_t VAR_10 = 0;
    VAR_9[0] = VAR_0;
    VAR_10 ++;
    FUNC_1(&VAR_9[VAR_10], VAR_6, VAR_3);
    VAR_10 += VAR_3;
    while(VAR_7 > 0) {
        VAR_9[VAR_10 ++] = VAR_8->noti_attribute_id;
        if (VAR_8->attribute_len > 0) {
            VAR_9[VAR_10 ++] = VAR_8->attribute_len;
            VAR_9[VAR_10 ++] = (VAR_8->attribute_len << 8);
        }
        VAR_8 ++;
        VAR_7 --;
    }

    FUNC_0( VAR_5[VAR_4].gattc_if,
                              VAR_5[VAR_4].conn_id,
                              VAR_5[VAR_4].contol_point_handle,
                              VAR_10,
                              VAR_9,
                              VAR_2,
                              VAR_1);
}
