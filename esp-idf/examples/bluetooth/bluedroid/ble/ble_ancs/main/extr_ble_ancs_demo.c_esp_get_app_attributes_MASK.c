
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint8_t ;
typedef size_t uint32_t ;
typedef size_t uint16_t ;
struct TYPE_2__ {int contol_point_handle; int conn_id; int gattc_if; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int ,int ,int ,size_t,size_t*,int ,int ) ;
 TYPE_1__* VAR_4 ;
 int FUNC_1 (size_t*,size_t*,size_t) ;

void FUNC_2(uint8_t *VAR_5, uint16_t VAR_6, uint8_t VAR_7, uint8_t *VAR_8)
{
    uint8_t VAR_9[600] = {0};
    uint32_t VAR_10 = 0;
    VAR_9[0] = VAR_0;
    VAR_10 ++;
    FUNC_1(&VAR_9[VAR_10], VAR_5, VAR_6);
    VAR_10 += VAR_6;
    FUNC_1(&VAR_9[VAR_10], VAR_8, VAR_7);
    VAR_10 += VAR_7;

    FUNC_0( VAR_4[VAR_3].gattc_if,
                              VAR_4[VAR_3].conn_id,
                              VAR_4[VAR_3].contol_point_handle,
                              VAR_10,
                              VAR_9,
                              VAR_2,
                              VAR_1);
}
