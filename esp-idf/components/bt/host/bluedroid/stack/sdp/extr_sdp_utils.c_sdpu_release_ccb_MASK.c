
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * rsp_list; int is_attr_search; int con_state; int timer_entry; } ;
typedef TYPE_1__ tCONN_CB ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3 (tCONN_CB *VAR_2)
{

    FUNC_1(&VAR_2->timer_entry);


    VAR_2->con_state = VAR_1;

    VAR_2->is_attr_search = VAR_0;



    if (VAR_2->rsp_list) {
        FUNC_0("releasing SDP rsp_list\n");

        FUNC_2(VAR_2->rsp_list);
        VAR_2->rsp_list = ((void*)0);
    }
}
