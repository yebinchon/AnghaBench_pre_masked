
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int (* dequeue_ready ) (TYPE_1__*) ;} ;
typedef TYPE_1__ fixed_queue_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(fixed_queue_t *VAR_0)
{
    FUNC_0(VAR_0 != ((void*)0));

    if (VAR_0->dequeue_ready) {
        VAR_0->dequeue_ready(VAR_0);
    }
}
