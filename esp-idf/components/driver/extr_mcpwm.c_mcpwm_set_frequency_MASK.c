
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t mcpwm_unit_t ;
typedef size_t mcpwm_timer_t ;
typedef int esp_err_t ;
struct TYPE_12__ {TYPE_5__* channel; TYPE_2__* timer; } ;
struct TYPE_10__ {scalar_t__ b_upmethod; scalar_t__ a_upmethod; } ;
struct TYPE_11__ {TYPE_4__ cmpr_cfg; TYPE_3__* cmpr_value; } ;
struct TYPE_9__ {int cmpr_val; } ;
struct TYPE_7__ {int period; int prescale; scalar_t__ upmethod; } ;
struct TYPE_8__ {TYPE_1__ period; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_6__** VAR_2 ;
 int FUNC_0 (int,int ,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

esp_err_t FUNC_3(mcpwm_unit_t VAR_10, mcpwm_timer_t VAR_11, uint32_t VAR_12)
{
    uint32_t VAR_13;
    uint32_t VAR_14;
    uint32_t VAR_15, VAR_16;
    FUNC_0(VAR_10 < VAR_6, VAR_7, VAR_0);
    FUNC_0(VAR_11 < VAR_5, VAR_4, VAR_0);
    FUNC_1(&VAR_9);
    VAR_13 = VAR_3 / (VAR_12 * (VAR_8 + 1));
    VAR_14 = VAR_2[VAR_10]->timer[VAR_11].period.period;
    VAR_2[VAR_10]->timer[VAR_11].period.prescale = VAR_8;
    VAR_2[VAR_10]->timer[VAR_11].period.period = VAR_13;
    VAR_2[VAR_10]->timer[VAR_11].period.upmethod = 0;
    VAR_15 = (((VAR_2[VAR_10]->channel[VAR_11].cmpr_value[0].cmpr_val) * VAR_13) / VAR_14);
    VAR_16 = (((VAR_2[VAR_10]->channel[VAR_11].cmpr_value[1].cmpr_val) * VAR_13) / VAR_14);
    VAR_2[VAR_10]->channel[VAR_11].cmpr_value[0].cmpr_val = VAR_15;
    VAR_2[VAR_10]->channel[VAR_11].cmpr_value[1].cmpr_val = VAR_16;
    VAR_2[VAR_10]->channel[VAR_11].cmpr_cfg.a_upmethod = 0;
    VAR_2[VAR_10]->channel[VAR_11].cmpr_cfg.b_upmethod = 0;
    FUNC_2(&VAR_9);
    return VAR_1;
}
