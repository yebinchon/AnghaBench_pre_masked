
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int esp_err_t ;
typedef int adc_unit_t ;
struct TYPE_3__ {int sar1_patt_len; int sar2_patt_len; } ;
struct TYPE_4__ {TYPE_1__ saradc_ctrl; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int,char*,int ) ;
 TYPE_2__ VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_6 ;

__attribute__((used)) static esp_err_t FUNC_4(adc_unit_t VAR_7, int VAR_8)
{
    FUNC_0(VAR_7);
    FUNC_1((VAR_8 < VAR_0) && (VAR_8 > 0), "ADC pattern length error", VAR_3);
    FUNC_2(&VAR_6);
    if(VAR_7 & VAR_1) {
        VAR_5.saradc_ctrl.sar1_patt_len = VAR_8 - 1;
    }
    if(VAR_7 & VAR_2) {
        VAR_5.saradc_ctrl.sar2_patt_len = VAR_8 - 1;
    }
    FUNC_3(&VAR_6);
    return VAR_4;
}
