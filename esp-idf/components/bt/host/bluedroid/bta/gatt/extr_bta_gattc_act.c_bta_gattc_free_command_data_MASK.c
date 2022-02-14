
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tBTA_GATTC_DATA ;
struct TYPE_3__ {int * p_q_cmd; int p_cmd_list; } ;
typedef TYPE_1__ tBTA_GATTC_CLCB ;
typedef int list_node_t ;


 int FUNC_0 (int ) ;
 int * FUNC_1 (int ) ;
 int * FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int * FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int ,void*) ;
 int FUNC_7 (int *) ;

void FUNC_8(tBTA_GATTC_CLCB *VAR_0)
{
    FUNC_0(VAR_0->p_cmd_list);

    if (!FUNC_3(VAR_0->p_cmd_list)) {


        for (list_node_t *VAR_1 = FUNC_1(VAR_0->p_cmd_list); VAR_1 != FUNC_2(VAR_0->p_cmd_list);
             VAR_1 = FUNC_4(VAR_1)) {
            tBTA_GATTC_DATA *VAR_2 = (tBTA_GATTC_DATA *)FUNC_5(VAR_1);
            if (VAR_2 == VAR_0->p_q_cmd) {
                FUNC_6(VAR_0->p_cmd_list, (void *)VAR_2);
                VAR_0->p_q_cmd = ((void*)0);
                return;
            }
        }

        FUNC_7(VAR_0->p_q_cmd);
        VAR_0->p_q_cmd = ((void*)0);
    } else {
        FUNC_7(VAR_0->p_q_cmd);
        VAR_0->p_q_cmd = ((void*)0);
    }
}
