
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {TYPE_4__* p_lcb; int local_cid; TYPE_1__* p_rcb; scalar_t__ local_id; } ;
typedef TYPE_2__ tL2C_CCB ;
typedef int UINT8 ;
struct TYPE_9__ {scalar_t__ id; } ;
struct TYPE_7__ {int real_psm; } ;
typedef int BT_HDR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_4__*,int *,int *) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int * FUNC_4 (TYPE_4__*,int ,int ,scalar_t__) ;

void FUNC_5 (tL2C_CCB *VAR_7)
{
    BT_HDR *VAR_8;
    UINT8 *VAR_9;


    VAR_7->p_lcb->id++;
    FUNC_3(VAR_7->p_lcb, VAR_1);

    VAR_7->local_id = VAR_7->p_lcb->id;

    if ((VAR_8 = FUNC_4 (VAR_7->p_lcb, VAR_4, VAR_2,
                                    VAR_7->local_id)) == ((void*)0)) {
        FUNC_0 ("L2CAP - no buffer for conn_req");
        return;
    }

    VAR_9 = (UINT8 *)(VAR_8 + 1) + VAR_6 + VAR_0 +
        VAR_5 + VAR_3;

    FUNC_1 (VAR_9, VAR_7->p_rcb->real_psm);
    FUNC_1 (VAR_9, VAR_7->local_cid);

    FUNC_2 (VAR_7->p_lcb, ((void*)0), VAR_8);
}
