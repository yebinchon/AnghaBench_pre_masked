
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int list_node_t ;
struct TYPE_7__ {int rcv_hold_tle; int rcv_pending_q; } ;
struct TYPE_6__ {scalar_t__ layer_specific; } ;
typedef TYPE_1__ BT_HDR ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_4__ VAR_2 ;
 int * FUNC_4 (int ) ;
 int const* FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int * FUNC_7 (int const*) ;
 TYPE_1__* FUNC_8 (int const*) ;
 int FUNC_9 (int ,TYPE_1__*) ;

void FUNC_10(BOOLEAN VAR_3)
{
    if (FUNC_6(VAR_2.rcv_pending_q)) {
        return;
    }

    if (!VAR_3) {
        FUNC_2(&VAR_2.rcv_hold_tle);
        FUNC_0("L2CAP HOLD CONTINUE");
    } else {
        FUNC_0("L2CAP HOLD TIMEOUT");
    }

    for (const list_node_t *VAR_4 = FUNC_4(VAR_2.rcv_pending_q);
            VAR_4 != FUNC_5(VAR_2.rcv_pending_q);) {
        BT_HDR *VAR_5 = FUNC_8(VAR_4);
        VAR_4 = FUNC_7(VAR_4);
        if (!VAR_3 || (!VAR_5->layer_specific) || (--VAR_5->layer_specific == 0)) {
            FUNC_9(VAR_2.rcv_pending_q, VAR_5);
            VAR_5->layer_specific = 0xFFFF;
            FUNC_3(VAR_5);
        }
    }


    if (!FUNC_6(VAR_2.rcv_pending_q)) {
        FUNC_1 (&VAR_2.rcv_hold_tle, VAR_0, VAR_1);
    }
}
