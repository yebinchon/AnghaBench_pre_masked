
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ mtu; } ;
struct TYPE_10__ {scalar_t__ cong_sent; int buff_quota; int xmit_hold_q; int local_cid; TYPE_1__ peer_cfg; } ;
typedef TYPE_2__ tL2C_CCB ;
typedef int UINT8 ;
typedef int UINT16 ;
struct TYPE_11__ {scalar_t__ len; int layer_specific; } ;
typedef TYPE_3__ BT_HDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (char*,int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*,int ,TYPE_3__*) ;
 TYPE_2__* FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_3__*) ;

UINT8 FUNC_6 (UINT16 VAR_4, BT_HDR *VAR_5, UINT16 VAR_6)
{
    tL2C_CCB *VAR_7;


    if ((VAR_7 = FUNC_4 (((void*)0), VAR_4)) == ((void*)0)) {
        FUNC_1 ("L2CAP - no CCB for L2CA_DataWrite, CID: %d", VAR_4);
        FUNC_5 (VAR_5);
        return (VAR_1);
    }



    if (VAR_5->len > VAR_7->peer_cfg.mtu) {
        FUNC_1 ("L2CAP - CID: 0x%04x  cannot send message bigger than peer's mtu size", VAR_4);
        FUNC_5 (VAR_5);
        return (VAR_1);
    }



    VAR_5->layer_specific = VAR_6;


    if (VAR_7->cong_sent) {
        FUNC_0 ("L2CAP - CID: 0x%04x cannot send, already congested  xmit_hold_q.count: %u  buff_quota: %u",
                           VAR_7->local_cid,
                           FUNC_2(VAR_7->xmit_hold_q),
                           VAR_7->buff_quota);

        FUNC_5 (VAR_5);
        return (VAR_1);
    }




    FUNC_3 (VAR_7, VAR_3, VAR_5);

    if (VAR_7->cong_sent) {
        return (VAR_0);
    }
    return (VAR_2);
}
