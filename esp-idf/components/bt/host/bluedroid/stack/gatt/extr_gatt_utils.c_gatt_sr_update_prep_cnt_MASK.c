
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__* prep_cnt; int tcb_idx; } ;
typedef TYPE_1__ tGATT_TCB ;
typedef scalar_t__ tGATT_IF ;
typedef size_t UINT8 ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (char*,int ,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(tGATT_TCB *VAR_0, tGATT_IF VAR_1, BOOLEAN VAR_2, BOOLEAN VAR_3)
{
    UINT8 VAR_4 = ((UINT8) VAR_1) - 1 ;

    FUNC_0("gatt_sr_update_prep_cnt tcb idx=%d gatt_if=%d is_inc=%d is_reset_first=%d",
                     VAR_0->tcb_idx, VAR_1, VAR_2, VAR_3);

    if (VAR_0) {
        if (VAR_3) {
            FUNC_1(VAR_0);
        }
        if (VAR_2) {
            VAR_0->prep_cnt[VAR_4]++;
        } else {
            if (VAR_0->prep_cnt[VAR_4]) {
                VAR_0->prep_cnt[VAR_4]--;
            }
        }
    }
}
