
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ operation; int counter; TYPE_2__* p_tcb; } ;
typedef TYPE_1__ tGATT_CLCB ;
typedef int UINT8 ;
struct TYPE_8__ {int pending_enc_clcb; } ;
typedef int BOOLEAN ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ,int *) ;
 int FUNC_4 (TYPE_2__*,int ) ;

void FUNC_5(BOOLEAN VAR_4, tGATT_CLCB *VAR_5, UINT8 VAR_6)
{
    if (VAR_5 && VAR_5->p_tcb &&
        FUNC_0(VAR_5->p_tcb->pending_enc_clcb)) {
        FUNC_4(VAR_5->p_tcb, VAR_3);
    }

    if (!VAR_4) {
        FUNC_3(VAR_5, VAR_2, ((void*)0));
    } else if (VAR_5->operation == VAR_1) {
        FUNC_2(VAR_5, VAR_6);
    } else if (VAR_5->operation == VAR_0) {
        FUNC_1(VAR_5, VAR_5->counter);
    }

}
