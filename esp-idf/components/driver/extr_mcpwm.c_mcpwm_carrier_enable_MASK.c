
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t mcpwm_unit_t ;
typedef size_t mcpwm_timer_t ;
typedef int esp_err_t ;
struct TYPE_6__ {TYPE_2__* channel; } ;
struct TYPE_4__ {int en; } ;
struct TYPE_5__ {TYPE_1__ carrier_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__** VAR_2 ;
 int FUNC_0 (int,int ,int ) ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

esp_err_t FUNC_3(mcpwm_unit_t VAR_8, mcpwm_timer_t VAR_9)
{
    FUNC_0(VAR_8 < VAR_5, VAR_6, VAR_0);
    FUNC_0(VAR_9 < VAR_4, VAR_3, VAR_0);
    FUNC_1(&VAR_7);
    VAR_2[VAR_8]->channel[VAR_9].carrier_cfg.en = 1;
    FUNC_2(&VAR_7);
    return VAR_1;
}
