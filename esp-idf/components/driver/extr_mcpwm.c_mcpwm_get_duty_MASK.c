
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t mcpwm_unit_t ;
typedef size_t mcpwm_timer_t ;
typedef size_t mcpwm_operator_t ;
struct TYPE_10__ {TYPE_4__* timer; TYPE_2__* channel; } ;
struct TYPE_8__ {double period; } ;
struct TYPE_9__ {TYPE_3__ period; } ;
struct TYPE_7__ {TYPE_1__* cmpr_value; } ;
struct TYPE_6__ {double cmpr_val; } ;


 int VAR_0 ;
 TYPE_5__** VAR_1 ;
 int FUNC_0 (int,int ,int ) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

float FUNC_3(mcpwm_unit_t VAR_9, mcpwm_timer_t VAR_10, mcpwm_operator_t VAR_11)
{
    float VAR_12;
    FUNC_0(VAR_9 < VAR_6, VAR_7, VAR_0);
    FUNC_0(VAR_10 < VAR_5, VAR_4, VAR_0);
    FUNC_0(VAR_11 < VAR_2, VAR_3, VAR_0);
    FUNC_1(&VAR_8);
    VAR_12 = 100.0 * (VAR_1[VAR_9]->channel[VAR_10].cmpr_value[VAR_11].cmpr_val) / (VAR_1[VAR_9]->timer[VAR_10].period.period);
    FUNC_2(&VAR_8);
    return VAR_12;
}
