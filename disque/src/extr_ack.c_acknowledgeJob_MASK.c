
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ state; int * nodes_confirmed; } ;
typedef TYPE_1__ job ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int ) ;

void FUNC_4(job *VAR_1) {
    if (VAR_1->state == VAR_0) return;

    FUNC_1(VAR_1);
    VAR_1->state = VAR_0;



    if (VAR_1->nodes_confirmed) {
        FUNC_2(VAR_1->nodes_confirmed);
        VAR_1->nodes_confirmed = ((void*)0);
    }
    FUNC_3(VAR_1,0);
    FUNC_0(VAR_1);
}
