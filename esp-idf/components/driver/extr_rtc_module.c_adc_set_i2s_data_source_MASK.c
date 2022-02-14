
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int esp_err_t ;
typedef scalar_t__ adc_i2s_source_t ;
struct TYPE_3__ {scalar_t__ data_to_i2s; } ;
struct TYPE_4__ {TYPE_1__ saradc_ctrl; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*,int ) ;
 TYPE_2__ VAR_3 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_4 ;

esp_err_t FUNC_3(adc_i2s_source_t VAR_5)
{
    FUNC_0(VAR_5 < VAR_0, "ADC i2s data source error", VAR_1);
    FUNC_1(&VAR_4);

    VAR_3.saradc_ctrl.data_to_i2s = VAR_5;
    FUNC_2(&VAR_4);
    return VAR_2;
}
