
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTM_BLE_REF_VALUE ;
typedef int tBTM_BLE_PF_PARAM_CBACK ;
typedef int tBTM_BLE_PF_CFG_CBACK ;
typedef int tBTM_BLE_FILT_CB_EVT ;
typedef int UINT8 ;
struct TYPE_3__ {int* action_ocf; size_t pending_idx; int ** p_filt_param_cback; int ** p_scan_cfg_cback; int * cb_evt; int * ref_value; } ;
struct TYPE_4__ {TYPE_1__ op_q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,int,int ,int ) ;
 TYPE_2__ VAR_2 ;

void FUNC_1(UINT8 *VAR_3, UINT8 *VAR_4, tBTM_BLE_FILT_CB_EVT *VAR_5,
                              tBTM_BLE_REF_VALUE *VAR_6, tBTM_BLE_PF_CFG_CBACK **VAR_7,
                              tBTM_BLE_PF_PARAM_CBACK **VAR_8)
{
    *VAR_4 = (VAR_2.op_q.action_ocf[VAR_2.op_q.pending_idx] >> 4);
    *VAR_3 = (VAR_2.op_q.action_ocf[VAR_2.op_q.pending_idx]
                 & VAR_0);
    *VAR_6 = VAR_2.op_q.ref_value[VAR_2.op_q.pending_idx];
    *VAR_5 = VAR_2.op_q.cb_evt[VAR_2.op_q.pending_idx];
    *VAR_7 = VAR_2.op_q.p_scan_cfg_cback[VAR_2.op_q.pending_idx];
    *VAR_8 =
        VAR_2.op_q.p_filt_param_cback[VAR_2.op_q.pending_idx];

    VAR_2.op_q.pending_idx = (VAR_2.op_q.pending_idx + 1)
                                           % VAR_1;
    FUNC_0("btm_ble_advfilt_deq_op_q: ocf:%d, action:%d, ref_value:%d, cb_evt:%x",
                    *VAR_4, *VAR_3, *VAR_6, *VAR_5);
}
