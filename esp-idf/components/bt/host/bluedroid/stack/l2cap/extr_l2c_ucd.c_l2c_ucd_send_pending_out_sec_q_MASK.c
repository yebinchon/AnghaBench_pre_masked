
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* p_lcb; } ;
typedef TYPE_1__ tL2C_CCB ;
struct TYPE_6__ {int ucd_out_sec_pending_q; } ;
typedef int BT_HDR ;


 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 int FUNC_2 (TYPE_3__*,int *,int *) ;

void FUNC_3(tL2C_CCB *VAR_0)
{
    BT_HDR *VAR_1 = (BT_HDR*)FUNC_0(VAR_0->p_lcb->ucd_out_sec_pending_q, 0);

    if (VAR_1 != ((void*)0)) {
        FUNC_1 (VAR_0, (BT_HDR *)VAR_1);
        FUNC_2 (VAR_0->p_lcb, ((void*)0), ((void*)0));
    }
}
