
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* busy_level; int event; int busy_level_flags; } ;
typedef TYPE_1__ tBTM_BL_UPDATE_DATA ;
typedef int tBTM_BL_EVENT_DATA ;
typedef int tBTM_BLI_EVENT ;
typedef void* UINT8 ;
struct TYPE_4__ {scalar_t__ is_inquiry; void* busy_level; int bl_evt_mask; int (* p_bl_changed_cb ) (int *) ;void* is_paging; } ;
typedef scalar_t__ BOOLEAN ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* FUNC_0 () ;
 int FUNC_1 (char*) ;
 void* VAR_7 ;
 void* VAR_8 ;
 TYPE_2__ VAR_9 ;
 int FUNC_2 (int *) ;

void FUNC_3 (tBTM_BLI_EVENT VAR_10)
{
    tBTM_BL_UPDATE_DATA VAR_11;
    UINT8 VAR_12;
    FUNC_1 ("btm_acl_update_busy_level\n");
    BOOLEAN VAR_13 = VAR_9.is_inquiry;
    switch (VAR_10) {
    case 133:
        FUNC_1 ("BTM_BLI_ACL_UP_EVT\n");
        break;
    case 134:
        FUNC_1 ("BTM_BLI_ACL_DOWN_EVT\n");
        break;
    case 128:
        FUNC_1 ("BTM_BLI_PAGE_EVT\n");
        VAR_9.is_paging = VAR_8;
        VAR_11.busy_level_flags = VAR_4;
        break;
    case 129:
        FUNC_1 ("BTM_BLI_PAGE_DONE_EVT\n");
        VAR_9.is_paging = VAR_7;
        VAR_11.busy_level_flags = VAR_3;
        break;
    case 130:
        FUNC_1 ("BTM_BLI_INQ_EVT\n");
        VAR_9.is_inquiry = VAR_8;
        VAR_11.busy_level_flags = VAR_2;
        break;
    case 132:
        FUNC_1 ("BTM_BLI_INQ_CANCEL_EVT\n");
        VAR_9.is_inquiry = VAR_7;
        VAR_11.busy_level_flags = VAR_0;
        break;
    case 131:
        FUNC_1 ("BTM_BLI_INQ_DONE_EVT\n");
        VAR_9.is_inquiry = VAR_7;
        VAR_11.busy_level_flags = VAR_1;
        break;
    }

    if (VAR_9.is_paging || VAR_9.is_inquiry) {
        VAR_12 = 10;
    } else {
        VAR_12 = FUNC_0();
    }

    if ((VAR_12 != VAR_9.busy_level) || (VAR_13 != VAR_9.is_inquiry)) {
        VAR_11.event = VAR_5;
        VAR_11.busy_level = VAR_12;
        VAR_9.busy_level = VAR_12;
        if (VAR_9.p_bl_changed_cb && (VAR_9.bl_evt_mask & VAR_6)) {
            (*VAR_9.p_bl_changed_cb)((tBTM_BL_EVENT_DATA *)&VAR_11);
        }
    }
}
