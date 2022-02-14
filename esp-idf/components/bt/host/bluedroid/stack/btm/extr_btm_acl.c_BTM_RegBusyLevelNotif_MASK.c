
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tBTM_STATUS ;
typedef int tBTM_BL_EVENT_MASK ;
typedef int tBTM_BL_CHANGE_CB ;
typedef int UINT8 ;
struct TYPE_2__ {int * p_bl_changed_cb; int bl_evt_mask; int busy_level; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 TYPE_1__ VAR_2 ;

tBTM_STATUS FUNC_1 (tBTM_BL_CHANGE_CB *VAR_3, UINT8 *VAR_4,
                                   tBTM_BL_EVENT_MASK VAR_5)
{
    FUNC_0 ("BTM_RegBusyLevelNotif\n");
    if (VAR_4) {
        *VAR_4 = VAR_2.busy_level;
    }

    VAR_2.bl_evt_mask = VAR_5;

    if (!VAR_3) {
        VAR_2.p_bl_changed_cb = ((void*)0);
    } else if (VAR_2.p_bl_changed_cb) {
        return (VAR_0);
    } else {
        VAR_2.p_bl_changed_cb = VAR_3;
    }

    return (VAR_1);
}
