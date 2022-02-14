
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ handle; scalar_t__ in_use; } ;
typedef TYPE_1__ tL2C_LCB ;
typedef int UINT8 ;
struct TYPE_4__ {int is_ble_connecting; TYPE_1__* lcb_pool; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,int ) ;
 TYPE_2__ VAR_3 ;

void FUNC_1 (void)
{
    int VAR_4;
    tL2C_LCB *VAR_5 = &VAR_3.lcb_pool[0];

    for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++, VAR_5++) {
        if ((VAR_5->in_use) && (VAR_5->handle != VAR_1)) {
            FUNC_0 (VAR_5->handle, (UINT8) - 1);
        }
    }

    VAR_3.is_ble_connecting = VAR_0;

}
