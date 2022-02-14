
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ state; } ;
typedef TYPE_1__ tBTA_AG_SCB ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int *) ;

void FUNC_4 (tBTA_AG_SCB *VAR_2)
{
    if (VAR_2) {
        FUNC_0 ("bta_ag_resume_open, Handle(%d)", FUNC_2(VAR_2));

        if (VAR_2->state == VAR_0) {
            VAR_2->state = VAR_1;
            FUNC_3 (VAR_2, ((void*)0));
        }
    } else {
        FUNC_1 ("bta_ag_resume_open, Null p_scb");
    }
}
