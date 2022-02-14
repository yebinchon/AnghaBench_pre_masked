
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ UINT8 ;
struct TYPE_3__ {scalar_t__* rep_mode; int* data_len; scalar_t__** p_data; scalar_t__* num_records; } ;
struct TYPE_4__ {TYPE_1__ main_rep_q; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,scalar_t__,scalar_t__,scalar_t__) ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (scalar_t__*,scalar_t__*,scalar_t__) ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__* FUNC_3 (scalar_t__) ;

void FUNC_4(UINT8 VAR_2, UINT8 VAR_3, UINT8 *VAR_4,
                                    UINT8 VAR_5)
{
    int VAR_6 = 0, VAR_7 = 0;
    UINT8 *VAR_8 = ((void*)0), *VAR_9 = ((void*)0);

    for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
        if (VAR_2 == VAR_1.main_rep_q.rep_mode[VAR_6]) {
            break;
        }
    }

    FUNC_0("btm_ble_batchscan_enq_rep_data: index:%d, rep %d, num %d len : %d",
                    VAR_6, VAR_2, VAR_3, VAR_5);

    if (VAR_6 < VAR_0 && VAR_5 > 0 && VAR_3 > 0) {
        VAR_7 = VAR_1.main_rep_q.data_len[VAR_6];
        VAR_8 = VAR_1.main_rep_q.p_data[VAR_6];
        if (((void*)0) != VAR_8) {
            VAR_9 = FUNC_3(VAR_7 + VAR_5);
            FUNC_1(VAR_9, VAR_8, VAR_7);
            FUNC_1(VAR_9 + VAR_7, VAR_4, VAR_5);
            FUNC_2(VAR_8);
            VAR_1.main_rep_q.p_data[VAR_6] = VAR_9;
            VAR_1.main_rep_q.num_records[VAR_6] += VAR_3;
            VAR_1.main_rep_q.data_len[VAR_6] += VAR_5;
        } else {
            VAR_9 = FUNC_3(VAR_5);
            FUNC_1(VAR_9, VAR_4, VAR_5);
            VAR_1.main_rep_q.p_data[VAR_6] = VAR_9;
            VAR_1.main_rep_q.num_records[VAR_6] = VAR_3;
            VAR_1.main_rep_q.data_len[VAR_6] = VAR_5;
        }
    }
}
