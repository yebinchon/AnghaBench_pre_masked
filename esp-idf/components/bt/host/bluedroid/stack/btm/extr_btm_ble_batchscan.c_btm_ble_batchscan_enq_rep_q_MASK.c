
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTM_STATUS ;
typedef int tBTM_BLE_REF_VALUE ;
typedef scalar_t__ UINT8 ;
struct TYPE_3__ {scalar_t__* rep_mode; size_t next_idx; int ** p_data; scalar_t__* data_len; scalar_t__* num_records; int * ref_value; } ;
struct TYPE_4__ {TYPE_1__ main_rep_q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,size_t,scalar_t__,int ) ;
 TYPE_2__ VAR_3 ;

tBTM_STATUS FUNC_1(UINT8 VAR_4, tBTM_BLE_REF_VALUE VAR_5)
{
    int VAR_6 = 0;
    for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
        if (VAR_4 == VAR_3.main_rep_q.rep_mode[VAR_6]) {
            return VAR_1;
        }
    }

    VAR_3.main_rep_q.rep_mode[VAR_3.main_rep_q.next_idx] = VAR_4;
    VAR_3.main_rep_q.ref_value[VAR_3.main_rep_q.next_idx] = VAR_5;
    VAR_3.main_rep_q.num_records[VAR_3.main_rep_q.next_idx] = 0;
    VAR_3.main_rep_q.data_len[VAR_3.main_rep_q.next_idx] = 0;
    VAR_3.main_rep_q.p_data[VAR_3.main_rep_q.next_idx] = ((void*)0);
    FUNC_0("btm_ble_batchscan_enq_rep_q: index:%d, rep %d, ref %d",
                    VAR_3.main_rep_q.next_idx, VAR_4, VAR_5);

    VAR_3.main_rep_q.next_idx = (VAR_3.main_rep_q.next_idx + 1)
                                           % VAR_0;
    return VAR_2;
}
