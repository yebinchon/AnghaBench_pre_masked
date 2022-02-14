
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int tBTM_STATUS ;
struct TYPE_8__ {scalar_t__ filter_support; } ;
typedef TYPE_2__ tBTM_BLE_VSC_CB ;
typedef int tBTM_BLE_PF_FILT_INDEX ;
typedef int tBTM_BLE_PF_COND_PARAM ;
typedef int tBTA_STATUS ;
struct TYPE_7__ {int ref_value; int cond_type; int (* p_filt_cfg_cback ) (int ,int ,int ,int ,int ) ;scalar_t__ p_cond_param; scalar_t__ filt_index; int action; } ;
struct TYPE_9__ {TYPE_1__ ble_cfg_filter_cond; } ;
typedef TYPE_3__ tBTA_DM_MSG ;
struct TYPE_10__ {int (* p_scan_filt_cfg_cback ) (int ,int ,int ,int ,int ) ;} ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int ,int *,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_5__ VAR_5 ;
 int FUNC_3 (int ,int ,int ,int ,int ) ;

void FUNC_4 (tBTA_DM_MSG *VAR_6)
{
    tBTM_STATUS VAR_7 = VAR_3;
    tBTA_STATUS VAR_8 = VAR_1;

    tBTM_BLE_VSC_CB VAR_9;

    FUNC_0("bta_dm_cfg_filter_cond");
    FUNC_2(&VAR_9);
    if (0 != VAR_9.filter_support) {
        if ((VAR_7 = FUNC_1(VAR_6->ble_cfg_filter_cond.action,
                                            VAR_6->ble_cfg_filter_cond.cond_type,
                                            (tBTM_BLE_PF_FILT_INDEX)VAR_6->ble_cfg_filter_cond.filt_index,
                                            (tBTM_BLE_PF_COND_PARAM *)VAR_6->ble_cfg_filter_cond.p_cond_param,
                                            VAR_4, VAR_6->ble_cfg_filter_cond.ref_value))
                == VAR_2) {
            VAR_5.p_scan_filt_cfg_cback = VAR_6->ble_cfg_filter_cond.p_filt_cfg_cback;
            return;
        }
    }

    if (VAR_6->ble_cfg_filter_cond.p_filt_cfg_cback) {
        VAR_6->ble_cfg_filter_cond.p_filt_cfg_cback(VAR_0,
                VAR_6->ble_cfg_filter_cond.cond_type, 0, VAR_8,
                VAR_6->ble_cfg_filter_cond.ref_value);
    }
    return;
}
