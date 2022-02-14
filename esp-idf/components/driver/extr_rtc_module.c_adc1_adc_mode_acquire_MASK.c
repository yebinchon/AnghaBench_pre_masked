
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int esp_err_t ;
struct TYPE_5__ {scalar_t__ sar1_dig_force; } ;
struct TYPE_4__ {scalar_t__ sar1_dig_force; } ;
struct TYPE_6__ {TYPE_2__ sar_meas1_mux; TYPE_1__ sar_read_ctrl; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_4 ;

esp_err_t FUNC_4(void)
{


    FUNC_1( &VAR_3 );
    FUNC_0( VAR_1, "adc mode takes adc1 lock." );
    FUNC_2(&VAR_4);
    FUNC_3(&VAR_4);
    return VAR_0;
}
