
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * p_inst_id; int * p_sub_code; } ;
struct TYPE_4__ {TYPE_1__ op_q; int * p_adv_inst; } ;


 TYPE_2__ VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int *) ;

void FUNC_1(void)
{
    if (VAR_0.p_adv_inst) {
        FUNC_0(VAR_0.p_adv_inst);
        VAR_0.p_adv_inst = ((void*)0);
    }

    if (VAR_0.op_q.p_sub_code) {
        FUNC_0(VAR_0.op_q.p_sub_code);
        VAR_0.op_q.p_sub_code = ((void*)0);
    }

    if (VAR_0.op_q.p_inst_id) {
        FUNC_0(VAR_0.op_q.p_inst_id);
        VAR_0.op_q.p_inst_id = ((void*)0);
    }


    FUNC_0(VAR_1);
    FUNC_0(VAR_2);
    VAR_1 = ((void*)0);
    VAR_2 = ((void*)0);

}
