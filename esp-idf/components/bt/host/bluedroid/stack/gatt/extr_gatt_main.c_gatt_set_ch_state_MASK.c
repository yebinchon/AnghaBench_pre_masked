
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ch_state; } ;
typedef TYPE_1__ tGATT_TCB ;
typedef int tGATT_CH_STATE ;


 int FUNC_0 (char*,int ,int ) ;

void FUNC_1(tGATT_TCB *VAR_0, tGATT_CH_STATE VAR_1)
{
    if (VAR_0) {
        FUNC_0 ("gatt_set_ch_state: old=%d new=%d", VAR_0->ch_state, VAR_1);
        VAR_0->ch_state = VAR_1;
    }
}
