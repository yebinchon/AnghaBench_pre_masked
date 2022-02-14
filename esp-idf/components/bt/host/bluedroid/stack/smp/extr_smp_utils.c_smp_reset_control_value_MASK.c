
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int pairing_bda; scalar_t__ flags; int rsp_timer_ent; } ;
typedef TYPE_1__ tSMP_CB ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(tSMP_CB *VAR_2)
{
    FUNC_1("smp_reset_control_value\n");
    FUNC_2 (&VAR_2->rsp_timer_ent);
    VAR_2->flags = 0;




    FUNC_0(VAR_2->pairing_bda, VAR_1, VAR_0);


    FUNC_4(VAR_2);
    FUNC_3(VAR_2);
}
