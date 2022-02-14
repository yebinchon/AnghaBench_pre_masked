
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int stop; scalar_t__ thread_handle; int work_sem; } ;
typedef TYPE_1__ osi_thread_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static void FUNC_4(osi_thread_t *VAR_0)
{
    int VAR_1;

    FUNC_0(VAR_0 != ((void*)0));


    VAR_0->stop = 1;
    FUNC_1(&VAR_0->work_sem);


    VAR_1 = FUNC_2(VAR_0, 1000);


    if (VAR_1 != 0 && VAR_0->thread_handle) {
        FUNC_3(VAR_0->thread_handle);
    }
}
