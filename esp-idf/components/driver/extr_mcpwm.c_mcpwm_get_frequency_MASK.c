
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t mcpwm_unit_t ;
typedef size_t mcpwm_timer_t ;
struct TYPE_6__ {TYPE_2__* timer; } ;
struct TYPE_4__ {int period; } ;
struct TYPE_5__ {TYPE_1__ period; } ;


 int VAR_0 ;
 TYPE_3__** VAR_1 ;
 int FUNC_0 (int,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

uint32_t FUNC_1(mcpwm_unit_t VAR_8, mcpwm_timer_t VAR_9)
{
    uint32_t VAR_10;
    FUNC_0(VAR_8 < VAR_5, VAR_6, VAR_0);
    FUNC_0(VAR_9 < VAR_4, VAR_3, VAR_0);
    VAR_10 = VAR_2 / ((VAR_1[VAR_8]->timer[VAR_9].period.period) * (VAR_7 + 1));
    return VAR_10;
}
