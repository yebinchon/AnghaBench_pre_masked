
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__* cback_cnt; } ;
struct TYPE_6__ {TYPE_1__ sr_cmd; } ;
typedef TYPE_2__ tGATT_TCB ;
typedef scalar_t__ tGATT_IF ;
typedef size_t UINT8 ;
typedef scalar_t__ BOOLEAN ;


 int FUNC_0 (TYPE_2__*) ;

void FUNC_1(tGATT_TCB *VAR_0, tGATT_IF VAR_1, BOOLEAN VAR_2, BOOLEAN VAR_3)
{

    UINT8 VAR_4 = ((UINT8) VAR_1) - 1 ;

    if (VAR_0) {
        if (VAR_3) {
            FUNC_0(VAR_0);
        }
        if (VAR_2) {
            VAR_0->sr_cmd.cback_cnt[VAR_4]++;
        } else {
            if ( VAR_0->sr_cmd.cback_cnt[VAR_4]) {
                VAR_0->sr_cmd.cback_cnt[VAR_4]--;
            }
        }
    }

}
