
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint32_t ;
typedef size_t ledc_timer_t ;
typedef size_t ledc_mode_t ;
typedef void* ledc_clk_src_t ;
typedef int esp_err_t ;
struct TYPE_6__ {int apb_clk_sel; } ;
struct TYPE_10__ {TYPE_4__* timer_group; TYPE_1__ conf; } ;
struct TYPE_9__ {TYPE_3__* timer; } ;
struct TYPE_7__ {int tick_sel; void* duty_resolution; void* clock_divider; } ;
struct TYPE_8__ {TYPE_2__ conf; } ;


 int VAR_0 ;
 TYPE_5__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 void* VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (size_t,size_t) ;
 int VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

esp_err_t FUNC_4(ledc_mode_t VAR_6, ledc_timer_t VAR_7, uint32_t VAR_8, uint32_t VAR_9,
        ledc_clk_src_t VAR_10)
{
    FUNC_0(VAR_6 < VAR_3, "speed_mode");
    FUNC_0(VAR_7 < VAR_4, "timer_select");
    FUNC_2(&VAR_5);
    VAR_1.timer_group[VAR_6].timer[VAR_7].conf.clock_divider = VAR_8;
    VAR_1.timer_group[VAR_6].timer[VAR_7].conf.duty_resolution = VAR_9;
    FUNC_1(VAR_6, VAR_7);
    FUNC_3(&VAR_5);
    return VAR_0;
}
