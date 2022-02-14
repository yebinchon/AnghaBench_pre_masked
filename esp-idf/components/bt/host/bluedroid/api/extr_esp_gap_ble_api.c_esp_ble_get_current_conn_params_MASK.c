
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int timeout; int latency; int interval; } ;
typedef TYPE_1__ esp_gap_conn_params_t ;
typedef int esp_err_t ;
typedef int esp_bd_addr_t ;


 scalar_t__ FUNC_0 (int ,int *,int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

esp_err_t FUNC_1(esp_bd_addr_t VAR_3, esp_gap_conn_params_t *VAR_4)
{
    if(!VAR_3 || !VAR_4) {
        return VAR_0;
    }
    if(FUNC_0(VAR_3, &VAR_4->interval, &VAR_4->latency, &VAR_4->timeout)) {
        return VAR_2;
    }
    return VAR_1;
}
