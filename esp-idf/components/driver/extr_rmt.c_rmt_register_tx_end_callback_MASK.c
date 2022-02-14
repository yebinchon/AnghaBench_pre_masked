
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int rmt_tx_end_fn_t ;
struct TYPE_4__ {void* arg; int function; } ;
typedef TYPE_1__ rmt_tx_end_callback_t ;


 TYPE_1__ VAR_0 ;

rmt_tx_end_callback_t FUNC_0(rmt_tx_end_fn_t VAR_1, void *VAR_2)
{
    rmt_tx_end_callback_t VAR_3 = VAR_0;
    VAR_0.function = VAR_1;
    VAR_0.arg = VAR_2;
    return VAR_3;
}
