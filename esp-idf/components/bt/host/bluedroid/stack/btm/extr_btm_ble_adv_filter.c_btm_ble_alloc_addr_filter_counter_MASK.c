
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int in_use; int bd_addr; } ;
typedef TYPE_1__ tBTM_BLE_PF_COUNT ;
typedef scalar_t__ UINT8 ;
struct TYPE_7__ {TYPE_1__* p_addr_filter_count; } ;
struct TYPE_6__ {scalar_t__ max_filter; } ;
typedef int BD_ADDR ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_4 ;

tBTM_BLE_PF_COUNT *FUNC_2(BD_ADDR VAR_5)
{
    UINT8 VAR_6;
    tBTM_BLE_PF_COUNT *VAR_7 = &VAR_2.p_addr_filter_count[1];

    for (VAR_6 = 0; VAR_6 < VAR_3.max_filter; VAR_6 ++, VAR_7 ++) {
        if (FUNC_0(VAR_4, VAR_7->bd_addr, VAR_0) == 0) {
            FUNC_1(VAR_7->bd_addr, VAR_5, VAR_0);
            VAR_7->in_use = VAR_1;
            return VAR_7;
        }
    }
    return ((void*)0);
}
