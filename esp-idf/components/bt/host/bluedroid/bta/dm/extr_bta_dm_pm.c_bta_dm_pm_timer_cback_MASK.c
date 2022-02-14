
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int event; } ;
struct TYPE_8__ {int bd_addr; int pm_request; TYPE_1__ hdr; } ;
typedef TYPE_3__ tBTA_DM_PM_TIMER ;
typedef size_t UINT8 ;
struct TYPE_9__ {TYPE_2__* pm_timer; } ;
struct TYPE_7__ {size_t in_use; scalar_t__ active; int peer_bdaddr; int * pm_action; int * srvc_id; int * timer; } ;
typedef int TIMER_LIST_ENT ;


 int FUNC_0 (char*,size_t,size_t) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_1 (int ,int ) ;
 TYPE_5__ VAR_5 ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static void FUNC_4(void *VAR_6)
{
    UINT8 VAR_7, VAR_8;

    for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
        FUNC_0("dm_pm_timer[%d] in use? %d", VAR_7, VAR_5.pm_timer[VAR_7].in_use);
        if (VAR_5.pm_timer[VAR_7].in_use) {
            for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
                if (&VAR_5.pm_timer[VAR_7].timer[VAR_8] == (TIMER_LIST_ENT *) VAR_6) {
                    VAR_5.pm_timer[VAR_7].active --;
                    VAR_5.pm_timer[VAR_7].srvc_id[VAR_8] = VAR_3;
                    FUNC_0("dm_pm_timer[%d] expires, timer_idx=%d", VAR_7, VAR_8);
                    break;
                }
            }
            if (VAR_5.pm_timer[VAR_7].active == 0) {
                VAR_5.pm_timer[VAR_7].in_use = VAR_4;
            }
            if (VAR_8 < VAR_1) {
                break;
            }
        }
    }


    if (VAR_7 == VAR_0) {
        return;
    }

    tBTA_DM_PM_TIMER *VAR_9 = (tBTA_DM_PM_TIMER *) FUNC_3(sizeof(tBTA_DM_PM_TIMER));
    if (VAR_9 != ((void*)0)) {
        VAR_9->hdr.event = VAR_2;
        VAR_9->pm_request = VAR_5.pm_timer[VAR_7].pm_action[VAR_8];
        FUNC_1(VAR_9->bd_addr, VAR_5.pm_timer[VAR_7].peer_bdaddr);
        FUNC_2(VAR_9);
    }
}
