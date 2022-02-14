
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pending_enc_clcb; } ;
typedef TYPE_1__ tGATT_TCB ;
struct TYPE_7__ {int * p_clcb; } ;
typedef TYPE_2__ tGATT_PENDING_ENC_CLCB ;
typedef int tGATT_CLCB ;
typedef int UINT16 ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,TYPE_2__*,int ) ;
 scalar_t__ FUNC_2 (int ) ;

tGATT_PENDING_ENC_CLCB *FUNC_3(tGATT_TCB *VAR_1, tGATT_CLCB *VAR_2 )
{
    tGATT_PENDING_ENC_CLCB *VAR_3;

    FUNC_0 ("gatt_add_pending_new_srv_start");
    if ((VAR_3 = (tGATT_PENDING_ENC_CLCB *)FUNC_2((UINT16)sizeof(tGATT_PENDING_ENC_CLCB))) != ((void*)0)) {
        FUNC_0 ("enqueue a new pending encryption channel clcb");
        VAR_3->p_clcb = VAR_2;
    FUNC_1(VAR_1->pending_enc_clcb, VAR_3, VAR_0);
    }
    return VAR_3;
}
