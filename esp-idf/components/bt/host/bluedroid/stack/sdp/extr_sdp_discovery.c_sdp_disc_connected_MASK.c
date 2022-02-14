
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ num_handles; int disc_state; scalar_t__ is_attr_search; } ;
typedef TYPE_1__ tCONN_CB ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*,int ,int *) ;

void FUNC_2 (tCONN_CB *VAR_1)
{
    if (VAR_1->is_attr_search) {
        VAR_1->disc_state = VAR_0;

        FUNC_0 (VAR_1, ((void*)0));
    } else {




        VAR_1->num_handles = 0;
        FUNC_1(VAR_1, 0, ((void*)0));
    }

}
