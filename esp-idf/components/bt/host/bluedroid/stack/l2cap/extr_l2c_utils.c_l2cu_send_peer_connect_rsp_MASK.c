
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int p_lcb; int remote_cid; int local_cid; int remote_id; } ;
typedef TYPE_1__ tL2C_CCB ;
typedef int UINT8 ;
typedef int UINT16 ;
typedef int BT_HDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ,int *,int *) ;
 int * FUNC_3 (int ,int ,int ,int ) ;

void FUNC_4 (tL2C_CCB *VAR_8, UINT16 VAR_9, UINT16 VAR_10)
{
    BT_HDR *VAR_11;
    UINT8 *VAR_12;

    if (VAR_9 == VAR_4) {

        if (VAR_8->flags & VAR_0) {
            return;
        } else {
            VAR_8->flags |= VAR_0;
        }
    }

    if ((VAR_11 = FUNC_3(VAR_8->p_lcb, VAR_5, VAR_2, VAR_8->remote_id)) == ((void*)0)) {
        FUNC_0 ("L2CAP - no buffer for conn_rsp");
        return;
    }

    VAR_12 = (UINT8 *)(VAR_11 + 1) + VAR_7 + VAR_1 +
        VAR_6 + VAR_3;

    FUNC_1 (VAR_12, VAR_8->local_cid);
    FUNC_1 (VAR_12, VAR_8->remote_cid);
    FUNC_1 (VAR_12, VAR_9);
    FUNC_1 (VAR_12, VAR_10);

    FUNC_2 (VAR_8->p_lcb, ((void*)0), VAR_11);
}
