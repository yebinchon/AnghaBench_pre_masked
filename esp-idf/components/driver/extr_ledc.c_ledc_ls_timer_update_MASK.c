
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t ledc_timer_t ;
typedef size_t ledc_mode_t ;
struct TYPE_8__ {TYPE_3__* timer_group; } ;
struct TYPE_7__ {TYPE_2__* timer; } ;
struct TYPE_5__ {int low_speed_update; } ;
struct TYPE_6__ {TYPE_1__ conf; } ;


 TYPE_4__ VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static void FUNC_0(ledc_mode_t VAR_2, ledc_timer_t VAR_3)
{
    if (VAR_2 == VAR_1) {
        VAR_0.timer_group[VAR_2].timer[VAR_3].conf.low_speed_update = 1;
    }
}
