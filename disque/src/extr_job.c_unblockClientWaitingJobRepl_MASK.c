
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_4__* job; } ;
struct TYPE_6__ {TYPE_1__ bpop; } ;
typedef TYPE_2__ client ;
struct TYPE_7__ {scalar_t__ state; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;

void FUNC_1(client *VAR_2) {



    if (VAR_2->bpop.job->state == VAR_1) {



        VAR_2->bpop.job->state = VAR_0;
        FUNC_0(VAR_2->bpop.job);
    }
    VAR_2->bpop.job = ((void*)0);
}
