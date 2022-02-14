
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int loop_en; int carrier_duty_percent; int carrier_freq_hz; int carrier_level; int idle_output_en; int idle_level; int carrier_en; } ;
typedef TYPE_1__ rmt_tx_config_t ;
struct TYPE_5__ {int mem_block_num; int channel; int rmt_mode; TYPE_1__ tx_config; int clk_div; int gpio_num; } ;
typedef TYPE_2__ rmt_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(void)
{

    rmt_tx_config_t VAR_4 = {
        .loop_en = 0,
        .carrier_duty_percent = 50,
        .carrier_freq_hz = 38000,
        .carrier_level = 1,
        .carrier_en = VAR_1,
        .idle_level = 0,
        .idle_output_en = 1,
    };
    rmt_config_t VAR_5 = {
        .channel = VAR_2,
        .gpio_num = VAR_3,
        .mem_block_num = 1,
        .clk_div = VAR_0,
        .tx_config = VAR_4,
        .rmt_mode = 0,
    };
    FUNC_0(&VAR_5);
    FUNC_1(VAR_5.channel, 0, 0);
}
