
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_9__ ;
typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_18__ {int p_val; } ;
typedef TYPE_8__ tBTA_BLE_PROP_ELEM ;
struct TYPE_19__ {int p_sol_service_128b; TYPE_7__* p_sol_service_32b; TYPE_6__* p_sol_services; TYPE_5__* p_service_32b; int p_services_128b; TYPE_4__* p_service_data; TYPE_3__* p_services; TYPE_2__* p_proprietary; TYPE_1__* p_manu; } ;
typedef TYPE_9__ tBTA_BLE_ADV_DATA ;
struct TYPE_17__ {int p_uuid; } ;
struct TYPE_16__ {int p_uuid; } ;
struct TYPE_15__ {int p_uuid; } ;
struct TYPE_14__ {int p_val; } ;
struct TYPE_13__ {int p_uuid; } ;
struct TYPE_12__ {TYPE_8__* p_elem; int num_elem; } ;
struct TYPE_11__ {int p_val; } ;


 int FUNC_0 (void**) ;

__attribute__((used)) static void FUNC_1(tBTA_BLE_ADV_DATA *VAR_0)
{
    if (VAR_0 == ((void*)0)) {
        return;
    }


    if (VAR_0->p_manu != ((void*)0)) {
        FUNC_0((void **) &VAR_0->p_manu->p_val);
        FUNC_0((void **) &VAR_0->p_manu);
    }


    if (VAR_0->p_proprietary != ((void*)0)) {
        int VAR_1 = 0;
        tBTA_BLE_PROP_ELEM *VAR_2 = VAR_0->p_proprietary->p_elem;
        while (VAR_1++ != VAR_0->p_proprietary->num_elem
                && VAR_2) {
            FUNC_0((void **) &VAR_2->p_val);
            ++VAR_2;
        }

        FUNC_0((void **) &VAR_0->p_proprietary->p_elem);
        FUNC_0((void **) &VAR_0->p_proprietary);
    }


    if (VAR_0->p_services != ((void*)0)) {
        FUNC_0((void **) &VAR_0->p_services->p_uuid);
        FUNC_0((void **) &VAR_0->p_services);
    }


    if (VAR_0->p_service_data != ((void*)0)) {
        FUNC_0((void **) &VAR_0->p_service_data->p_val);
        FUNC_0((void **) &VAR_0->p_service_data);
    }

    FUNC_0((void **) &VAR_0->p_services_128b);

    if (VAR_0->p_service_32b != ((void*)0)) {
        FUNC_0((void **) &VAR_0->p_service_32b->p_uuid);
        FUNC_0((void **) &VAR_0->p_service_32b);
    }

    if (VAR_0->p_sol_services != ((void*)0)) {
        FUNC_0((void **) &VAR_0->p_sol_services->p_uuid);
        FUNC_0((void **) &VAR_0->p_sol_services);
    }

    if (VAR_0->p_sol_service_32b != ((void*)0)) {
        FUNC_0((void **) &VAR_0->p_sol_service_32b->p_uuid);
        FUNC_0((void **) &VAR_0->p_sol_service_32b);
    }

    FUNC_0((void **) &VAR_0->p_sol_service_128b);
}
