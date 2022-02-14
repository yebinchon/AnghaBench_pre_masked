
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t ledc_mode_t ;
typedef size_t ledc_channel_t ;
struct TYPE_14__ {TYPE_6__* timer_group; TYPE_3__* channel_group; } ;
struct TYPE_13__ {TYPE_5__* timer; } ;
struct TYPE_11__ {int duty_resolution; } ;
struct TYPE_12__ {TYPE_4__ conf; } ;
struct TYPE_10__ {TYPE_2__* channel; } ;
struct TYPE_8__ {int timer_sel; } ;
struct TYPE_9__ {TYPE_1__ conf0; } ;


 TYPE_7__ VAR_0 ;

__attribute__((used)) static int FUNC_0(ledc_mode_t VAR_1, ledc_channel_t VAR_2)
{

    int VAR_3 = VAR_0.channel_group[VAR_1].channel[VAR_2].conf0.timer_sel;
    int VAR_4 = (1 << (VAR_0.timer_group[VAR_1].timer[VAR_3].conf.duty_resolution));
    return VAR_4;
}
