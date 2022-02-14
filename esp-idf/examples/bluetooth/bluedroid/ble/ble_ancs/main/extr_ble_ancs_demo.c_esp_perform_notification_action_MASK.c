
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef size_t uint32_t ;
struct TYPE_2__ {int contol_point_handle; int conn_id; int gattc_if; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (int ,int ,int ,size_t,int *,int ,int ) ;
 TYPE_1__* VAR_5 ;
 int FUNC_1 (int *,int *,scalar_t__) ;

void FUNC_2(uint8_t *VAR_6, uint8_t VAR_7)
{
    uint8_t VAR_8[600] = {0};
    uint32_t VAR_9 = 0;
    VAR_8[0] = VAR_0;
    VAR_9 ++;
    FUNC_1(&VAR_8[VAR_9], VAR_6, VAR_3);
    VAR_9 += VAR_3;
    VAR_8[VAR_9] = VAR_7;
    VAR_9 ++;
    FUNC_0( VAR_5[VAR_4].gattc_if,
                              VAR_5[VAR_4].conn_id,
                              VAR_5[VAR_4].contol_point_handle,
                              VAR_9,
                              VAR_8,
                              VAR_2,
                              VAR_1);
}
