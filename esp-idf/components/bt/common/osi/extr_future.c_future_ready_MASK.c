
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ready_can_be_called; int semaphore; void* result; } ;
typedef TYPE_1__ future_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;

void FUNC_2(future_t *VAR_0, void *VAR_1)
{
    FUNC_0(VAR_0 != ((void*)0));
    FUNC_0(VAR_0->ready_can_be_called);

    VAR_0->ready_can_be_called = 0;
    VAR_0->result = VAR_1;
    FUNC_1(&VAR_0->semaphore);
}
