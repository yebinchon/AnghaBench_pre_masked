
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int value; int len; int handle; int conn_id; } ;
typedef TYPE_1__ tGATT_VALUE ;
struct TYPE_6__ {int pending_ind_q; } ;
typedef TYPE_2__ tGATT_TCB ;


 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,TYPE_1__*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(tGATT_TCB *VAR_0 )
{

    tGATT_VALUE *VAR_1 = (tGATT_VALUE *)FUNC_2(VAR_0->pending_ind_q);
    FUNC_1("gatts_chk_pending_ind");

    if (VAR_1 ) {
        FUNC_0 (VAR_1->conn_id,
                                     VAR_1->handle,
                                     VAR_1->len,
                                     VAR_1->value);
        FUNC_4(FUNC_3(VAR_0->pending_ind_q,
                                                      VAR_1));
    }

}
