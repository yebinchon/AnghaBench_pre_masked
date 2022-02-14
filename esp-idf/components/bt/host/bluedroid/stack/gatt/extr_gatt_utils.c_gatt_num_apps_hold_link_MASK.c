
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* app_hold_link; } ;
typedef TYPE_1__ tGATT_TCB ;
typedef size_t UINT8 ;


 size_t VAR_0 ;
 int FUNC_0 (char*,size_t) ;

UINT8 FUNC_1(tGATT_TCB *VAR_1)
{
    UINT8 VAR_2, VAR_3 = 0;

    for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2 ++) {
        if (VAR_1->app_hold_link[VAR_2]) {
            VAR_3 ++;
        }
    }

    FUNC_0("gatt_num_apps_hold_link   num=%d", VAR_3);
    return VAR_3;
}
