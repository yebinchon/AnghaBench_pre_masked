
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {size_t dac_offset; int clk_div; } ;
typedef TYPE_3__ temp_sensor_config_t ;
typedef int esp_err_t ;
struct TYPE_7__ {int tsens_xpd_force; int tsens_reset; int tsens_xpd_wait; } ;
struct TYPE_8__ {int tsens_power_up_force; int tsens_clk_div; int tsens_dac; } ;
struct TYPE_11__ {TYPE_1__ sar_tctrl2; TYPE_2__ sar_tctrl; } ;
struct TYPE_10__ {int error_max; int range_max; int range_min; int set_val; } ;


 int FUNC_0 (int ,char*,int ,int ,int ) ;
 int VAR_0 ;
 TYPE_6__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_5__* VAR_4 ;

esp_err_t FUNC_1(temp_sensor_config_t VAR_5)
{
    VAR_1.sar_tctrl.tsens_dac = VAR_4[VAR_5.dac_offset].set_val;
    VAR_1.sar_tctrl.tsens_clk_div = VAR_5.clk_div;
    VAR_1.sar_tctrl.tsens_power_up_force = 1;
    VAR_1.sar_tctrl2.tsens_xpd_wait = VAR_3;
    VAR_1.sar_tctrl2.tsens_xpd_force = 1;
    VAR_1.sar_tctrl2.tsens_reset = 1;
    VAR_1.sar_tctrl2.tsens_reset = 0;
    FUNC_0(VAR_2, "Config temperature range [%d°C ~ %d°C], error < %d°C",
             VAR_4[VAR_5.dac_offset].range_min,
             VAR_4[VAR_5.dac_offset].range_max,
             VAR_4[VAR_5.dac_offset].error_max);
    return VAR_0;
}
