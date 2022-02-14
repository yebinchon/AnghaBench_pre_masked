
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* result; scalar_t__ semaphore; } ;
typedef TYPE_1__ future_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__*,int ) ;

void *FUNC_3(future_t *VAR_1)
{
    FUNC_0(VAR_1 != ((void*)0));


    if (VAR_1->semaphore) {
        FUNC_2(&VAR_1->semaphore, VAR_0);
    }

    void *VAR_2 = VAR_1->result;
    FUNC_1(VAR_1);
    return VAR_2;
}
