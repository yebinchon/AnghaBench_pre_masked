
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* app_hold_link; } ;
typedef TYPE_1__ tGATT_TCB ;
typedef scalar_t__ tGATT_IF ;
typedef size_t UINT8 ;
typedef scalar_t__ BOOLEAN ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,scalar_t__,size_t,scalar_t__,scalar_t__) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_2 ;

void FUNC_2 (tGATT_IF VAR_3, tGATT_TCB *VAR_4, BOOLEAN VAR_5)
{
    UINT8 VAR_6;
    BOOLEAN VAR_7 = VAR_0;

    if (VAR_4 == ((void*)0)) {
        FUNC_1("gatt_update_app_hold_link_status p_tcb=NULL");
        return;
    }


    for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
        if (VAR_4->app_hold_link[VAR_6] == VAR_3) {
            VAR_7 = VAR_2;
            if (!VAR_5) {
                VAR_4->app_hold_link[VAR_6] = 0;
                break;
            }
        }
    }

    if (!VAR_7 && VAR_5) {
        for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
            if (VAR_4->app_hold_link[VAR_6] == 0) {
                VAR_4->app_hold_link[VAR_6] = VAR_3;
                VAR_7 = VAR_2;
                break;
            }
        }
    }

    FUNC_0("gatt_update_app_hold_link_status found=%d[1-found] idx=%d gatt_if=%d is_add=%d", VAR_7, VAR_6, VAR_3, VAR_5);

}
