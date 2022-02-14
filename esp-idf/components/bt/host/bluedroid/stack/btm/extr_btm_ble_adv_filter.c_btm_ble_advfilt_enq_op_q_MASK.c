
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
struct TYPE_3__ {int* action_ocf; size_t next_idx; int ** p_filt_param_cback; int ** p_scan_cfg_cback; int * cb_evt; int * ref_value; } ;
struct TYPE_4__ {TYPE_1__ op_q; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,int,int,int ,int *) ;
 TYPE_2__ VAR_1 ;

void FUNC_1(UINT8 VAR_2, UINT8 VAR_3, tBTM_BLE_FILT_CB_EVT VAR_4,
                              tBTM_BLE_REF_VALUE VAR_5, tBTM_BLE_PF_CFG_CBACK *VAR_6,
                              tBTM_BLE_PF_PARAM_CBACK *VAR_7)
{
    VAR_1.op_q.action_ocf[VAR_1.op_q.next_idx] = (VAR_2 | (VAR_3 << 4));
    VAR_1.op_q.ref_value[VAR_1.op_q.next_idx] = VAR_5;
    VAR_1.op_q.cb_evt[VAR_1.op_q.next_idx] = VAR_4;
    VAR_1.op_q.p_scan_cfg_cback[VAR_1.op_q.next_idx] = VAR_6;
    VAR_1.op_q.p_filt_param_cback[VAR_1.op_q.next_idx]
        = VAR_7;
    FUNC_0("btm_ble_advfilt_enq_op_q: act_ocf:%d, action:%d, ocf:%d,cb_evt;%d, cback:%p",
                    VAR_1.op_q.action_ocf[VAR_1.op_q.next_idx], VAR_2,
                    VAR_3, VAR_4, VAR_6);
    VAR_1.op_q.next_idx = (VAR_1.op_q.next_idx + 1)
                                        % VAR_0;
}
