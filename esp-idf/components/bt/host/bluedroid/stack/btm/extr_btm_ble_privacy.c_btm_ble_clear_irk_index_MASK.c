
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT8 ;
struct TYPE_4__ {int* irk_list_mask; } ;
struct TYPE_6__ {TYPE_1__ ble_ctr_cb; } ;
struct TYPE_5__ {int (* get_ble_resolving_list_max_size ) () ;} ;


 TYPE_3__ VAR_0 ;
 TYPE_2__* FUNC_0 () ;
 int FUNC_1 () ;

void FUNC_2(UINT8 VAR_1)
{
    UINT8 VAR_2;
    UINT8 VAR_3;

    if (VAR_1 < FUNC_0()->get_ble_resolving_list_max_size()) {
        VAR_2 = VAR_1 / 8;
        VAR_3 = VAR_1 % 8;
        VAR_0.ble_ctr_cb.irk_list_mask[VAR_2] &= (~(1 << VAR_3));
    }
}
