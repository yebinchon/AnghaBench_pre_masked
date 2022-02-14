
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* srvc_id; size_t* pm_action; TYPE_2__* timer; int active; int in_use; } ;
typedef TYPE_1__ tBTA_PM_TIMER ;
typedef size_t UINT8 ;
struct TYPE_5__ {int p_cback; } ;
typedef int INT32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;

__attribute__((used)) static void FUNC_1(tBTA_PM_TIMER *VAR_3, UINT8 VAR_4,
                                  INT32 VAR_5, UINT8 VAR_6, UINT8 VAR_7)
{
    VAR_3->in_use = VAR_1;
    VAR_3->timer[VAR_4].p_cback = VAR_2;

    if (VAR_3->srvc_id[VAR_4] == VAR_0) {
        VAR_3->active++;
    }

    if (VAR_3->pm_action[VAR_4] < VAR_7) {
        VAR_3->pm_action[VAR_4] = VAR_7;
    }

    VAR_3->srvc_id[VAR_4] = VAR_6;

    FUNC_0(&VAR_3->timer[VAR_4], 0, VAR_5);
}
