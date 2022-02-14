
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int loop_en; int carrier_duty_percent; int carrier_freq_hz; int carrier_level; int idle_output_en; scalar_t__ idle_level; int carrier_en; } ;
struct TYPE_5__ {int mem_block_num; int channel; scalar_t__ rmt_mode; TYPE_1__ tx_config; int clk_div; int gpio_num; } ;
typedef TYPE_2__ rmt_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(void)
{
    rmt_config_t VAR_4;
    VAR_4.channel = VAR_2;
    VAR_4.gpio_num = VAR_3;
    VAR_4.mem_block_num = 1;
    VAR_4.clk_div = VAR_0;
    VAR_4.tx_config.loop_en = 0;
    VAR_4.tx_config.carrier_duty_percent = 50;
    VAR_4.tx_config.carrier_freq_hz = 38000;
    VAR_4.tx_config.carrier_level = 1;
    VAR_4.tx_config.carrier_en = VAR_1;
    VAR_4.tx_config.idle_level = 0;
    VAR_4.tx_config.idle_output_en = 1;
    VAR_4.rmt_mode = 0;
    FUNC_0(&VAR_4);
    FUNC_1(VAR_4.channel, 0, 0);
}
