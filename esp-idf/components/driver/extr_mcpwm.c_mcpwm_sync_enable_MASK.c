
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef size_t mcpwm_unit_t ;
typedef size_t mcpwm_timer_t ;
typedef void* mcpwm_sync_signal_t ;
typedef int esp_err_t ;
struct TYPE_7__ {void* t2_in_sel; void* t1_in_sel; void* t0_in_sel; } ;
struct TYPE_10__ {TYPE_4__* timer; TYPE_2__ timer_synci_cfg; } ;
struct TYPE_8__ {int timer_phase; int in_en; scalar_t__ out_sel; } ;
struct TYPE_6__ {int period; } ;
struct TYPE_9__ {TYPE_3__ sync; TYPE_1__ period; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_5__** VAR_2 ;
 int FUNC_0 (int,int ,int ) ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

esp_err_t FUNC_3(mcpwm_unit_t VAR_10, mcpwm_timer_t VAR_11, mcpwm_sync_signal_t VAR_12,
                            uint32_t VAR_13)
{
    uint32_t VAR_14;
    FUNC_0(VAR_10 < VAR_7, VAR_8, VAR_0);
    FUNC_0(VAR_11 < VAR_6, VAR_5, VAR_0);
    FUNC_1(&VAR_9);
    VAR_14 = (VAR_2[VAR_10]->timer[VAR_11].period.period) * (VAR_13) / 1000;
    VAR_2[VAR_10]->timer[VAR_11].sync.timer_phase = VAR_14;
    if (VAR_11 == VAR_3) {
        VAR_2[VAR_10]->timer_synci_cfg.t0_in_sel = VAR_12;
    } else if (VAR_11 == VAR_4) {
        VAR_2[VAR_10]->timer_synci_cfg.t1_in_sel = VAR_12;
    } else {
        VAR_2[VAR_10]->timer_synci_cfg.t2_in_sel = VAR_12;
    }
    VAR_2[VAR_10]->timer[VAR_11].sync.out_sel = 0;
    VAR_2[VAR_10]->timer[VAR_11].sync.in_en = 1;
    FUNC_2(&VAR_9);
    return VAR_1;
}
