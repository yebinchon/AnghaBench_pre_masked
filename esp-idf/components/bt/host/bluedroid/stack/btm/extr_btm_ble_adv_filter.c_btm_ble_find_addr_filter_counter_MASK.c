
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int bd_addr; scalar_t__ in_use; } ;
typedef TYPE_1__ tBTM_BLE_PF_COUNT ;
struct TYPE_8__ {int bda; } ;
typedef TYPE_2__ tBLE_BD_ADDR ;
typedef scalar_t__ UINT8 ;
struct TYPE_10__ {TYPE_1__* p_addr_filter_count; } ;
struct TYPE_9__ {scalar_t__ max_filter; } ;


 int VAR_0 ;
 TYPE_6__ VAR_1 ;
 TYPE_3__ VAR_2 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;

tBTM_BLE_PF_COUNT *FUNC_1(tBLE_BD_ADDR *VAR_3)
{
    UINT8 VAR_4;
    tBTM_BLE_PF_COUNT *VAR_5 = &VAR_1.p_addr_filter_count[1];

    if (VAR_3 == ((void*)0)) {
        return &VAR_1.p_addr_filter_count[0];
    }

    for (VAR_4 = 0; VAR_4 < VAR_2.max_filter; VAR_4 ++, VAR_5 ++) {
        if (VAR_5->in_use &&
                FUNC_0(VAR_3->bda, VAR_5->bd_addr, VAR_0) == 0) {
            return VAR_5;
        }
    }
    return ((void*)0);
}
