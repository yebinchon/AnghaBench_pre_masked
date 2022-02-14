
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int tSMP_INT_DATA ;
struct TYPE_4__ {int rand_enc_proc_state; int div; int pairing_bda; } ;
typedef TYPE_1__ tSMP_CB ;
typedef scalar_t__ BOOLEAN ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(tSMP_CB *VAR_1, tSMP_INT_DATA *VAR_2)
{
    FUNC_1(VAR_2);

    BOOLEAN VAR_3;

    FUNC_0 ("smp_generate_csrk");

    VAR_3 = FUNC_2(VAR_1->pairing_bda, &VAR_1->div);
    if (VAR_3) {
        FUNC_4(VAR_1, ((void*)0));
    } else {
        FUNC_0 ("Generate DIV for CSRK");
        VAR_1->rand_enc_proc_state = VAR_0;
        if (!FUNC_3((void *)FUNC_5)) {
            FUNC_5(((void*)0));
        }
    }
}
