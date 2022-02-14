
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int name; int * clients; } ;
typedef TYPE_1__ queue ;
struct TYPE_5__ {int ready_queues; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ,int *) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 TYPE_3__ VAR_1 ;

void FUNC_3(queue *VAR_2) {
    if (VAR_2->clients == ((void*)0) || FUNC_2(VAR_2->clients) == 0) return;
    if (FUNC_0(VAR_1.ready_queues,VAR_2->name,((void*)0)) == VAR_0)
        FUNC_1(VAR_2->name);
}
