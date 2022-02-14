
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int current_used_conn_latency; int current_used_conn_interval; } ;
typedef TYPE_1__ tL2C_LCB ;
typedef int UINT32 ;



UINT32 FUNC_0(tL2C_LCB *VAR_0)
{
    UINT32 VAR_1 = 6;
    if (VAR_0 != ((void*)0)){

        VAR_1 = (40 * ( 1 + VAR_0->current_used_conn_latency) * VAR_0->current_used_conn_interval + 500) / 1000;
        if (VAR_1 < 1){
            VAR_1 = 1;
        }else if (VAR_1 > 120){
            VAR_1 = 120;
        }
    }
    return VAR_1;
}
