
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int esp_err_t ;
struct TYPE_9__ {int sar1_dig_force; } ;
struct TYPE_8__ {void* force_xpd_sar; } ;
struct TYPE_7__ {int sar1_dig_force; } ;
struct TYPE_6__ {void* force_xpd_sar; } ;
struct TYPE_10__ {TYPE_4__ sar_meas1_mux; TYPE_3__ sar_power_xpd_sar; TYPE_2__ sar_read_ctrl; TYPE_1__ sar_meas_wait2; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__ VAR_2 ;
 void* VAR_3 ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_5 ;

esp_err_t FUNC_4(void)
{


    FUNC_1( &VAR_4 );
    FUNC_0( VAR_1, "i2s mode takes adc1 lock." );
    FUNC_2(&VAR_5);
    FUNC_3(&VAR_5);
    return VAR_0;
}
