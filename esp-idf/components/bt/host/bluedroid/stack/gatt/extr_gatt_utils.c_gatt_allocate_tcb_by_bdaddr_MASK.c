
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t tcb_idx; int peer_bda; int transport; void* in_use; void* pending_ind_q; void* pending_enc_clcb; } ;
typedef TYPE_1__ tGATT_TCB ;
typedef int tBT_TRANSPORT ;
typedef size_t UINT8 ;
struct TYPE_6__ {TYPE_1__* tcb; } ;
typedef void* BOOLEAN ;
typedef int BD_ADDR ;


 int VAR_0 ;
 void* VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* FUNC_0 (int ) ;
 TYPE_3__ VAR_5 ;
 size_t FUNC_1 (int ,int ) ;
 size_t FUNC_2 () ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

tGATT_TCB *FUNC_5(BD_ADDR VAR_6, tBT_TRANSPORT VAR_7)
{
    UINT8 VAR_8 = 0;
    BOOLEAN VAR_9 = VAR_1;
    tGATT_TCB *VAR_10 = ((void*)0);


    VAR_8 = FUNC_1(VAR_6, VAR_7);

    if (VAR_8 == VAR_2) {
        VAR_8 = FUNC_2();
        VAR_9 = VAR_4;
    }
    if (VAR_8 != VAR_2) {
        VAR_10 = &VAR_5.tcb[VAR_8];

        if (VAR_9) {
            FUNC_4(VAR_10, 0, sizeof(tGATT_TCB));
            VAR_10->pending_enc_clcb = FUNC_0(VAR_3);
            VAR_10->pending_ind_q = FUNC_0(VAR_3);
            VAR_10->in_use = VAR_4;
            VAR_10->tcb_idx = VAR_8;
            VAR_10->transport = VAR_7;
        }
        FUNC_3(VAR_10->peer_bda, VAR_6, VAR_0);
    }
    return VAR_10;
}
