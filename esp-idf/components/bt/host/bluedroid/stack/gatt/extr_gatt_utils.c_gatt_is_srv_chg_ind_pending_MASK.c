
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ handle; } ;
typedef TYPE_1__ tGATT_VALUE ;
struct TYPE_6__ {scalar_t__ indicate_handle; int pending_ind_q; } ;
typedef TYPE_2__ tGATT_TCB ;
typedef int list_t ;
typedef int list_node_t ;
struct TYPE_7__ {scalar_t__ handle_of_h_r; } ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int VAR_1 ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 TYPE_4__ VAR_2 ;
 int * FUNC_3 (int *) ;
 int const* FUNC_4 (int *) ;
 int * FUNC_5 (int const*) ;
 scalar_t__ FUNC_6 (int const*) ;

BOOLEAN FUNC_7 (tGATT_TCB *VAR_3)
{
    BOOLEAN VAR_4 = VAR_0;

    FUNC_0("gatt_is_srv_chg_ind_pending is_queue_empty=%d",
                     FUNC_2(VAR_3->pending_ind_q));

    if (VAR_3->indicate_handle == VAR_2.handle_of_h_r) {
        VAR_4 = VAR_1;
    } else if (! FUNC_2(VAR_3->pending_ind_q)) {
        list_t *VAR_5 = FUNC_1(VAR_3->pending_ind_q);
        for (const list_node_t *VAR_6 = FUNC_3(VAR_5);
             VAR_6 != FUNC_4(VAR_5);
             VAR_6 = FUNC_5(VAR_6)) {
            tGATT_VALUE *VAR_7 = (tGATT_VALUE *)FUNC_6(VAR_6);
            if (VAR_7->handle == VAR_2.handle_of_h_r)
            {
                VAR_4 = VAR_1;
                break;
            }
        }
    }

    FUNC_0("srv_chg_ind_pending = %d", VAR_4);
    return VAR_4;
}
