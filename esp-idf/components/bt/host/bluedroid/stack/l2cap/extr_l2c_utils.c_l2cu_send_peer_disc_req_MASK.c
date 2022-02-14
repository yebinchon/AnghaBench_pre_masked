
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ mode; } ;
struct TYPE_11__ {TYPE_1__ fcr; } ;
struct TYPE_12__ {TYPE_6__* p_lcb; int xmit_hold_q; TYPE_2__ peer_cfg; int local_cid; int remote_cid; scalar_t__ local_id; } ;
typedef TYPE_3__ tL2C_CCB ;
typedef int UINT8 ;
struct TYPE_13__ {scalar_t__ id; } ;
typedef int BT_HDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_6__*,TYPE_3__*,int *) ;
 int FUNC_4 (TYPE_6__*,int ) ;
 int * FUNC_5 (TYPE_6__*,int ,int ,scalar_t__) ;
 int FUNC_6 (int *,TYPE_3__*) ;

void FUNC_7 (tL2C_CCB *VAR_8)
{
    BT_HDR *VAR_9, *VAR_10;
    UINT8 *VAR_11;


    VAR_8->p_lcb->id++;
    FUNC_4(VAR_8->p_lcb, VAR_1);

    VAR_8->local_id = VAR_8->p_lcb->id;

    if ((VAR_9 = FUNC_5(VAR_8->p_lcb, VAR_4, VAR_2, VAR_8->local_id)) == ((void*)0)) {
        FUNC_0 ("L2CAP - no buffer for disc_req");
        return;
    }

    VAR_11 = (UINT8 *)(VAR_9 + 1) + VAR_7 + VAR_0 + VAR_6 + VAR_3;

    FUNC_1 (VAR_11, VAR_8->remote_cid);
    FUNC_1 (VAR_11, VAR_8->local_cid);




    if (VAR_8->peer_cfg.fcr.mode == VAR_5) {
        while ((VAR_10 = (BT_HDR *)FUNC_2(VAR_8->xmit_hold_q, 0)) != ((void*)0)) {
            FUNC_6 (VAR_10, VAR_8);
            FUNC_3 (VAR_8->p_lcb, VAR_8, VAR_10);
        }
    }

    FUNC_3 (VAR_8->p_lcb, ((void*)0), VAR_9);
}
