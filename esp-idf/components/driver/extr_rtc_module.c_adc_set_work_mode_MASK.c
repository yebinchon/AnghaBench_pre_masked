
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int esp_err_t ;
typedef scalar_t__ adc_unit_t ;
struct TYPE_3__ {int work_mode; int sar_sel; } ;
struct TYPE_4__ {TYPE_1__ saradc_ctrl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 TYPE_2__ VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_6 ;

__attribute__((used)) static esp_err_t FUNC_2(adc_unit_t VAR_7)
{
    FUNC_0(&VAR_6);
    if (VAR_7 == VAR_0) {

        VAR_5.saradc_ctrl.work_mode = 0;

        VAR_5.saradc_ctrl.sar_sel = 0;
    } else if (VAR_7 == VAR_1) {

        VAR_5.saradc_ctrl.work_mode = 0;

        VAR_5.saradc_ctrl.sar_sel = 1;
    } else if (VAR_7 == VAR_3) {

        VAR_5.saradc_ctrl.work_mode = 1;
    } else if (VAR_7 == VAR_2) {

        VAR_5.saradc_ctrl.work_mode = 2;
    }
    FUNC_1(&VAR_6);
    return VAR_4;
}
