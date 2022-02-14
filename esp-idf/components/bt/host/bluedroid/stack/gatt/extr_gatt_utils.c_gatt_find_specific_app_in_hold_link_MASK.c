
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* app_hold_link; } ;
typedef TYPE_1__ tGATT_TCB ;
typedef scalar_t__ tGATT_IF ;
typedef size_t UINT8 ;
typedef int BOOLEAN ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;

BOOLEAN FUNC_0(tGATT_TCB *VAR_3, tGATT_IF VAR_4)
{
    UINT8 VAR_5;
    BOOLEAN VAR_6 = VAR_0;

    for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5 ++) {
        if (VAR_3->app_hold_link[VAR_5] && VAR_3->app_hold_link[VAR_5] == VAR_4) {
            VAR_6 = VAR_2;
            break;
        }
    }
    return VAR_6;
}
