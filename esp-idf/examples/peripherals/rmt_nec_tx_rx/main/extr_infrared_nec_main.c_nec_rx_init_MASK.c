
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int filter_en; int filter_ticks_thresh; int idle_threshold; } ;
struct TYPE_5__ {int mem_block_num; int channel; TYPE_1__ rx_config; int rmt_mode; int clk_div; int gpio_num; } ;
typedef TYPE_2__ rmt_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int,int ) ;
 int VAR_5 ;

__attribute__((used)) static void FUNC_2(void)
{
    rmt_config_t VAR_6;
    VAR_6.channel = VAR_2;
    VAR_6.gpio_num = VAR_3;
    VAR_6.clk_div = VAR_0;
    VAR_6.mem_block_num = 1;
    VAR_6.rmt_mode = VAR_1;
    VAR_6.rx_config.filter_en = 1;
    VAR_6.rx_config.filter_ticks_thresh = 100;
    VAR_6.rx_config.idle_threshold = VAR_5 / 10 * (VAR_4);
    FUNC_0(&VAR_6);
    FUNC_1(VAR_6.channel, 1000, 0);
}
