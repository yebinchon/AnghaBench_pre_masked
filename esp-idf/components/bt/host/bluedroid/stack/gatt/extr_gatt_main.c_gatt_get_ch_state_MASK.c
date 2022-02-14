
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ch_state; } ;
typedef TYPE_1__ tGATT_TCB ;
typedef int tGATT_CH_STATE ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;

tGATT_CH_STATE FUNC_1(tGATT_TCB *VAR_1)
{
    tGATT_CH_STATE VAR_2 = VAR_0;
    if (VAR_1) {
        FUNC_0 ("gatt_get_ch_state: ch_state=%d", VAR_1->ch_state);
        VAR_2 = VAR_1->ch_state;
    }
    return VAR_2;
}
