
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int esp_err_t ;
typedef int adc_i2s_encode_t ;
struct TYPE_3__ {int data_sar_sel; } ;
struct TYPE_4__ {TYPE_1__ saradc_ctrl; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;

__attribute__((used)) static esp_err_t FUNC_2(adc_i2s_encode_t VAR_3)
{
    FUNC_0(&VAR_2);



    VAR_1.saradc_ctrl.data_sar_sel = VAR_3;
    FUNC_1(&VAR_2);
    return VAR_0;
}
