
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int filter_en; int filter_ticks_thresh; int idle_threshold; } ;
typedef TYPE_1__ rmt_rx_config_t ;
typedef int rmt_item32_t ;
struct TYPE_5__ {int mem_block_num; int channel; TYPE_1__ rx_config; int rmt_mode; int clk_div; int gpio_num; } ;
typedef TYPE_2__ rmt_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int,int ) ;

__attribute__((used)) static void FUNC_2(void)
{
    rmt_rx_config_t VAR_8 = {
        .filter_en = 1,
        .filter_ticks_thresh = 100,
        .idle_threshold = VAR_2 / 10 * (VAR_6),
    };
    rmt_config_t VAR_9 = {
        .channel = VAR_4,
        .gpio_num = VAR_5,
        .clk_div = VAR_1,
        .mem_block_num = 1,
        .rmt_mode = VAR_3,
        .rx_config = VAR_8,
    };
    FUNC_0(&VAR_9);
    FUNC_1(VAR_9.channel, (sizeof(rmt_item32_t) * VAR_0 * (VAR_7+6)), 0);
}
