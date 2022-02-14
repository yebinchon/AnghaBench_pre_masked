
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t mcpwm_unit_t ;
typedef size_t mcpwm_timer_t ;
typedef size_t mcpwm_operator_t ;
typedef int esp_err_t ;
struct TYPE_8__ {TYPE_3__* channel; } ;
struct TYPE_6__ {void* b_upmethod; void* a_upmethod; } ;
struct TYPE_7__ {TYPE_2__ cmpr_cfg; TYPE_1__* cmpr_value; } ;
struct TYPE_5__ {int cmpr_val; } ;


 void* FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__** VAR_2 ;
 int FUNC_1 (int,int ,int ) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

esp_err_t FUNC_4(mcpwm_unit_t VAR_10, mcpwm_timer_t VAR_11, mcpwm_operator_t VAR_12, uint32_t VAR_13)
{
    FUNC_1(VAR_10 < VAR_7, VAR_8, VAR_0);
    FUNC_1(VAR_11 < VAR_6, VAR_5, VAR_0);
    FUNC_1(VAR_12 < VAR_3, VAR_4, VAR_0);
    FUNC_2(&VAR_9);
    VAR_2[VAR_10]->channel[VAR_11].cmpr_value[VAR_12].cmpr_val = VAR_13;
    VAR_2[VAR_10]->channel[VAR_11].cmpr_cfg.a_upmethod = FUNC_0(0);
    VAR_2[VAR_10]->channel[VAR_11].cmpr_cfg.b_upmethod = FUNC_0(0);
    FUNC_3(&VAR_9);
    return VAR_1;
}
