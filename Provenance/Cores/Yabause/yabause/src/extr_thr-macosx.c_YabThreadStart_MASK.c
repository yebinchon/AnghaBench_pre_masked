
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int running; void (* func ) (void*) ;int mutex; int cond; int thd; void* arg; } ;


 int FUNC_0 (int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int *,int ,TYPE_1__*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int ) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int VAR_4 ;

int FUNC_7(unsigned int VAR_5, void (*VAR_6)(void *), void *VAR_7) {

    FUNC_6(&VAR_0, VAR_1);


    if(VAR_3[VAR_5].running) {
        FUNC_0(VAR_2, "YabThreadStart: Thread %u is already started!\n", VAR_5);
        return -1;
    }


    if(FUNC_5(&VAR_3[VAR_5].mutex, ((void*)0))) {
        FUNC_0(VAR_2, "YabThreadStart: Error creating mutex\n");
        return -1;
    }

    if(FUNC_2(&VAR_3[VAR_5].cond, ((void*)0))) {
        FUNC_0(VAR_2, "YabThreadStart: Error creating condvar\n");
        FUNC_4(&VAR_3[VAR_5].mutex);
        return -1;
    }

    VAR_3[VAR_5].func = VAR_6;
    VAR_3[VAR_5].arg = VAR_7;


    if(FUNC_3(&VAR_3[VAR_5].thd, ((void*)0), VAR_4,
                      &VAR_3[VAR_5])) {
        FUNC_0(VAR_2, "YabThreadStart: Couldn't start thread\n");
        FUNC_1(&VAR_3[VAR_5].cond);
        FUNC_4(&VAR_3[VAR_5].mutex);
        return -1;
    }

    VAR_3[VAR_5].running = 1;

    return 0;
}
