
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int bd_addr; scalar_t__ in_use; } ;
typedef TYPE_1__ tBTM_BLE_PF_COUNT ;
struct TYPE_8__ {int bda; } ;
typedef TYPE_2__ tBLE_BD_ADDR ;
typedef scalar_t__ UINT8 ;
struct TYPE_10__ {TYPE_1__* p_addr_filter_count; } ;
struct TYPE_9__ {scalar_t__ max_filter; } ;
typedef int BOOLEAN ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_6__ VAR_4 ;
 TYPE_4__ VAR_5 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

BOOLEAN FUNC_2(tBLE_BD_ADDR *VAR_6, UINT8 VAR_7)
{
    UINT8 VAR_8;
    tBTM_BLE_PF_COUNT *VAR_9 = &VAR_4.p_addr_filter_count[1];
    BOOLEAN VAR_10 = VAR_2;

    if (VAR_1 == VAR_7 && ((void*)0) == VAR_6) {
        FUNC_1(&VAR_4.p_addr_filter_count[0], 0, sizeof(tBTM_BLE_PF_COUNT));
    }

    for (VAR_8 = 0; VAR_8 < VAR_5.max_filter; VAR_8 ++, VAR_9 ++) {
        if ((VAR_9->in_use) && (((void*)0) == VAR_6 ||
                                        (((void*)0) != VAR_6 &&
                                         FUNC_0(VAR_6->bda, VAR_9->bd_addr, VAR_0) == 0))) {
            VAR_10 = VAR_3;
            FUNC_1(VAR_9, 0, sizeof(tBTM_BLE_PF_COUNT));

            if (((void*)0) != VAR_6) {
                break;
            }
        }
    }
    return VAR_10;
}
