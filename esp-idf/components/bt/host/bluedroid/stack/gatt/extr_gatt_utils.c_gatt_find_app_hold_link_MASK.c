
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__* app_hold_link; } ;
typedef TYPE_3__ tGATT_TCB ;
typedef int tGATT_IF ;
typedef size_t UINT8 ;
struct TYPE_9__ {TYPE_2__* clcb; } ;
struct TYPE_7__ {TYPE_1__* p_reg; } ;
struct TYPE_6__ {int gatt_if; } ;
typedef int BOOLEAN ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 TYPE_5__ VAR_3 ;

BOOLEAN FUNC_0(tGATT_TCB *VAR_4, UINT8 VAR_5, UINT8 *VAR_6, tGATT_IF *VAR_7)
{
    UINT8 VAR_8;
    BOOLEAN VAR_9 = VAR_0;

    for (VAR_8 = VAR_5; VAR_8 < VAR_1; VAR_8 ++) {
        if (VAR_4->app_hold_link[VAR_8]) {
            *VAR_7 = VAR_3.clcb[VAR_8].p_reg->gatt_if;
            *VAR_6 = VAR_8;
            VAR_9 = VAR_2;
            break;
        }
    }
    return VAR_9;
}
