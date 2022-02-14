
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int status; } ;
typedef TYPE_3__ tL2C_CONN_INFO ;
struct TYPE_14__ {scalar_t__ local_cid; TYPE_5__* p_lcb; TYPE_2__* p_rcb; int timer_entry; int remote_cid; int remote_id; int chnl_state; } ;
typedef TYPE_4__ tL2C_CCB ;
typedef int UINT16 ;
struct TYPE_15__ {scalar_t__ handle; int remote_bd_addr; int w4_info_rsp; } ;
struct TYPE_11__ {int (* pL2CA_ConnectInd_Cb ) (int ,scalar_t__,int ,int ) ;} ;
struct TYPE_12__ {int psm; TYPE_1__ api; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,scalar_t__,int ,int *,TYPE_4__*) ;
 int FUNC_4 (scalar_t__,int ) ;
 int FUNC_5 (int *,int ,int) ;
 int FUNC_6 (int) ;
 int VAR_10 ;
 scalar_t__ FUNC_7 (TYPE_4__*,int,void*) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*,int ,int ) ;
 int FUNC_10 (TYPE_5__*,int ,scalar_t__,int ) ;
 int FUNC_11 (void*) ;
 int FUNC_12 (int ,scalar_t__,int ,int ) ;

__attribute__((used)) static void FUNC_13 (tL2C_CCB *VAR_11, UINT16 VAR_12, void *VAR_13)
{

    FUNC_1 ("L2CAP - LCID: 0x%04x  st: TERM_W4_SEC_COMP  evt: %s", VAR_11->local_cid, FUNC_6 (VAR_12));





    if ( VAR_11->local_cid == VAR_6 ) {

        if ( FUNC_7 (VAR_11, VAR_12, VAR_13) ) {

            return;
        }
    }


    switch (VAR_12) {
    case 132:

        FUNC_2 (VAR_11->p_lcb->remote_bd_addr);

        FUNC_8 (VAR_11);
        break;

    case 131:
        VAR_11->chnl_state = VAR_2;


        if (!VAR_11->p_lcb->w4_info_rsp) {

            FUNC_5 (&VAR_11->timer_entry, VAR_1, VAR_5);
            FUNC_0 ("L2CAP - Calling Connect_Ind_Cb(), CID: 0x%04x", VAR_11->local_cid);

            (*VAR_11->p_rcb->api.pL2CA_ConnectInd_Cb) (VAR_11->p_lcb->remote_bd_addr, VAR_11->local_cid,
                    VAR_11->p_rcb->psm, VAR_11->remote_id);
        } else {
            FUNC_9(VAR_11, VAR_7, 0);
        }
        break;

    case 130:
        if (((tL2C_CONN_INFO *)VAR_13)->status == VAR_0) {

            FUNC_5 (&VAR_11->timer_entry, VAR_1, VAR_9);
        } else {
            FUNC_9 (VAR_11, VAR_8, 0);
            FUNC_8 (VAR_11);
        }
        break;

    case 134:
    case 136:
        FUNC_11 (VAR_13);
        break;

    case 133:
        FUNC_8 (VAR_11);
        break;

    case 135:
        FUNC_10 (VAR_11->p_lcb, VAR_11->remote_id, VAR_11->local_cid, VAR_11->remote_cid);


        FUNC_2 (VAR_11->p_lcb->remote_bd_addr);

        FUNC_8 (VAR_11);
        break;

    case 128:

        if (!FUNC_4 (VAR_11->p_lcb->handle, VAR_4)) {
            FUNC_0 ("L2CAP - Calling btsnd_hcic_disconnect for handle %i failed", VAR_11->p_lcb->handle);
            FUNC_5 (&VAR_11->timer_entry, VAR_1, 1);
        }
        break;

    case 129:
        FUNC_3 (VAR_11->p_lcb->remote_bd_addr, VAR_11->p_rcb->psm,
                                  VAR_11->p_lcb->handle, VAR_3, &VAR_10, VAR_11);
        break;
    }
}
