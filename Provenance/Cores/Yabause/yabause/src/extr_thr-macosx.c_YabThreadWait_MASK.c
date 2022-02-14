
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ running; int * func; int * thd; int mutex; int cond; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__* VAR_0 ;

void FUNC_3(unsigned int VAR_1) {

    if(!VAR_0[VAR_1].running)
        return;


    FUNC_1(VAR_0[VAR_1].thd, ((void*)0));


    FUNC_0(&VAR_0[VAR_1].cond);
    FUNC_2(&VAR_0[VAR_1].mutex);
    VAR_0[VAR_1].thd = ((void*)0);
    VAR_0[VAR_1].func = ((void*)0);

    VAR_0[VAR_1].running = 0;
}
