
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pending_enc_clcb; } ;
typedef TYPE_1__ tGATT_TCB ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;

void FUNC_5(tGATT_TCB *VAR_0)
{
    FUNC_0("gatt_free_pending_enc_queue");
    if (VAR_0->pending_enc_clcb == ((void*)0)) {
        return;
    }


    while (!FUNC_3(VAR_0->pending_enc_clcb)) {
        FUNC_4(FUNC_1(VAR_0->pending_enc_clcb, 0));
    }
 FUNC_2(VAR_0->pending_enc_clcb, ((void*)0));
    VAR_0->pending_enc_clcb = ((void*)0);
}
