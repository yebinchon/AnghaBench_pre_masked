
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ tBTM_BLE_REF_VALUE ;
typedef scalar_t__ UINT8 ;
typedef scalar_t__ UINT16 ;
struct TYPE_3__ {scalar_t__* rep_mode; scalar_t__* num_records; int pending_idx; scalar_t__* ref_value; scalar_t__* data_len; scalar_t__** p_data; } ;
struct TYPE_4__ {TYPE_1__ main_rep_q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (char*,scalar_t__) ;
 TYPE_2__ VAR_2 ;

void FUNC_2(UINT8 VAR_3, tBTM_BLE_REF_VALUE *VAR_4,
                                    UINT8 *VAR_5, UINT8 **VAR_6, UINT16 *VAR_7)
{
    int VAR_8 = 0;

    for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
        if (VAR_3 == VAR_2.main_rep_q.rep_mode[VAR_8]) {
            break;
        }
    }

    if (VAR_0 == VAR_8) {
        FUNC_1("btm_ble_batchscan_deq_rep_data: rep_format:%d not found", VAR_3);
        return;
    }

    *VAR_5 = VAR_2.main_rep_q.num_records[VAR_8];
    *VAR_4 = VAR_2.main_rep_q.ref_value[VAR_8];
    *VAR_6 = VAR_2.main_rep_q.p_data[VAR_8];
    *VAR_7 = VAR_2.main_rep_q.data_len[VAR_8];

    VAR_2.main_rep_q.p_data[VAR_8] = ((void*)0);
    VAR_2.main_rep_q.data_len[VAR_8] = 0;
    VAR_2.main_rep_q.rep_mode[VAR_8] = 0;
    VAR_2.main_rep_q.ref_value[VAR_8] = 0;
    VAR_2.main_rep_q.num_records[VAR_8] = 0;

    FUNC_0("btm_ble_batchscan_deq_rep_data: index:%d, rep %d, num %d, data_len %d",
                    VAR_8, VAR_3, *VAR_5, *VAR_7);

    VAR_2.main_rep_q.pending_idx = (VAR_2.main_rep_q.pending_idx + 1)
            % VAR_1;
}
