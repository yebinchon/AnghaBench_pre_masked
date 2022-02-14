
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int rsp_timer_ent; scalar_t__ in_use; } ;
typedef TYPE_1__ tGATT_CLCB ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void FUNC_2 (tGATT_CLCB *VAR_0)
{
    if (VAR_0 && VAR_0->in_use) {
        FUNC_0(&VAR_0->rsp_timer_ent);
        FUNC_1(VAR_0, 0, sizeof(tGATT_CLCB));
    }
}
