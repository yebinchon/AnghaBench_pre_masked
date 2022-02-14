
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ dac_offset; int clk_div; } ;
typedef TYPE_2__ temp_sensor_config_t ;
typedef int esp_err_t ;
struct TYPE_6__ {scalar_t__ tsens_dac; int tsens_clk_div; } ;
struct TYPE_9__ {TYPE_1__ sar_tctrl; } ;
struct TYPE_8__ {scalar_t__ set_val; scalar_t__ index; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__ VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_4__* VAR_5 ;

esp_err_t FUNC_1(temp_sensor_config_t *VAR_6)
{
    FUNC_0(VAR_6 != ((void*)0), VAR_0);
    VAR_6->dac_offset = VAR_2.sar_tctrl.tsens_dac;
    for(int VAR_7=VAR_3; VAR_7<VAR_4; VAR_7++) {
        if(VAR_6->dac_offset == VAR_5[VAR_7].set_val) {
            VAR_6->dac_offset = VAR_5[VAR_7].index;
            break;
        }
    }
    VAR_6->clk_div = VAR_2.sar_tctrl.tsens_clk_div;
    return VAR_1;
}
